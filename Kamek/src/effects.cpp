#include "effects.h"

const char* effects_name_list [] = {
	"Wm_mr_2dlandsmoke",		// 0000
	"Wm_mr_cmnsndlandsmk",
	"Wm_mr_cmnlandsmoke",
	"Wm_en_landsmoke",
	"Wm_en_landsmoke_s",
	"Wm_en_sndlandsmk",
	"Wm_en_sndlandsmk_s",
	"Wm_en_burst_big",
	"Wm_en_burst_m",
	"Wm_en_burst_s",
	"Wm_en_burst_ss",			// 0010
	"Wm_en_burst_water01",
	"Wm_en_burst_water02",
	"Wm_en_cmnwatertail",
	"Wm_en_cmnwaterdash",
	"Wm_en_cmnwater02",
	"Wm_en_cmnwater",
	"Wm_en_waterwave_in",
	"Wm_en_waterwave_in_a",
	"Wm_en_waterwave_in_b",
	"Wm_en_firevanish",			// 0020
	"Wm_en_watersplash",
	"Wm_en_watersplash_cld",
	"Wm_mr_watersplash",
	"Wm_en_poisoninbig01",
	"Wm_en_poisoninbig02",
	"Wm_en_poisonwave",
	"Wm_en_poisonwave_a",
	"Wm_en_poisonwave_b",
	"Wm_en_cmnmagmawave",
	"Wm_en_magmawave",			// 0030
	"Wm_en_magmawave_a",
	"Wm_en_magmawave_b",
	"Wm_en_vshit",
	"Wm_en_vshit_hit",
	"Wm_en_vshit_glow",
	"Wm_en_vshit_star",
	"Wm_en_vshit_ring",
	"Wm_en_comattack",
	"Wm_ob_cmnshotstar",
	"Wm_ob_cmnshothit",			// 0040
	"Wm_ob_cmnshotspark",
	"Wm_ob_cmnsparkloop",
	"Wm_ob_cmnspark",
	"Wm_ob_cmnicekira",
	"Wm_ob_cmnrockpiece",
	"Wm_ob_cmnboxpiece",
	"Wm_ob_cmnboxsmoke",
	"Wm_ob_cmnboxgrain",
	"Wm_en_hit",
	"Wm_en_hit_ring",			// 0050
	"Wm_mr_misshit",
	"Wm_mr_misshit_ring",
	"Wm_en_quicksand",
	"Wm_ob_envsunlight",
	"Wm_ob_envsunlight_a",
	"Wm_ob_envsunlight_b",
	"Wm_mr_landsmoke",
	"Wm_mr_landsmoke_s",
	"Wm_mr_landsmoke_ss",
	"Wm_mr_sealandsmk",			// 0060
	"Wm_mr_sealandsmk_s",
	"Wm_mr_sealandsmk_ss",
	"Wm_mr_sndlandsmk",
	"Wm_mr_sndlandsmk_s",
	"Wm_mr_sndlandsmk_ss",
	"Wm_mr_beachlandsmk",
	"Wm_mr_beachlandsmk_s",
	"Wm_mr_beachlandsmk_ss",
	"Wm_mr_slipsmoke",
	"Wm_mr_slipsmoke_ss",		// 0070
	"Wm_mr_slipsmoke_big",
	"Wm_mr_sndslipsmk",
	"Wm_mr_sndslipsmk_ss",
	"Wm_mr_beachslipsmk",
	"Wm_mr_beachslipsmk_ss",
	"Wm_mr_iceslipsmk",
	"Wm_mr_iceslipsmk_ss",
	"Wm_mr_brakesmoke",
	"Wm_mr_brakesmoke_ss",
	"Wm_mr_sndbrakesmk",		// 0080
	"Wm_mr_sndbrakesmk_ss",
	"Wm_mr_beachbrakesmk",
	"Wm_mr_beachbrakesmk_ss",
	"Wm_mr_icebrakesmk",
	"Wm_mr_icebrakesmk_ss",
	"Wm_mr_drop",
	"Wm_mr_quicksand",
	"Wm_mr_swimpaddle",
	"Wm_mr_flutterkick",
	"Wm_mr_ivy",				// 0090
	"Wm_en_firebar_fire",
	"Wm_en_firebar_ind",
	"Wm_en_firebar",
	"Wm_mr_fireball_a",
	"Wm_mr_fireball_b",
	"Wm_mr_fireball",
	"Wm_mr_iceball_a",
	"Wm_mr_iceball_b",
	"Wm_mr_iceball",
	"Wm_ob_icemisshit",			// 0100
	"Wm_ob_icemisshit_smk",
	"Wm_mr_fireball_hit",
	"Wm_mr_fireball_hit01",
	"Wm_en_bubble",
	"Wm_en_bubble_a",
	"Wm_en_bubble_b",
	"Wm_mr_startail",
	"Wm_mr_movecliff",
	"Wm_mr_cliffcatch",
	"Wm_mr_cliffcatch_cd",
	"Wm_en_iron",				// 0110
	"Wm_mr_wallkick_r",
	"Wm_mr_wallkick_up_r",
	"Wm_mr_wallkick_cld_r",
	"Wm_mr_wallkick_dn_r",
	"Wm_mr_wallkick_c_r",
	"Wm_mr_wallkick_b_r",
	"Wm_mr_wallkick_l",
	"Wm_mr_wallkick_up_l",
	"Wm_mr_wallkick_cld_l",
	"Wm_mr_wallkick_dn_l",		// 0120
	"Wm_mr_wallkick_c_l",
	"Wm_mr_wallkick_b_l",
	"Wm_mr_wallkick_s_r",
	"Wm_mr_wallkick_up_s_r",
	"Wm_mr_wallkick_cld_s_r",
	"Wm_mr_wallkick_dn_s_r",
	"Wm_mr_wallkick_c_s_r",
	"Wm_mr_wallkick_b_s_r",
	"Wm_mr_wallkick_s_l",
	"Wm_mr_wallkick_up_s_l",	// 0130
	"Wm_mr_wallkick_cld_s_l",
	"Wm_mr_wallkick_dn_s_l",
	"Wm_mr_wallkick_c_s_l",
	"Wm_mr_wallkick_b_s_l",
	"Wm_mr_wallkick_ss_r",
	"Wm_mr_wallkick_up_ss_r",
	"Wm_mr_wallkick_cld_ss_r",
	"Wm_mr_wallkick_dn_ss_r",
	"Wm_mr_wallkick_b_ss_r",
	"Wm_mr_wallkick_c_ss_r",
	"Wm_mr_wallkick_ss_l",
	"Wm_mr_wallkick_up_ss_l",
	"Wm_mr_wallkick_cld_ss_l",
	"Wm_mr_wallkick_dn_ss_l",
	"Wm_mr_wallkick_b_ss_l",
	"Wm_mr_wallkick_c_ss_l",
	"Wm_mr_wallslip_r",
	"Wm_mr_wallslip_l",
	"Wm_mr_wallslip_cld",
	"Wm_mr_wallslip_s_r",
	"Wm_mr_wallslip_s_l",
	"Wm_mr_wallslip_cld_s",
	"Wm_mr_wallslip_ss_r",
	"Wm_mr_wallslip_ss_l",
	"Wm_mr_wallslip_cld_ss",
	"Wm_mr_hardhit",
	"Wm_mr_hardhit_glow",
	"Wm_mr_hardhit_spak",
	"Wm_mr_hardhit_grain",
	"Wm_mr_kickhit",
	"Wm_mr_kick_glow",
	"Wm_mr_kick_grain",
	"Wm_mr_softhit",
	"Wm_mr_softhit_glow",
	"Wm_mr_softhit_spak",
	"Wm_mr_wirehit",
	"Wm_mr_wirehit_line",
	"Wm_mr_wirehit_star",
	"Wm_mr_wirehit_glow",
	"Wm_mr_wirehit_hit",
	"Wm_ob_coin",
	"Wm_ob_coinkira",
	"Wm_ob_bluecoinkira",
	"Wm_ob_greencoinkira",
	"Wm_ob_greencoinkira_c",
	"Wm_ob_greencoinkira_b",
	"Wm_ob_greencoinkira_a",
	"Wm_ob_redcoinkira",
	"Wm_ob_starcoinget",
	"Wm_ob_starcoinget_gl",
	"Wm_ob_starcoinget_lighit",
	"Wm_ob_starcoinget_hit",
	"Wm_ob_starcoinget_str",
	"Wm_ob_starcoinget_ring",
	"Wm_mr_electricshock",
	"Wm_mr_electricshock_glw",
	"Wm_mr_electricshock_biri01",
	"Wm_mr_electricshock_biri02",
	"Wm_mr_electricshock_kira",
	"Wm_mr_electricshock_s",
	"Wm_mr_electricshock_glw_s",
	"Wm_mr_electricshock_biri01_s",
	"Wm_mr_electricshock_biri02_s",
	"Wm_mr_electricshock_kira_s",
	"Wm_en_birikyu",
	"Wm_en_birikyu_glw",
	"Wm_en_birikyu_kira",
	"Wm_en_birikyu_biri",
	"Wm_mr_1upkira",
	"Wm_mr_1upkira_spin",
	"Wm_mr_1upkira_01",
	"Wm_mr_1upkira_02",
	"Wm_mr_1upkira_s",
	"Wm_mr_1upkira_spin_s",
	"Wm_mr_1upkira_01_s",
	"Wm_mr_1upkira_02_s",
	"Wm_mr_1upkira_ss",
	"Wm_mr_1upkira_spin_ss",
	"Wm_mr_1upkira_01_ss",
	"Wm_en_hanapetal",
	"Wm_en_hanapetal_a",
	"Wm_en_hanapetal_b",
	"Wm_en_movecloud",
	"Wm_mr_cloud_on",
	"Wm_en_blockcloud",
	"Wm_en_hanasnort",
	"Wm_en_hanasnort_r",
	"Wm_en_hanasnort_l",
	"Wm_en_hanasnort_cld",
	"Wm_mr_gauge",
	"Wm_mr_flaggetkira",
	"Wm_mr_flaggetkira_s",
	"Wm_mr_flaggetkira_ss",
	"Wm_ob_flagget",
	"Wm_ob_flagget_kira",
	"Wm_ob_flaggetkira_cld",
	"Wm_ob_flagget_light",
	"Wm_ob_icethaw",
	"Wm_ob_icebreak",
	"Wm_ob_icebreakwt",
	"Wm_ob_icebreaksmk",
	"Wm_ob_icewait",
	"Wm_ob_icewaitwat",
	"Wm_ob_iceattack",
	"Wm_ob_iceattackkira",
	"Wm_ob_iceattackline",
	"Wm_ob_iceattacksmk",
	"Wm_ob_icehit",
	"Wm_ob_icehitwat",
	"Wm_ob_icehithit",
	"Wm_ob_icehitsmk",
	"Wm_ob_iceevaporate",
	"Wm_ob_icepoison",
	"Wm_ob_waterbreak",
	"Wm_ob_waterbreak_a",
	"Wm_ob_waterbreak_b",
	"Wm_ob_waterbreak_c",
	"Wm_en_firesnk_icehit_h",
	"Wm_en_firesnk_icehitsmk_h",
	"Wm_en_firesnk_icehit_b",
	"Wm_en_firesnk_icehitsmk_b",
	"Wm_en_firesnkspark01",
	"Wm_en_firesnkspark02",
	"Wm_mr_vshipattack",
	"Wm_mr_vshipattack_line",
	"Wm_mr_vshipattack_hosi",
	"Wm_mr_vshipattack_gl",
	"Wm_mr_vshipattack_ud",
	"Wm_mr_vshipattack_ind",
	"Wm_mr_vshipattack_ind_a",
	"Wm_mr_vshipattack_ind_c",
	"Wm_mr_vshipattack_ind_b",
	"Wm_mr_spinstart",
	"Wm_mr_propellertail",
	"Wm_mr_p_iceslip",
	"Wm_mr_p_snowslip",
	"Wm_mr_penguinsmoke",
	"Wm_mr_pdesertsmoke",
	"Wm_mr_pbeachsmoke",
	"Wm_mr_penguinsnow",
	"Wm_mr_penguinice",
	"Wm_mr_spinsmoke",
	"Wm_mr_spinjump",
	"Wm_mr_spinjump_re",
	"Wm_mr_spindepart",
	"Wm_mr_spindepart_a",
	"Wm_mr_spindepart_b",
	"Wm_mr_spindown",
	"Wm_mr_spindown_a",
	"Wm_mr_spindown_b",
	"Wm_mr_spindownline",
	"Wm_mr_normalspin_pm",
	"Wm_mr_normalspin",
	"Wm_mr_halfspin",
	"Wm_en_shellredtail",
	"Wm_en_shellgreentail",
	"Wm_mr_starkira",
	"Wm_mr_starkira_a",
	"Wm_mr_starkira_b",
	"Wm_mr_starkira_s",
	"Wm_mr_starkira_a_s",
	"Wm_mr_starkira_b_s",
	"Wm_ob_itemget",
	"Wm_ob_itemget_hitlighit",
	"Wm_ob_itemget_hit",
	"Wm_ob_itemget_ring",
	"Wm_mr_itemget01",
	"Wm_mr_itemget02",
	"Wm_ob_itemappear",
	"Wm_ob_itemappear_r",
	"Wm_ob_itemappear_gl",
	"Wm_ob_itemappear_ss",
	"Wm_ob_itemappear_r_ss",
	"Wm_ob_itemappear_gl_ss",
	"Wm_ob_startail",
	"Wm_ob_startail_star",
	"Wm_ob_startail_kira",
	"Wm_ob_itempropeller",
	"Wm_ob_powdown",
	"Wm_ob_powdown_ind",
	"Wm_ob_powdown_ind_a",
	"Wm_ob_powdown_ind_c",
	"Wm_ob_powdown_ind_b",
	"Wm_ob_itemlandsmoke",
	"Wm_ob_itemsealandsmk",
	"Wm_ob_itemsndlandsmk",
	"Wm_en_spindamage",
	"Wm_en_spindamage_rg",
	"Wm_en_spindamage_star",
	"Wm_en_spindamage_big",
	"Wm_en_spindamage_big_st",
	"Wm_en_spindamage_big_rg",
	"Wm_mr_atitismoke",
	"Wm_en_sanbosmoke",
	"Wm_en_sanbospillsand",
	"Wm_en_sanbohit",
	"Wm_en_sanbohit_smk",
	"Wm_en_sanbohit_hit",
	"Wm_en_sanbohit_ring",
	"Wm_en_sanbohitsmk",
	"Wm_en_keronpafire",
	"Wm_en_keronpafire_f",
	"Wm_en_keronpafire_ca",
	"Wm_en_keronpalight",
	"Wm_en_explosion",
	"Wm_en_explosion_ln",
	"Wm_en_explosion_gl01",
	"Wm_en_explosion_hd",
	"Wm_en_explosion_un",
	"Wm_en_explosion_gl02",
	"Wm_en_explosion_smk",
	"Wm_en_bombheibreak",
	"Wm_en_bombignition",
	"Wm_en_bomignition_ln",
	"Wm_en_bomignition_gl01",
	"Wm_en_bomignition_pati",
	"Wm_mr_sanddive",
	"Wm_mr_sanddive_sd",
	"Wm_mr_sanddive_in",
	"Wm_mr_sanddive_out",
	"Wm_mr_sanddive_smk",
	"Wm_mr_sanddive_m",
	"Wm_mr_sanddive_sd_m",
	"Wm_mr_sanddive_in_m",
	"Wm_mr_sanddive_out_m",
	"Wm_mr_sanddive_smk_m",
	"Wm_mr_sanddive_s",
	"Wm_mr_sanddive_sb_s",
	"Wm_mr_sanddive_smk_s",
	"Wm_mr_sandsplash",
	"Wm_en_dossunfall01",
	"Wm_en_dossunfall02",
	"Wm_en_dossunfall03",
	"Wm_en_kuribobigsplit",
	"Wm_en_kuribobigsplit_sk",
	"Wm_en_kuribobigsplit_ht",
	"Wm_en_kuribobigsplit_gr02",
	"Wm_en_kuribobigsplit_gr01",
	"Wm_en_kuribobigsplit_rg",
	"Wm_en_kuribosplit",
	"Wm_en_kuribosplit_gl02",
	"Wm_en_kuribosplit_gl01",
	"Wm_en_kuribosplit_sk",
	"Wm_en_teresatail",
	"Wm_en_teresavanish",
	"Wm_en_obakedoor",
	"Wm_en_obakedoor_sm",
	"Wm_en_obakedoor_ic",
	"Wm_mr_yoshistep",
	"Wm_mr_yoshistep_a",
	"Wm_mr_yoshistep_a_cld",
	"Wm_mr_yoshistep_b",
	"Wm_mr_fruitget",
	"Wm_mr_fruitget_w",
	"Wm_mr_fruitget_h",
	"Wm_ob_eggbreak_gr",
	"Wm_ob_eggbreak_rd",
	"Wm_ob_eggbreak_yw",
	"Wm_ob_eggbreak_bl",
	"Wm_mr_yoshifire",
	"Wm_mr_yoshifire_a",
	"Wm_mr_yoshifire_b",
	"Wm_mr_yoshiiceball",
	"Wm_mr_yoshiiceball_b",
	"Wm_mr_yoshiiceball_a",
	"Wm_mr_yoshifirehit",
	"Wm_mr_yoshifirehit01",
	"Wm_mr_yoshiicehit",
	"Wm_mr_yoshiicehit_a",
	"Wm_mr_yoshiicehit_b",
	"Wm_mr_yssweatrun",
	"Wm_mr_yssweat",
	"Wm_mr_ystonguehit",
	"Wm_mr_ystonguehit_a",
	"Wm_en_crowhit",
	"Wm_en_crowfly",
	"Wm_en_crowattack_r",
	"Wm_en_crowattack_l",
	"Wm_en_pakkunfire",
	"Wm_en_pakkunfire00",
	"Wm_en_firebros_fire",
	"Wm_en_firebros_fire_a",
	"Wm_en_firebros_fire_b",
	"Wm_mr_magmawave",
	"Wm_mr_magmawave_a",
	"Wm_mr_magmawave_b",
	"Wm_ob_magmagear",
	"Wm_mr_poisonwave",
	"Wm_mr_poisonwave_a",
	"Wm_mr_poisonwave_b",
	"Wm_mr_waterwave_in",
	"Wm_mr_waterwave_in_a",
	"Wm_mr_waterwave_in_b",
	"Wm_mr_waterwave_in_c",
	"Wm_mr_waterwave_in_d",
	"Wm_mr_waterwave_out",
	"Wm_mr_waterwave_out_a",
	"Wm_mr_waterwave_out_b",
	"Wm_mr_waterwave_out_c",
	"Wm_mr_waterwave_in_ss",
	"Wm_mr_waterwave_in_a_ss",
	"Wm_mr_waterwave_in_b_ss",
	"Wm_mr_waterwave_out_ss",
	"Wm_mr_waterwave_out_a_ss",
	"Wm_mr_waterwave_out_b_ss",
	"Wm_mr_waterrun_l_ss",
	"Wm_mr_waterrun_r_ss",
	"Wm_mr_waterswim",
	"Wm_ob_magmasign01",
	"Wm_ob_magmasign02",
	"Wm_ob_firespillarunder",
	"Wm_ob_firespillar02",
	"Wm_ob_firespillar01",
	"Wm_mr_foot_snow",
	"Wm_mr_foot_ice",
	"Wm_mr_foot_sand",
	"Wm_mr_foot_beach",
	"Wm_mr_foot_water",
	"Wm_mr_turn_beach_r",
	"Wm_mr_turn_beach_l",
	"Wm_mr_turn_water_r",
	"Wm_mr_turn_water_l",
	"Wm_mr_turn_ice_r",
	"Wm_mr_turn_ice_l",
	"Wm_mr_turn_sand_r",
	"Wm_mr_turn_sand_l",
	"Wm_mr_turn_snow_r",
	"Wm_mr_turn_snow_l",
	"Wm_mr_turn_usual_r",
	"Wm_mr_turn_usual_l",
	"Wm_ob_sandpillar01",
	"Wm_ob_sandpillar02",
	"Wm_ob_spillarsign01",
	"Wm_ob_spillarsign02",
	"Wm_mr_spsmoke",
	"Wm_en_spsmoke",
	"Wm_en_sphitsmoke",
	"Wm_mr_sprisesmoke",
	"Wm_en_huhubreathstart",
	"Wm_en_huhubreath",
	"Wm_en_huhuhaze",
	"Wm_en_huhufloat",
	"Wm_en_huhudamage01",
	"Wm_en_huhudamage02",
	"Wm_en_huhurevival01",
	"Wm_en_huhurevival02",
	"Wm_mr_wfloatsplash",
	"Wm_mr_wfloatsplash_a",
	"Wm_mr_wfloatsplash_b",
	"Wm_en_wfsplash_in_r",
	"Wm_en_wfsplash_in01_r",
	"Wm_en_wfsplash_in02_r",
	"Wm_en_wfsplash_in_l",
	"Wm_en_wfsplash_in01_l",
	"Wm_en_wfsplash_in02_l",
	"Wm_en_wfsplash_out_r",
	"Wm_en_wfsplash_out01_r",
	"Wm_en_wfsplash_out02_r",
	"Wm_en_wfsplash_out_l",
	"Wm_en_wfsplash_out01_l",
	"Wm_en_wfsplash_out02_l",
	"Wm_mr_balloonburst",
	"Wm_mr_balloonburst_w",
	"Wm_mr_balloonburst_h",
	"Wm_en_magkillersmoke",
	"Wm_en_mgkillershot_r",
	"Wm_en_mgkillershot_l",
	"Wm_en_killersmoke",
	"Wm_en_killershot",
	"Wm_en_killervanish",
	"Wm_en_kingkiller",
	"Wm_en_kingkiller_gr",
	"Wm_en_kingkiller_rg",
	"Wm_en_kingkiller_sm",
	"Wm_en_mgsearchkiller",
	"Wm_en_searchkiller",
	"Wm_en_pakkunsweat",
	"Wm_en_pakkun_ball01",
	"Wm_en_pakkun_ball02",
	"Wm_en_pakkun_foo",
	"Wm_en_igafirehit",
	"Wm_en_patametsweat",
	"Wm_ob_fireworks_y",
	"Wm_ob_fireworks_y01",
	"Wm_ob_fireworks_ycld",
	"Wm_ob_fireworks_b",
	"Wm_ob_fireworks_b01",
	"Wm_ob_fireworks_bcld",
	"Wm_ob_fireworks_g",
	"Wm_ob_fireworks_g01",
	"Wm_ob_fireworks_gcld",
	"Wm_ob_fireworks_p",
	"Wm_ob_fireworks_p01",
	"Wm_ob_fireworks_pcld",
	"Wm_ob_fireworks_k",
	"Wm_ob_fireworks_kgl01",
	"Wm_ob_fireworks_kgl02",
	"Wm_ob_fireworks_k01",
	"Wm_ob_fireworks_kcld1",
	"Wm_ob_fireworks_k02",
	"Wm_ob_fireworks_kcld2",
	"Wm_ob_fireworks_1up",
	"Wm_ob_fireworks_1upgl01",
	"Wm_ob_fireworks_1upgl02",
	"Wm_ob_fireworks_1up01",
	"Wm_ob_fireworks_1upcld1",
	"Wm_ob_fireworks_1up02",
	"Wm_ob_fireworks_1upcld2",
	"Wm_ob_fireworks_star",
	"Wm_ob_fireworks_stargl01",
	"Wm_ob_fireworks_stargl02",
	"Wm_ob_fireworks_star01",
	"Wm_ob_fireworks_starcld1",
	"Wm_ob_fireworks_star02",
	"Wm_ob_fireworks_starcld2",
	"Wm_ob_switch",
	"Wm_ob_switch01",
	"Wm_en_sweat",
	"Wm_en_choroappear",
	"Wm_en_choroescape",
	"Wm_en_brakesmoke",
	"Wm_ob_redcioinkira",
	"Wm_ob_redcioinkira_cd",
	"Wm_ob_redcioinitem01",
	"Wm_ob_redcioinitem_cd",
	"Wm_ob_redcioinitem02",
	"Wm_ob_redcioinitem02_b",
	"Wm_ob_redcioinitem02_a",
	"Wm_ob_itemfall",
	"Wm_ob_itemfall_a",
	"Wm_ob_itemfall_b",
	"Wm_ob_redringkira",
	"Wm_ob_redringget",
	"Wm_ob_redringget_a",
	"Wm_ob_redringget_b",
	"Wm_ob_redringget_c",
	"Wm_ob_warpcannonkira",
	"Wm_ob_witchcraft",
	"Wm_ob_witchcraftup",
	"Wm_bs_kameckmagic",
	"Wm_bs_kameckmagic_e",
	"Wm_bs_kameckmagic_f",
	"Wm_bs_kameckmagic_a",
	"Wm_bs_kameckmagic_b",
	"Wm_bs_kameckmagic_c",
	"Wm_bs_kameckmagic_d",
	"Wm_ob_keyfall",
	"Wm_ob_keywait",
	"Wm_ob_keywait_c",
	"Wm_ob_keywait_a",
	"Wm_ob_keywait_b",
	"Wm_ob_keyget01",
	"Wm_ob_keyget01_d",
	"Wm_ob_keyget01_a",
	"Wm_ob_keyget01_b",
	"Wm_ob_keyget01_c",
	"Wm_ob_keyget02",
	"Wm_ob_keyget02_kira",
	"Wm_ob_keyget02_ring01",
	"Wm_ob_keyget02_ring02",
	"Wm_ob_keyget02_gl02",
	"Wm_ob_keyget02_gl01",
	"Wm_ob_keyget02_lighit",
	"Wm_ob_keyget02_hit",
	"Wm_ob_keyget02_str",
	"Wm_ob_stream",
	"Wm_seacloudout",
	"Wm_shellopen",
	"Wm_shellopen_a",
	"Wm_shellopen_b",
	"Wm_2d_courseclear",
	"Wm_2d_courseclear_da",
	"Wm_2d_courseclear_kiraL",
	"Wm_2d_courseclear_kiraR",
	"Wm_2d_courseclear_cld",
	"Wm_2d_courseclear_smkL",
	"Wm_2d_courseclearsmcld01",
	"Wm_2d_courseclear_smkR",
	"Wm_2d_courseclearsmcld02",
	"Wm_2d_timeup",
	"Wm_2d_timeupsmoke",
	"Wm_2d_timeupstar",
	"Wm_2d_timeupstarcld",
	"Wm_2d_gameover",
	"Wm_2d_gameover_a",
	"Wm_2d_gameover_b",
	"Wm_2d_mrstarkira",
	"Wm_2d_1up02",
	"Wm_2d_1up01",
	"Wm_2d_coin100",
	"Wm_2d_coin100a",
	"Wm_2d_coinlight",
	"Wm_2d_continue",
	"Wm_2d_stockitem",
	"Wm_2d_stockitem_a",
	"Wm_2d_stockitem_b",
	"Wm_mr_stockitemuse",
	"Wm_mr_stockitemuse_a",
	"Wm_mr_stockitemuse_b",
	"Wm_mr_stockitemuse_c",
	"Wm_2d_moviecoinkira",
	"Wm_2d_moviecoinvanish",
	"Wm_2d_movieopen",
	"Wm_2d_movieopen_a",
	"Wm_2d_movieopen_b1",
	"Wm_2d_movieopen_b2",
	"Wm_2d_resultscore",
	"Wm_2d_resultrest",
	"Wm_2d_resultno1",
	"Wm_2d_result",
	"Wm_2d_result_a1",
	"Wm_2d_result_a2",
	"Wm_2d_result_b1",
	"Wm_2d_result_b2",
	"Wm_2d_starcoinget",
	"Wm_2d_starcoinvanish",
	"Wm_2d_multiclear",
	"Wm_2d_titlestar01",
	"Wm_2d_titlestar02",
	"Wm_en_fireburner",
	"Wm_en_firebrnsignind",
	"Wm_en_firebrnsign",
	"Wm_en_fireburner3ind",
	"Wm_en_fireburner4ind",
	"Wm_en_fireburner6ind",
	"Wm_mr_palm_s",
	"Wm_mr_palm",
	"Wm_ob_boat",
	"Wm_ob_fallsmoke",
	"Wm_ob_fallsmoke_big",
	"Wm_ob_fallsmoke_s",
	"Wm_bg_volcano",
	"Wm_bg_volcano_a",
	"Wm_bg_volcano_b",
	"Wm_ob_treasurebox",
	"Wm_ob_treasureboxwait",
	"Wm_ob_treasureboxwait_a",
	"Wm_ob_treasureboxwait_b",
	"Wm_ob_treasureboxtail",
	"Wm_ob_itemteil",
	"Wm_ob_icicle",
	"Wm_mr_brosquake",
	"Wm_en_atitismoke",
	"Wm_en_waterwave_in_a",
	"Wm_en_waterwave_in_b",
	"Wm_en_watersplash_cld",
	"Wm_en_poisonwave_a",
	"Wm_en_poisonwave_b",
	"Wm_en_magmawave_a",
	"Wm_en_magmawave_b",
	"Wm_en_vshit_hit",
	"Wm_en_vshit_glow",
	"Wm_en_vshit_ring",
	"Wm_en_vshit_star",
	"Wm_en_hit_ring",
	"Wm_mr_misshit_ring",
	"Wm_ob_envsunlight_b",
	"Wm_ob_envsunlight_a",
	"Wm_mr_fireball_a",
	"Wm_mr_fireball_b",
	"Wm_mr_iceball_a",
	"Wm_mr_iceball_b",
	"Wm_ob_icemisshit_smk",
	"Wm_mr_fireball_hit01",
	"Wm_en_bubble_a",
	"Wm_en_bubble_b",
	"Wm_mr_cliffcatch_cd",
	"Wm_mr_wallkick_up_r",
	"Wm_mr_wallkick_dn_r",
	"Wm_mr_wallkick_b_r",
	"Wm_mr_wallkick_c_r",
	"Wm_mr_wallkick_cld_r",
	"Wm_mr_wallkick_cld_r",
	"Wm_mr_wallkick_up_l",
	"Wm_mr_wallkick_dn_l",
	"Wm_mr_wallkick_b_l",
	"Wm_mr_wallkick_c_l",
	"Wm_mr_wallkick_cld_l",
	"Wm_mr_wallkick_cld_l",
	"Wm_mr_wallkick_up_s_r",
	"Wm_mr_wallkick_dn_s_r",
	"Wm_mr_wallkick_b_s_r",
	"Wm_mr_wallkick_c_s_r",
	"Wm_mr_wallkick_cld_s_r",
	"Wm_mr_wallkick_cld_s_r",
	"Wm_mr_wallkick_up_s_l",
	"Wm_mr_wallkick_dn_s_l",
	"Wm_mr_wallkick_b_s_l",
	"Wm_mr_wallkick_c_s_l",
	"Wm_mr_wallkick_cld_s_l",
	"Wm_mr_wallkick_cld_s_l",
	"Wm_mr_wallkick_up_ss_r",
	"Wm_mr_wallkick_dn_ss_r",
	"Wm_mr_wallkick_b_ss_r",
	"Wm_mr_wallkick_c_ss_r",
	"Wm_mr_wallkick_cld_ss_r",
	"Wm_mr_wallkick_cld_ss_r",
	"Wm_mr_wallkick_up_ss_l",
	"Wm_mr_wallkick_dn_ss_l",
	"Wm_mr_wallkick_b_ss_l",
	"Wm_mr_wallkick_c_ss_l",
	"Wm_mr_wallkick_cld_ss_l",
	"Wm_mr_wallkick_cld_ss_l",
	"Wm_mr_wallslip_cld",
	"Wm_mr_wallslip_cld",
	"Wm_mr_wallslip_cld_s",
	"Wm_mr_wallslip_cld_s",
	"Wm_mr_wallslip_cld_ss",
	"Wm_mr_wallslip_cld_ss",
	"Wm_mr_hardhit_spak",
	"Wm_mr_hardhit_glow",
	"Wm_mr_hardhit_grain",
	"Wm_mr_kick_glow",
	"Wm_mr_kick_grain",
	"Wm_mr_softhit_spak",
	"Wm_mr_softhit_glow",
	"Wm_mr_wirehit_glow",
	"Wm_mr_wirehit_hit",
	"Wm_mr_wirehit_line",
	"Wm_mr_wirehit_star",
	"Wm_ob_greencoinkira_c",
	"Wm_ob_greencoinkira_b",
	"Wm_ob_greencoinkira_a",
	"Wm_ob_starcoinget_str",
	"Wm_ob_starcoinget_gl",
	"Wm_ob_starcoinget_hit",
	"Wm_ob_starcoinget_ring",
	"Wm_ob_starcoinget_lighit",
	"Wm_mr_electricshock_glw",
	"Wm_mr_electricshock_biri01",
	"Wm_mr_electricshock_biri02",
	"Wm_mr_electricshock_kira",
	"Wm_mr_electricshock_glw_s",
	"Wm_mr_electricshock_biri01_s",
	"Wm_mr_electricshock_biri02_s",
	"Wm_mr_electricshock_kira_s",
	"Wm_en_birikyu_glw",
	"Wm_en_birikyu_biri",
	"Wm_en_birikyu_kira",
	"Wm_mr_1upkira_spin",
	"Wm_mr_1upkira_01",
	"Wm_mr_1upkira_02",
	"Wm_mr_1upkira_spin_s",
	"Wm_mr_1upkira_01_s",
	"Wm_mr_1upkira_02_s",
	"Wm_mr_1upkira_spin_ss",
	"Wm_mr_1upkira_01_ss",
	"Wm_en_hanapetal_a",
	"Wm_en_hanapetal_b",
	"Wm_en_hanasnort_r",
	"Wm_en_hanasnort_l",
	"Wm_en_hanasnort_cld",
	"Wm_en_hanasnort_cld",
	"Wm_ob_flagget_kira",
	"Wm_ob_flagget_light",
	"Wm_ob_flaggetkira_cld",
	"Wm_ob_icebreakwt",
	"Wm_ob_icebreaksmk",
	"Wm_ob_icewaitwat",
	"Wm_ob_iceattackkira",
	"Wm_ob_iceattackline",
	"Wm_ob_iceattacksmk",
	"Wm_ob_icehithit",
	"Wm_ob_icehitwat",
	"Wm_ob_icehitsmk",
	"Wm_ob_waterbreak_c",
	"Wm_ob_waterbreak_a",
	"Wm_ob_waterbreak_b",
	"Wm_mr_vshipattack_line",
	"Wm_mr_vshipattack_hosi",
	"Wm_mr_vshipattack_gl",
	"Wm_mr_vshipattack_ud",
	"Wm_mr_vshipattack_ind_c",
	"Wm_mr_vshipattack_ind_a",
	"Wm_mr_vshipattack_ind_b",
	"Wm_mr_spindepart_b",
	"Wm_mr_spindepart_a",
	"Wm_mr_spindown_a",
	"Wm_mr_spindown_b",
	"Wm_mr_starkira_a",
	"Wm_mr_starkira_b",
	"Wm_mr_starkira_a_s",
	"Wm_mr_starkira_b_s",
	"Wm_ob_itemget_hit",
	"Wm_ob_itemget_ring",
	"Wm_ob_itemget_hitlighit",
	"Wm_ob_itemappear_r",
	"Wm_ob_itemappear_gl",
	"Wm_ob_itemappear_r_ss",
	"Wm_ob_itemappear_gl_ss",
	"Wm_ob_startail_star",
	"Wm_ob_startail_kira",
	"Wm_ob_powdown_ind_a",
	"Wm_ob_powdown_ind_c",
	"Wm_ob_powdown_ind_b",
	"Wm_en_spindamage_rg",
	"Wm_en_spindamage_star",
	"Wm_en_spindamage_big_rg",
	"Wm_en_spindamage_big_st",
	"Wm_en_sanbohit_hit",
	"Wm_en_sanbohit_ring",
	"Wm_en_sanbohit_smk",
	"Wm_en_keronpafire_ca",
	"Wm_en_keronpafire_f",
	"Wm_en_explosion_ln",
	"Wm_en_explosion_gl01",
	"Wm_en_explosion_hd",
	"Wm_en_explosion_un",
	"Wm_en_explosion_gl02",
	"Wm_en_explosion_smk",
	"Wm_en_bomignition_ln",
	"Wm_en_bomignition_gl01",
	"Wm_en_bomignition_pati",
	"Wm_mr_sanddive_sd",
	"Wm_mr_sanddive_in",
	"Wm_mr_sanddive_out",
	"Wm_mr_sanddive_smk",
	"Wm_mr_sanddive_sd_m",
	"Wm_mr_sanddive_in_m",
	"Wm_mr_sanddive_out_m",
	"Wm_mr_sanddive_smk_m",
	"Wm_mr_sanddive_sb_s",
	"Wm_mr_sanddive_smk_s",
	"Wm_en_kuribobigsplit_sk",
	"Wm_en_kuribobigsplit_ht",
	"Wm_en_kuribobigsplit_gr02",
	"Wm_en_kuribobigsplit_gr01",
	"Wm_en_kuribobigsplit_rg",
	"Wm_en_kuribosplit_sk",
	"Wm_en_kuribosplit_gl01",
	"Wm_en_kuribosplit_gl02",
	"Wm_en_obakedoor_sm",
	"Wm_en_obakedoor_ic",
	"Wm_mr_yoshistep_b",
	"Wm_mr_yoshistep_a",
	"Wm_mr_yoshistep_a_cld",
	"Wm_mr_fruitget_w",
	"Wm_mr_fruitget_h",
	"Wm_mr_yoshifire_a",
	"Wm_mr_yoshifire_b",
	"Wm_mr_yoshiiceball_b",
	"Wm_mr_yoshiiceball_a",
	"Wm_mr_yoshifirehit01",
	"Wm_mr_yoshiicehit_b",
	"Wm_mr_yoshiicehit_a",
	"Wm_mr_ystonguehit_a",
	"Wm_en_firebros_fire_a",
	"Wm_en_firebros_fire_b",
	"Wm_mr_magmawave_a",
	"Wm_mr_magmawave_b",
	"Wm_mr_poisonwave_a",
	"Wm_mr_poisonwave_b",
	"Wm_mr_waterwave_in_a",
	"Wm_mr_waterwave_in_b",
	"Wm_mr_waterwave_in_c",
	"Wm_mr_waterwave_in_d",
	"Wm_mr_waterwave_out_a",
	"Wm_mr_waterwave_out_b",
	"Wm_mr_waterwave_out_c",
	"Wm_mr_waterwave_in_a_ss",
	"Wm_mr_waterwave_in_b_ss",
	"Wm_mr_waterwave_out_a_ss",
	"Wm_mr_waterwave_out_b_ss",
	"Wm_mr_wfloatsplash_a",
	"Wm_mr_wfloatsplash_b",
	"Wm_en_wfsplash_in01_r",
	"Wm_en_wfsplash_in02_r",
	"Wm_en_wfsplash_in01_l",
	"Wm_en_wfsplash_in02_l",
	"Wm_en_wfsplash_out01_r",
	"Wm_en_wfsplash_out02_r",
	"Wm_en_wfsplash_out01_l",
	"Wm_en_wfsplash_out02_l",
	"Wm_mr_balloonburst_w",
	"Wm_mr_balloonburst_h",
	"Wm_en_kingkiller_gr",
	"Wm_en_kingkiller_rg",
	"Wm_en_kingkiller_sm",
	"Wm_ob_fireworks_y01",
	"Wm_ob_fireworks_ycld",
	"Wm_ob_fireworks_b01",
	"Wm_ob_fireworks_bcld",
	"Wm_ob_fireworks_g01",
	"Wm_ob_fireworks_gcld",
	"Wm_ob_fireworks_p01",
	"Wm_ob_fireworks_pcld",
	"Wm_ob_fireworks_k02",
	"Wm_ob_fireworks_kgl01",
	"Wm_ob_fireworks_kgl02",
	"Wm_ob_fireworks_k01",
	"Wm_ob_fireworks_kcld1",
	"Wm_ob_fireworks_kcld2",
	"Wm_ob_fireworks_1up02",
	"Wm_ob_fireworks_1upgl01",
	"Wm_ob_fireworks_1upgl02",
	"Wm_ob_fireworks_1up01",
	"Wm_ob_fireworks_1upcld1",
	"Wm_ob_fireworks_1upcld2",
	"Wm_ob_fireworks_star02",
	"Wm_ob_fireworks_stargl01",
	"Wm_ob_fireworks_stargl02",
	"Wm_ob_fireworks_star01",
	"Wm_ob_fireworks_starcld1",
	"Wm_ob_fireworks_starcld2",
	"Wm_ob_switch01",
	"Wm_ob_redcioinkira_cd",
	"Wm_ob_redcioinitem_cd",
	"Wm_ob_redcioinitem02_b",
	"Wm_ob_redcioinitem02_a",
	"Wm_ob_itemfall_a",
	"Wm_ob_itemfall_b",
	"Wm_ob_redringget_a",
	"Wm_ob_redringget_b",
	"Wm_ob_redringget_c",
	"Wm_bs_kameckmagic_f",
	"Wm_bs_kameckmagic_e",
	"Wm_bs_kameckmagic_a",
	"Wm_bs_kameckmagic_c",
	"Wm_bs_kameckmagic_d",
	"Wm_bs_kameckmagic_b",
	"Wm_ob_keywait_a",
	"Wm_ob_keywait_b",
	"Wm_ob_keywait_c",
	"Wm_ob_keyget01_d",
	"Wm_ob_keyget01_a",
	"Wm_ob_keyget01_b",
	"Wm_ob_keyget01_c",
	"Wm_ob_keyget02_ring02",
	"Wm_ob_keyget02_kira",
	"Wm_ob_keyget02_gl02",
	"Wm_ob_keyget02_str",
	"Wm_ob_keyget02_gl01",
	"Wm_ob_keyget02_hit",
	"Wm_ob_keyget02_ring01",
	"Wm_ob_keyget02_lighit",
	"Wm_shellopen_a",
	"Wm_shellopen_b",
	"Wm_2d_courseclear_da",
	"Wm_2d_courseclear_kiraL",
	"Wm_2d_courseclear_kiraR",
	"Wm_2d_courseclear_smkL",
	"Wm_2d_courseclear_smkR",
	"Wm_2d_courseclear_cld",
	"Wm_2d_courseclear_cld",
	"Wm_2d_courseclearsmcld01",
	"Wm_2d_courseclearsmcld02",
	"Wm_2d_timeupsmoke",
	"Wm_2d_timeupstar",
	"Wm_2d_timeupstarcld",
	"Wm_2d_gameover_a",
	"Wm_2d_gameover_b",
	"Wm_2d_coin100a",
	"Wm_2d_coinlight",
	"Wm_2d_stockitem_a",
	"Wm_2d_stockitem_b",
	"Wm_mr_stockitemuse_a",
	"Wm_mr_stockitemuse_b",
	"Wm_mr_stockitemuse_c",
	"Wm_2d_movieopen_a",
	"Wm_2d_movieopen_b2",
	"Wm_2d_movieopen_b1",
	"Wm_2d_result_a2",
	"Wm_2d_result_b2",
	"Wm_2d_result_a1",
	"Wm_2d_result_b1",
	"Wm_bg_volcano_a",
	"Wm_bg_volcano_b",
	"Wm_ob_treasureboxwait_a",
	"Wm_ob_treasureboxwait_b",
	"Wm_jr_electricstart",
	"Wm_jr_electricglow",
	"Wm_jr_electricspark",
	"Wm_jr_electricline",
	"rk_karehayama",
	"rk_karehayama0",
	"rk_karehayama0S",
	"rk_karehayamaS",

	//NEW EFFECTS

	"Wm_mr_firegold",
	"Wm_mr_firegold_a",
	"Wm_mr_firegold_b",
	"Wm_mr_firegold_hit",
	"Wm_mr_firegold_hit01",

	"Wm_ob_powgold_ind",
	"Wm_ob_powgold_ind_a",
	"Wm_ob_powgold_ind_c",
	"Wm_ob_powgold_ind_b"
};

