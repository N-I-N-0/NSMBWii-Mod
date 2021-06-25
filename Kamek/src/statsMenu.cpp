#include <common.h>
#include <game.h>
#include "sfx.h"

class dStatsMenu_c : public dStageActor_c {
	public:
		static dActor_c *build();
		static dStatsMenu_c *instance;

		dStatsMenu_c();

		int onCreate();
		int onDelete();
		int onExecute();
		int onDraw();

		int beforeExecute() { return true; }
		int afterExecute(int) { return true; }
		int beforeDraw() { return true; }
		int afterDraw(int) { return true; }

		m2d::EmbedLayout_c layout;
		bool layoutLoaded;

		bool visible;
		float scaleEase;
		int timer;

		int selected, lastTopRowChoice;

		nw4r::lyt::TextBox
			*T_numberS_00, *T_number_00,
			*T_one_00, *T_one_01,
			*T_two_00, *T_two_01,
			*T_three_00, *T_three_01,
			*T_four_00, *T_four_01,
			*T_five_00, *T_five_01,
			*T_six_00, *T_six_01,
			*T_seven_00, *T_seven_01,
			*T_eight_00, *T_eight_01,
			*T_nine_00, *T_nine_01;

		nw4r::lyt::Picture
			*BtnLeft[3], *BtnMid[3], *BtnRight[3];

		nw4r::lyt::Pane
			*Buttons[3];



		void selectNumber(int num);

		dStateWrapper_c<dStatsMenu_c> state;

		USING_STATES(dStatsMenu_c);
		DECLARE_STATE(Hidden);
		DECLARE_STATE(ShowWait);
		DECLARE_STATE(ButtonActivateWait);
		DECLARE_STATE(Wait);
		DECLARE_STATE(HideWait);
};

CREATE_STATE(dStatsMenu_c, Hidden);
CREATE_STATE(dStatsMenu_c, ShowWait);
CREATE_STATE(dStatsMenu_c, ButtonActivateWait);
CREATE_STATE(dStatsMenu_c, Wait);
CREATE_STATE(dStatsMenu_c, HideWait);

dStatsMenu_c *dStatsMenu_c::instance = 0;
dActor_c *dStatsMenu_c::build() {
	void *buffer = AllocFromGameHeap1(sizeof(dStatsMenu_c));
	dStatsMenu_c *c = new(buffer) dStatsMenu_c;

	instance = c;
	return c;
}

const char *StatsMenuFileList[] = {0};
const SpriteData StatsMenuSpriteData = { ProfileId::NumPad, 8, -8 , 0 , 0, 0x100, 0x100, 0, 0, 0, 0, 0 };
Profile StatsMenuProfile(&dStatsMenu_c::build, SpriteId::StatsMenu, StatsMenuSpriteData, ProfileId::StatsMenu, ProfileId::StatsMenu, "StatsMenu", StatsMenuFileList);


#define ANIM_WINDOW_IN 0
#define ANIM_WINDOW_LOOP 1
#define ANIM_WINDOW_OUT 2
#define ANIM_BUTTON_HIT 3 //3, 4, 5
#define ANIM_BUTTON_IDLE 6 //6, 7, 8
#define ANIM_BUTTON_OFF 9 //9, 10, 11
#define ANIM_BUTTON_ON 12 //12, 13, 14

int numberToSelect;
int num1 = -1;
int num2 = -1;
int num3 = -1;
int finalNumber;

/*****************************************************************************/
// Events

dStatsMenu_c::dStatsMenu_c() : state(this, &StateID_ShowWait) {
	layoutLoaded = false;
	visible = false;
}

int dStatsMenu_c::onCreate() {
	if (!layoutLoaded) {
		OSReport("1\n");
		bool gotFile = layout.loadArc("statsMenu.arc", false);
		if (!gotFile)
			return false;

		selected = 1;
		lastTopRowChoice = 1;

		layout.build("statsMenu.brlyt");

		OSReport("2\n");
		if (IsWideScreen()) {
			layout.layout.rootPane->scale.x = 1.0f;
		} else {
			layout.clippingEnabled = true;
			layout.clipX = 0;
			layout.clipY = 52;
			layout.clipWidth = 640;
			layout.clipHeight = 352;
			layout.layout.rootPane->scale.x = 0.731f;
			layout.layout.rootPane->scale.y = 0.7711f;
		}

		OSReport("3\n");
		static const char *brlanNames[] = {
			"statsMenu_hitButton.brlan",
			"statsMenu_idleButton.brlan",
			"statsMenu_inWindow.brlan",
			"statsMenu_loopWindow.brlan",
			"statsMenu_offButon.brlan",
			"statsMenu_onButton.brlan",
			"statsMenu_outWindow.brlan",
		};

		OSReport("4\n");
		static const char *groupNames[] = {
			"A00_inWindow",     "A00_inWindow",   "A00_inWindow", 
			"B00_tuzukuButton", "B02_menuButton", "Group_00",
			"B00_tuzukuButton", "B02_menuButton", "Group_00",
			"B00_tuzukuButton", "B02_menuButton", "Group_00",
			"B00_tuzukuButton", "B02_menuButton", "Group_00",
		};
		static const int brlanIDs[] = {
			2,  3,  6,  //A00_inWindow (in, loop, out)
			0,  0,  0,  //Buttons      (hit)
			1,  1,  1,  //Buttons      (idle)
			4,  4,  4,  //Buttons      (off)
			5,  5,  5,  //Buttons      (on)
		};

		OSReport("5\n");

		layout.loadAnimations(brlanNames, 7);
		OSReport("loadAnimations\n");
		layout.loadGroups(groupNames, brlanIDs, 15);
		OSReport("loadGroups\n");
		layout.disableAllAnimations();
		OSReport("disableAllAnimations\n");

		layout.drawOrder = 140;
		OSReport("6\n");

		static const char *tbNames[] = {
			"T_numberS_00", "T_number_00",
			"T_one_00", "T_one_01",
			"T_two_00", "T_two_01",
			"T_three_00", "T_three_01",
			"T_four_00", "T_four_01",
			"T_five_00", "T_five_01",
			"T_six_00", "T_six_01",
			"T_seven_00", "T_seven_01",
			"T_eight_00", "T_eight_01",
			"T_nine_00", "T_nine_01",
		};
		layout.getTextBoxes(tbNames, &T_numberS_00, 20);

		OSReport("7\n");
		/*for (int i = 1; i < 10; i++) {
			char middle[16];
			sprintf(middle, "YesButtonMidd_0%d", i);
			BtnMid[i - 1] = layout.findPictureByName(middle);

			char right[16];
			sprintf(right, "YesButtonRigh_0%d", i);
			BtnRight[i - 1] = layout.findPictureByName(right);
			
			char left[16];
			sprintf(left, "YesButtonLeft_0%d", i);
			BtnLeft[i - 1] = layout.findPictureByName(left);
		}*/
		
		BtnLeft[0]  = layout.findPictureByName("Btn1_Left");
		BtnMid[0]   = layout.findPictureByName("Btn1_Middle");
		BtnRight[0] = layout.findPictureByName("Btn1_Right");
		BtnLeft[1]  = layout.findPictureByName("Btn2_Left");
		BtnMid[1]   = layout.findPictureByName("Btn2_Middle");
		BtnRight[1] = layout.findPictureByName("Btn2_Right");
		BtnLeft[2]  = layout.findPictureByName("Btn2_Left_00");
		BtnMid[2]   = layout.findPictureByName("Btn2_Middle_00");
		BtnRight[2] = layout.findPictureByName("Btn2_Right_00");
		
		OSReport("8\n");
		//Buttons[0] = layout.findPaneByName("W_SButton_0");
		//Buttons[1] = layout.findPaneByName("W_SButton_2");
		//Buttons[2] = layout.findPaneByName("W_SButton_00");
		//OSReport("Found buttons: %p, %p, %p, %p, %p, %p, %p, %p, %p\n", Buttons[0], Buttons[1], Buttons[2], Buttons[3], Buttons[4], Buttons[5], Buttons[6], Buttons[7], Buttons[8]);

		layoutLoaded = true;
	}

	visible = false;

	return true;
}

int dStatsMenu_c::onExecute() {
	state.execute();

	layout.execAnimations();
	layout.update();

	return true;
}

int dStatsMenu_c::onDraw() {
	if (visible) {
		layout.scheduleForDrawing();
	}
	
	return true;
}

int dStatsMenu_c::onDelete() {
	instance = 0;
	if (StageC4::instance)
		StageC4::instance->_1D = 0; // disable no-pause

	return layout.free();
}