extern "C" bool SpawnEffect(const char*, int, Vec*, S16Vec*, Vec*);

// Just call CreateEffect(this, number_between_0_and_1000);
bool CreateEffect(dEn_c* enemy, int effect_num) {
	if (effect_num > 1000)
		return false;
	if (effect_num < 0)
		return false;
	Vec tempVec = (Vec){ enemy->pos.x, enemy->pos.y, enemy->pos.z };
	const char* effect_name = effects_name_list[effect_num];
	return SpawnEffect(effect_name, 0, &tempVec, 0, 0);
}

bool CreateEffect(Vec* pos, S16Vec* rot, Vec* scale, int effect_num) {
	if (effect_num > 1000)
		return false;
	if (effect_num < 0)
		return false;
	Vec tempVec = (Vec){ pos->x, pos->y, pos->z };
	const char* effect_name = effects_name_list[effect_num];
	return SpawnEffect(effect_name, 0, &tempVec, rot, scale);
}

bool CreateEffect(const char* name, Vec* pos) {
	//check effects name list
	bool exists = false;
	for( int ii = 0; ii < sizeof(effects_name_list); ii++) {
		if (memcmp(name, effects_name_list[ii], strlen(effects_name_list[ii]) ) ) {
			exists = true;
			break;
		}
	}
	if (!exists)
		return false;
	return SpawnEffect(name, 0, pos, 0, 0);
}

bool CreateEffect(int effect_num, Vec* pos, int leng) {
	//check effects name list
	bool exists = false;
	if (effect_num > 1000)
		return false;
	if (effect_num < 0)
		return false;

	const char* effect_name = effects_name_list[effect_num];

	return SpawnEffect(effect_name, leng, pos, 0, 0);
}

bool CreateEffect(int effect_num, Vec* pos, S16Vec* rot, Vec* scale) {
	if (effect_num > 1000)
		return false;
	if (effect_num < 0)
		return false;
	const char* effect_name = effects_name_list[effect_num];
	return SpawnEffect(effect_name, 0, pos, rot, scale);
}

/*
void* CustomEffectSpawn(const char* name) {
	// FILL ME IN

	//EGG::Effect* effect = new EGG::Effect();

	// SKIP THE DTOR
}
*/