// Hidden
void dStatsMenu_c::beginState_Hidden() { }
void dStatsMenu_c::executeState_Hidden() { }
void dStatsMenu_c::endState_Hidden() { }

// ShowWait
void dStatsMenu_c::beginState_ShowWait() {
	OSReport("9\n");
	nw4r::snd::SoundHandle handle;
	PlaySoundWithFunctionB4(SoundRelatedClass, &handle, SE_SYS_KO_DIALOGUE_IN, 1);
	OSReport("10\n");

	layout.disableAllAnimations();
	layout.enableNonLoopAnim(ANIM_WINDOW_APPEAR);
	OSReport("11\n");
	visible = true;
	scaleEase = 0.0;
	StageC4::instance->_1D = 1; // enable no-pause
}
void dStatsMenu_c::executeState_ShowWait() {
	OSReport("12\n");
	if (!layout.isAnimOn(ANIM_WINDOW_APPEAR)) {
		selected = 1;
		OSReport("13\n");
		layout.enableNonLoopAnim(ANIM_BUTTON_ON);
		OSReport("13.33\n");
		layout.enableNonLoopAnim(ANIM_BUTTON_ON+1);
		OSReport("13.66\n");
		layout.enableNonLoopAnim(ANIM_BUTTON_ON+2);
		OSReport("14\n");
		state.setState(&StateID_ButtonActivateWait);
	}
}
void dStatsMenu_c::endState_ShowWait() {
	OSReport("15\n");
	nw4r::snd::SoundHandle handle;
	// PlaySoundWithFunctionB4(SoundRelatedClass, &handle, SE_OBJ_CLOUD_BLOCK_TO_JUGEM, 1);
	timer = 1;
}

// ButtonActivateWait
void dStatsMenu_c::beginState_ButtonActivateWait() { }
void dStatsMenu_c::executeState_ButtonActivateWait() {
	if (!layout.isAnyAnimOn())
		state.setState(&StateID_Wait);
}
void dStatsMenu_c::endState_ButtonActivateWait() { }

// Wait
void dStatsMenu_c::beginState_Wait() {
}
void dStatsMenu_c::executeState_Wait() {
	if (timer < 90) {
		scaleEase = -((cos(timer * 3.14 /20)-0.9)/timer*10)+1;
		timer++;
		return;
	}

	int nowPressed = Remocon_GetPressed(GetActiveRemocon());
	int newSelection = -1;

	if (nowPressed & WPAD_ONE) {
		// Hide the thing
		state.setState(&StateID_HideWait);
	} else if (nowPressed & WPAD_RIGHT) {
		
	} else if (nowPressed & WPAD_LEFT) {
		
	} else if (nowPressed != 0) {
		//stop countdown
	}

}
void dStatsMenu_c::endState_Wait() { }

// HideWait
void dStatsMenu_c::beginState_HideWait() {
	nw4r::snd::SoundHandle handle;
	PlaySoundWithFunctionB4(SoundRelatedClass, &handle, SE_SYS_DIALOGUE_OUT_AUTO, 1);
	layout.enableNonLoopAnim(ANIM_WINDOW_OUT);
	//layout.enableNonLoopAnim(ANIM_BUTTON_DESELECT+selected);

	timer = 26;
	// PlaySoundWithFunctionB4(SoundRelatedClass, &handle, SE_OBJ_CS_KINOHOUSE_DISAPP, 1);

	HideSelectCursor(SelectCursorPointer, 0);
}
void dStatsMenu_c::executeState_HideWait() {
	if (timer > 0) {
		timer--;
		scaleEase = -((cos(timer * 3.14 /13.5)-0.9)/timer*10)+1;
		if (scaleEase < 0.0f)
			scaleEase = 0.0f;
	}

	if (!layout.isAnimOn(ANIM_WINDOW_OUT))
		this->Delete(1);
}
void dStatsMenu_c::endState_HideWait() {
	visible = false;
}

void dStatsMenu_c::selectNumber(int num) {
	OSReport("num is %d\n", num);
	char str[3];
	sprintf(str, "%03d", num1);
	wchar_t numToShow[3];
	numToShow[0] = str[0];
	numToShow[1] = str[1];
	numToShow[2] = str[2];
	T_number_00->SetString(numToShow, 0, 3);
	T_numberS_00->SetString(numToShow, 0, 3);
}