#ifndef __KAMEK_ACTORS_H
#define __KAMEK_ACTORS_H

#include <common.h>

enum Actors {
	BOOT = 0,
	AUTO_SELECT = 1,
	SELECT = 2,
	WORLD_MAP = 3,
	WORLD_9_DEMO = 4,
	STAGE = 5,
	RESTART_CRSIN = 6,
	CRSIN = 7,
	MOVIE = 8,
	GAMEOVER = 9,
	GAME_SETUP = 10,
	MULTI_PLAY_COURSE_SELECT = 11,
	CURSOR = 12,
	PLAYER = 13,
	YOSHI = 14,
	WM_TEST = 15,
	WM_TEST2 = 16,
	BG_GM = 17,
	CAMERA = 18,
	YOSHI_FIRE = 19,
	SLOW_QUICK_TAG = 20,
	TORIDE_KOKOOPA_DEMO = 21,
	BOSS_KAMECK_DEMO = 22,
	BOSS_KOOPA_DEMO = 23,
	CASTLE_KOKOOPA_DEMO_1ST = 24,
	CASTLE_KOKOOPA_DEMO_2ND = 25,
	BOSS_KOOPA_JR_DEMO = 26,
	KOOPA_SHIP_FOR_CASTLE_DEMO = 27,
	KOOPA_JR_FOR_CASTLE_DEMO = 28,
	PEACH_FOR_CASTLE_DEMO = 29,
	KAMECK_FOR_CASTLE_DEMO = 30,
	LEMMY_FOOTHOLD = 31,
	LEMMY_FOOTHOLD_MAIN = 32,
	CASTLE_BOSS_DOOR = 33,
	CASTLE_BOSS_KEY = 34,
	AC_BATTLE_GAME = 35,
	AC_BATTLE_KINOPIO = 36,
	AC_BATTLE_ITEM = 37,
	AC_ENDING_MAIN = 38,
	AC_BLOCK_WIND_TAG = 39,
	AC_GROUPID = 40,
	KAWANAGARE = 41,
	RIVER_PAIPO = 42,
	RIVER_ITEM = 43,
	RIVER_COIN = 44,
	RIVER_STARCOIN = 45,
	RIVER_LIFT = 46,
	RIVER_BARREL = 47,
	RIVER_PUKU = 48,
	RIVER_PAKKUN = 49,
	RIVER_MGR = 50,
	EN_KURIBO = 51,
	EN_PATA_KURIBO = 52,
	EN_MAME_KURIBO = 53,
	EN_NOKONOKO = 54,
	EN_PATAPATA = 55,
	EN_MET = 56,
	EN_TOGEZO = 57,
	EN_SAKASA_TOGEZO = 58,
	EN_BLOCK = 59,
	EN_ITEM = 60,
	EN_STAR_COIN = 61,
	EN_STAR_COIN_LINE = 62,
	EN_STAR_COIN_VOLT = 63,
	AC_FLAGON = 64,
	AC_4SWICHAND = 65,
	AC_4SWICHOR = 66,
	AC_RANDSWICH = 67,
	AC_CHNGESWICH = 68,
	AC_IFSWICH = 69,
	AC_RNSWICH = 70,
	EN_BKBLOCK = 71,
	EN_HNSWICH = 72,
	EN_PSWICH = 73,
	EN_QSWICH = 74,
	EN_BOSS_KOOPA_SWITCH = 75,
	EN_BOSS_KOOPA_BIG_SWITCH = 76,
	EN_BLSWICH = 77,
	EN_BLPSWICH = 78,
	EN_BLQSWICH = 79,
	EN_BUBBLE = 80,
	EN_DOSUN = 81,
	EN_BIGDOSUN = 82,
	EN_JUGEM = 83,
	EN_JUGEM_COIN = 84,
	EN_EATJUGEM = 85,
	EN_JUGEM_BODY = 86,
	EN_TOGEMET = 87,
	EN_FIREBAR = 88,
	EN_TOGETEKKYU = 89,
	EN_BIG_TOGETEKKYU = 90,
	EN_UP_DOKAN_PAKKUN = 91,
	EN_DOWN_DOKAN_PAKKUN = 92,
	EN_RIGHT_DOKAN_PAKKUN = 93,
	EN_LEFT_DOKAN_PAKKUN = 94,
	EN_UP_DOKAN_FPAKKUN = 95,
	EN_DOWN_DOKAN_FPAKKUN = 96,
	EN_RIGHT_DOKAN_FPAKKUN = 97,
	EN_LEFT_DOKAN_FPAKKUN = 98,
	EN_JIMEN_PAKKUN = 99,
	EN_JIMEN_BIG_PAKKUN = 100,
	EN_JIMEN_FPAKKUN = 101,
	EN_JIMEN_BIG_FPAKKUN = 102,
	EN_WALK_PAKKUN = 103,
	ICEBALL = 104,
	PL_FIREBALL = 105,
	PAKKUN_FIREBALL = 106,
	BROS_FIREBALL = 107,
	BOOMERANG = 108,
	EN_HELPOS = 109,
	EN_FIREBROS = 110,
	EN_BOOMERANGBROS = 111,
	EN_HAMMERBROS = 112,
	EN_ICEBROS = 113,
	EN_LIFT_HAMMERBROS = 114,
	HAMMER = 115,
	EN_HIMANBROS = 116,
	MEGA_HAMMER = 117,
	BROS_ICEBALL = 118,
	EN_BOYON = 119,
	EN_REMOCON_TORIMOCHI = 120,
	TAG_WIND = 121,
	TAG_THUNDER = 122,
	TAG_WATER = 123,
	EN_AUTOSCR = 124,
	OBJ_GRASS = 125,
	EN_ENV = 126,
	EN_KILLER = 127,
	EN_SEARCH_KILLER = 128,
	EN_MAGNUM_KILLER = 129,
	EN_SEARCH_MAGNUM_KILLER = 130,
	EN_BASABASA = 131,
	WAKI_PARABOM = 132,
	EN_BOMHEI = 133,
	EN_PARA_BOMHEI = 134,
	EN_MECHA_KOOPA = 135,
	EN_MOUSE = 136,
	EN_GHOST_JUGEM = 137,
	DOKAN_WAKIDASHI = 138,
	EN_CRASHER = 139,
	AC_WAKILIFT = 140,
	EN_BIRIKYU = 141,
	EN_LINE_BIRIKYU = 142,
	EN_BIRIKYU_MAKER = 143,
	EN_CHOROBON = 144,
	EN_SANBO = 145,
	EN_SANBO_PARTS = 146,
	EN_SANBO_EL = 147,
	EN_GURUGURU = 148,
	EN_GESSO = 149,
	EN_BARAMAKI_GESSO = 150,
	EN_GOALPOLE = 151,
	EN_GESSO_CHILD = 152,
	BARNAR_MGR = 153,
	EN_SYNCRO_BARNAR = 154,
	EN_BARNAR = 155,
	EN_LARGE_BARNAR = 156,
	EN_PUKUPUKU_PARENT = 157,
	AC_TEAM_PUKUPUKU = 158,
	EN_PUKUPUKU = 159,
	EN_TOGEPUKU = 160,
	EN_MIDDLE_PUKU = 161,
	EN_PUKUCOIN = 162,
	EN_KARON = 163,
	EN_BIGKARON = 164,
	EN_KARON_HEAD = 165,
	EN_REVERSE = 166,
	EN_WAKI_JUGEM = 167,
	EN_WIRE_TURN = 168,
	EN_BIG_WIRE_TURN = 169,
	EN_NET_NOKONOKO_LR = 170,
	EN_NET_NOKONOKO_UD = 171,
	BIGHANA_MGR = 172,
	HANA_MOUNTAIN = 173,
	EN_HANACHAN = 174,
	EN_BIG_HANACHAN = 175,
	EN_TERESA = 176,
	EN_BIG_TERESA = 177,
	EN_CROW = 178,
	EN_BIGPILE_UNDER = 179,
	EN_BIGPILE_UPPER = 180,
	EN_BIGPILE_RIGHT = 181,
	EN_BIGPILE_LEFT = 182,
	EN_SUPER_BIGPILE_RIGHT = 183,
	EN_SUPER_BIGPILE_LEFT = 184,
	EN_GOKUBUTO_BIGPILE_UNDER = 185,
	EN_GOKUBUTO_BIGPILE_UPPER = 186,
	EN_MORTON_BIGPILE = 187,
	EN_YAJIRUSHI = 188,
	EN_WANWAN = 189,
	EN_WANWAN_PILE = 190,
	EN_JUMPPUKU = 191,
	EN_IGAPUKU = 192,
	EN_WAKI_IGAPUKU = 193,
	EN_FIRESNAKE = 194,
	EN_BOSS_KAMECK = 195,
	EN_SLIP_PENGUIN = 196,
	WAKI_SLIP_PENGUIN2 = 197,
	EN_SLIP_PENGUIN2 = 198,
	SLIP_PENGUIN2_GLASSES = 199,
	EN_IGA_KURIBO = 200,
	EN_WATERSTREAM = 201,
	AWA = 202,
	DUMMY_DOOR_PARENT = 203,
	DUMMY_DOOR_CHILD = 204,
	DUMMY_DOOR = 205,
	NOBORIBOU_OBAKE = 206,
	UNTEI_ROPE = 207,
	REMO_DOOR = 208,
	REMO_SLIDE_DOOR = 209,
	BRANCH = 210,
	BG_CENTER = 211,
	KAMECK_MAGIC = 212,
	SINKDOKAN_UP = 213,
	SINKDOKAN_DOWN = 214,
	SINKDOKAN_LEFT = 215,
	SINKDOKAN_RIGHT = 216,
	FLYDOKAN_UP = 217,
	FLYDOKAN_DOWN = 218,
	FLYDOKAN_LEFT = 219,
	FLYDOKAN_RIGHT = 220,
	EN_HATENA_BALLOON = 221,
	EN_ONEWAY_GATE = 222,
	EN_PATABLOCK = 223,
	EN_KERONPA = 224,
	KERONPA_FIRE = 225,
	AC_NEXTGOTO_BLOCK = 226,
	EN_BAKUBAKU = 227,
	EN_DOOR = 228,
	EN_SWITCHDOOR = 229,
	EN_OBAKEDOOR = 230,
	EN_TORIDEDOOR = 231,
	EN_CASTLEDOOR = 232,
	EN_KOOPADOOR = 233,
	AC_REVERSEBLOCK = 234,
	CHUKAN_POINT = 235,
	EN_MAX_UE_LEFT = 236,
	EN_MAX_UE_RIGHT = 237,
	EN_MAX_UE2_LEFT = 238,
	EN_MAX_UE2_RIGHT = 239,
	EN_ZOOM = 240,
	EN_BOSS_LARRY = 241,
	EN_BOSS_WENDY = 242,
	EN_BOSS_IGGY = 243,
	EN_BOSS_LEMMY = 244,
	EN_BOSS_MORTON = 245,
	EN_BOSS_ROY = 246,
	EN_BOSS_LUDWIG = 247,
	EN_BOSS_CASTLE_LARRY = 248,
	EN_BOSS_CASTLE_ROY = 249,
	EN_BOSS_CASTLE_WENDY = 250,
	EN_BOSS_CASTLE_IGGY = 251,
	CASTLE_LEMMY_BALL = 252,
	EN_BOSS_CASTLE_LEMMY = 253,
	EN_BOSS_CASTLE_MORTON = 254,
	OBJ_LUDWIG = 255,
	EN_BOSS_CASTLE_LUDWIG = 256,
	EN_BOSS_KOOPA = 257,
	EN_BOSS_KOOPA_DEMO_KAMECK = 258,
	EN_BOSS_KOOPA_DEMO_PEACH = 259,
	AC_WAKI_KOOPA_FIRE = 260,
	KOOPA_FIRE = 261,
	LARRY_FIRE = 262,
	KOKOOPA_RING = 263,
	KOKOOPA_BALL = 264,
	KOKOOPA_THREEWAY_BLITZ = 265,
	LEMMY_BALL = 266,
	CASTLE_LEMMY_THROW_BALL = 267,
	OBJ_IGGY_SLED = 268,
	OBJ_IGGY_WANWAN = 269,
	OBJ_MORTON = 270,
	OBJ_ROY = 271,
	OBJ_LARRY = 272,
	OBJ_WENDY = 273,
	AC_BOSS_KOOPA_SCAFFOLD = 274,
	AC_BOSS_KOOPA_RUBBLE = 275,
	AC_BOSS_KOOPA_BG_EFFECT = 276,
	CASTLE_LUDWIG_BLITZ = 277,
	CASTLE_LUDWIG_BLITZ_MGR = 278,
	WAKI_KOKOOPA_FIRE = 279,
	FALL_FIRE = 280,
	WAKI_FIRE = 281,
	FIRE_BLITZ = 282,
	KOKOOPA_SEARCH_FIRE = 283,
	EN_UNIZOO = 284,
	EN_UNIRA = 285,
	EN_KANIBO = 286,
	EN_KANITAMA = 287,
	EN_KOPONE = 288,
	EN_AKOYA = 289,
	EN_MIDDLE_KURIBO = 290,
	EN_LARGE_KURIBO = 291,
	EN_BEANS_KURIBO = 292,
	AC_STRONGBOX = 293,
	EN_REMOCON_CANNON = 294,
	WAKI_TOGETEKKYU = 295,
	JR_CLOWN_A = 296,
	JR_CLOWN_B = 297,
	JR_CLOWN_C = 298,
	JR_CLOWN_FOR_PLAYER = 299,
	FLOOR_JR_A = 300,
	FLOOR_JR_B = 301,
	FLOOR_JR_C = 302,
	FLOOR_JR_C_MGR = 303,
	BOMB_JR_C = 304,
	EN_BOSS_KOOPA_JR_A = 305,
	EN_BOSS_KOOPA_JR_B = 306,
	EN_BOSS_KOOPA_JR_C = 307,
	JR_FIRE = 308,
	JR_FLOOR_FIRE = 309,
	JR_FLOOR_FIRE_MGR = 310,
	JR_CLOWN_FOR_JR_C_DEMO = 311,
	KAMECK_FOR_AIRSHIP_DEMO = 312,
	PEACH_FOR_AIRSHIP_DEMO = 313,
	KOOPA_SHIP_FOR_AIRSHIP_DEMO = 314,
	EN_EATCOIN = 315,
	AC_WAKI_KILLER = 316,
	WAKI_KERONPA = 317,
	AC_WAKI_PUKUPUKU = 318,
	BELT_NEEDLE = 319,
	INTERMITTENT = 320,
	MIST_INTERMITTENT = 321,
	YOGAN_INTERMITTENT = 322,
	EN_IBARAMUSHI = 323,
	WAKI_ANKOH = 324,
	EN_CHOCHIN_ANKOH = 325,
	EN_MISTMAN = 326,
	EN_TESTMAN = 327,
	EN_CLOUD = 328,
	AC_ITEM_KEY = 329,
	AC_YOSHI_EGG = 330,
	EN_WATERPAIPO = 331,
	EN_WATERPAKKUN = 332,
	FOO_BALL = 333,
	MT_HANACHAN = 334,
	EN_LR_STOP_UP = 335,
	EN_LR_STOP_DW = 336,
	EN_ROT_PAKKUN = 337,
	EN_POLTER = 338,
	EN_ICICLE = 339,
	WALLINSECT_MGR = 340,
	EN_WALLINSECT = 341,
	EN_LANDBARREL = 342,
	EN_IWAO = 343,
	IWAO_ROCK = 344,
	KAZAN_MGR = 345,
	KAZAN_ROCK = 346,
	EN_CANNON_BULLET = 347,
	EN_CHOROPU = 348,
	EN_MANHOLE_CHOROPU = 349,
	CHOROPOO_SHADOW = 350,
	MINI_GAME_BALLOON = 351,
	MINI_GAME_BALLOON_STICK = 352,
	EN_JELLY_FISH = 353,
	MINI_GAME_WIRE_MESH = 354,
	MINI_GAME_GUN_BATTERY_MGR = 355,
	MINI_GAME_GUN_BATTERY_MGR_OBJ = 356,
	MINI_GAME_WIRE_MESH_MGR = 357,
	MINI_GAME_WIRE_MESH_MGR_OBJ = 358,
	PEACH_CASTLE_SEQUENCE_MGR = 359,
	PEACH_CASTLE_SEQUENCE_MGR_OBJ = 360,
	PEACH_CASTLE_BLOCK = 361,
	MINI_GAME_KINOPIO = 362,
	AC_KANBAN_ARROW = 363,
	AC_WATER_BUBBLE = 364,
	EN_BUBBLE_CONTROL = 365,
	AC_WAKI_WOODBOX = 366,
	AC_AUTOSCROOL_SWICH = 367,
	AC_ROTATION_GHOST_PARENT = 368,
	EN_ROTATION_GHOST = 369,
	SHIP_WINDOW = 370,
	EN_MADOPU = 371,
	SPANA = 372,
	EN_GABON = 373,
	GABON_ROCK = 374,
	MANHOLE = 375,
	BGM_INTERLOCKING_DUMMY_BLOCK = 376,
	BGM_INTERLOCKING_DUMMY_BLOCK_MGR = 377,
	EN_KING_KILLER = 378,
	EN_WATER_BUBBLE_BULLET = 379,
	EN_FRUIT = 380,
	OBJ_SPARKS = 381,
	OBJ_SNOW = 382,
	TAG_SCROLL = 383,
	AC_BLOCK_GROUP = 384,
	AC_BLOCK_ONEUP = 385,
	AC_BLOCK_COIN = 386,
	AC_WAKI_SEARCH_MAGKILLER = 387,
	EN_TOBIPUKU = 388,
	AC_WAKI_TOBIPUKU = 389,
	NEEDLE_FOR_KOOPA_JR_B = 390,
	TOP_BG_FOR_CASTLE_LUDWIG = 391,
	MIDDLE_BG_FOR_CASTLE_LUDWIG = 392,
	BOTTOM_BG_FOR_CASTLE_LUDWIG = 393,
	MD_ACTOR = 394,
	MD_CAMERA = 395,
	EN_CLOUDLT = 396,
	UNIT_RAIL = 397,
	UNIT_CHIKUWA = 398,
	OBJ_SEAWEED = 399,
	TAG_ENVSOUND = 400,
	EN_COIN = 401,
	EN_COIN_JUGEM = 402,
	EN_COIN_JUMP = 403,
	EN_COIN_FLOOR = 404,
	EN_COIN_VOLT = 405,
	EN_COIN_WIND = 406,
	EN_BLUE_COIN = 407,
	EN_COIN_WATER = 408,
	EN_REDCOIN = 409,
	EN_GREENCOIN = 410,
	ICE_ACTOR = 411,
	AC_LIGHT_BLOCK = 412,
	AC_PROP_BLOCK = 413,
	ENEMY_ICE = 414,
	PLAYER_ICE = 415,
	SLIDE_BLOCK = 416,
	POW_BLOCK = 417,
	BLOCK_TARU = 418,
	OBJ_CENTER = 419,
	OBJ_CENTER2 = 420,
	EN_LIFT_ROTATION_FULL = 421,
	LIFT_ROTATION_FULL_CHIKA = 422,
	LIFT_ROTATION_FULL_KINOKO = 423,
	LIFT_ROTATION_FULL_COLOR = 424,
	CAGE_BLOCK = 425,
	LIFT_ZEN_HAMMER = 426,
	LIFT_ZEN_SUISYA = 427,
	LIFT_ZEN_KAITEN_KANAAMI = 428,
	MOUSE_HOLE = 429,
	KATAMUKIYUKA = 430,
	LIFT_TORIDE_ROLL = 431,
	AC_LIFT_RIDE_HMOVE = 432,
	AC_LIFT_OBJBG_VMOVE = 433,
	AC_LIFT_OBJBG_HMOVE = 434,
	AC_LIFT_OBJBG_HMOVE_BIG = 435,
	EN_OBJ_POL = 436,
	EN_OBJ_POL_TORIDE = 437,
	EN_OBJ_POL_NEEDLE_L = 438,
	EN_OBJ_POL_NEEDLE_R = 439,
	EN_OBJ_POL_NEEDLE_LR = 440,
	EN_OBJ_POL_NEEDLE_U = 441,
	EN_OBJ_POL_NEEDLE_D = 442,
	EN_OBJ_POL_NEEDLE_UD = 443,
	LIFT_ZEN_TOGE = 444,
	LIFT_ZEN_SHIRO_YOGAN = 445,
	LIFT_ZEN_KAIHEI = 446,
	LIFT_DOKAN = 447,
	EN_PAIR_OBJ_PARENT = 448,
	EN_PAIR_OBJ_CHILD = 449,
	LIFT_ZEN_SHIRO = 450,
	EN_PAIR_OBJ_CHILD_TORIDE = 451,
	WAKI_ICE_ASHIBA = 452,
	WAKI_ICE_ASHIBA_WATER = 453,
	ICE_ASHIBA = 454,
	ICE_ASHIBA_WATER = 455,
	ICE_ASHIBA_RAIL = 456,
	AC_LIFT_RIDE_VMOVE = 457,
	AC_LIFT_SEESAW = 458,
	AC_LIFT_FALL = 459,
	AC_LIFT_REMOCON_SEESAW = 460,
	EN_LIFT_WHEEL = 461,
	AC_LIFT_BALANCE = 462,
	AC_LIFT_REMOCON_BALANCE_CLINCH = 463,
	AC_LIFT_REMOCON_BALANCE = 464,
	AC_LIFT_REMOCON_XLINE = 465,
	EN_LIFT_REMOCON_TRPLN = 466,
	EN_TRPLN_WALL = 467,
	EN_CHIKUWA_BLOCK = 468,
	EN_CLIFF_CHIKUWA_BLOCK = 469,
	EN_KILLER_HOUDAI = 470,
	EN_MAGNUM_KILLER_HOUDAI = 471,
	AC_WAKILIFT_STEP = 472,
	AC_LINE_LIFT = 473,
	LINE_SPIN_LIFT = 474,
	PALM_TREE = 475,
	NICE_BOAT = 476,
	LINE_KINOKO_BLOCK = 477,
	LADDER = 478,
	TARZAN_TSUTA = 479,
	TARZAN_IVY = 480,
	EN_LIFT_ROTATION_HALF = 481,
	LIFT_HURIKO_CENTER = 482,
	LIFT_HURIKO = 483,
	AC_LIFT_RIDEMOVE = 484,
	EN_LIFT_BURANKO = 485,
	AC_LIFT_WATERWHEEL = 486,
	EN_RAIL_POLYGON = 487,
	EN_RAIL_POLY_ICE = 488,
	EN_RAIL_POLY_PARENT = 489,
	EN_RAIL_POLY_CHILD = 490,
	FREEFALL = 491,
	EN_GURA_ROCK = 492,
	EN_GURA_YUKA = 493,
	EN_KAITEN_HOUDAI = 494,
	EN_REDRING = 495,
	EN_BARREL = 496,
	EN_JUMPDAI = 497,
	EN_BIG_HNSWICH = 498,
	EN_BIGBLOCK = 499,
	EN_SNAKEBLOCK = 500,
	EN_MARUTA = 501,
	OBJ_KAMECK = 502,
	AC_LIFT_SPINROTATION = 503,
	AC_LIFT_SPINROTATION_SYNC = 504,
	EN_RULETBLOCK = 505,
	AC_LIFT_SCALES = 506,
	AC_LIFT_SCALES_STEP = 507,
	EN_TARZANROPE = 508,
	AC_LIFT_BOSS_REMOCON_SEESAW = 509,
	AC_CHENGE_BLOCK = 510,
	EN_FIXATION_ICICLE = 511,
	EN_OBJ_HATENA_BLOCK = 512,
	EN_OBJ_HATENAB_BLOCK = 513,
	EN_OBJ_RENGA_BLOCK = 514,
	EN_OBJ_CLEAR_BLOCK = 515,
	AC_OBJ_CLEAR_BLOCK = 516,
	EN_HATENA_BLOCK_LINE = 517,
	EN_RENGA_BLOCK_LINE = 518,
	EN_BLOCK_HATENA_WATER = 519,
	EN_BLOCK_SOROBAN = 520,
	EN_BLOCK_STAFFROLL = 521,
	ELASTIC_KINOKO_PARENT = 522,
	ELASTIC_KINOKO = 523,
	EN_WHITE_BLOCK = 524,
	MANTA_MGR = 525,
	MANTA_MGR2 = 526,
	MANTA = 527,
	AC_LIFT_SLIDE_KINOKO = 528,
	EN_ROTATION_BLOCK = 529,
	EN_COIN_ANGLE = 530,
	ROT_DOKAN = 531,
	EN_BLOCK_HATENA_ANGLE = 532,
	EN_BLOCK_RENGA_ANGLE = 533,
	AC_WIRE_CIRCLE = 534,
	AC_WIRE_REMOCON = 535,
	AC_LIFT_ICE_SPRING = 536,
	ICELUMP = 537,
	ICECUBE = 538,
	EN_WOODBOX = 539,
	EN_PATAMET = 540,
	EN_BIG_PATAMET = 541,
	NUT = 542,
	EN_BIG_MET = 543,
	EN_GAKE_NOKO = 544,
	AC_DOKAN_CANNON = 545,
	AC_SHIP_CANNON = 546,
	AC_ROT_CANNON = 547,
	AC_ROT_DOKAN_CANNON = 548,
	ROT_BARNAR = 549,
	CIRCLE_RIGHT = 550,
	BLOCK_LIGHT = 551,
	HAND_RIGHT = 552,
	EN_BIG_ICICLE = 553,
	AC_WATER_BUBBLE_PARENT = 554,
	AC_WATER_BUBBLE_CANNON = 555,
	EN_KILLER_HOUDAI_SLIDE = 556,
	EN_BLACK_PAKKUN = 557,
	TORCHILIGHT = 558,
	EN_BLOCK_CLOUD = 559,
	AC_WIRE_MOVE = 560,
	OBJ_FRUITTREE = 561,
	EN_BOUNCE_BALL = 562,
	EN_BLOCK_HATENA_PLAYER = 563,
	EN_BLOCK_RENGA_PLAYER = 564,
	AC_FREEZER = 565,
	AC_WIRE_FOOTHOLD = 566,
	EN_ITEM_IVY = 567,
	TARZAN_ROPE = 568,
	CANNON_PIPE = 569,
	KINOKO_LIFT_PARENT = 570,
	KINOKO_LIFT = 571,
	OBJ_SPIN_PARENT = 572,
	OBJ_SPIN_CHILD = 573,
	OBJ_SPIN_ASHIBA = 574,
	SPIN_WIRE = 575,
	WARP_CANNON = 576,
	OBJ_KINOKO = 577,
	ZOOM_PIPE = 578,
	ZOOM_PIPE_DOWN = 579,
	OBJ_PIPE_UP = 580,
	OBJ_PIPE_UP_NG = 581,
	OBJ_PIPE_DOWN = 582,
	OBJ_PIPE_RIGHT = 583,
	OBJ_PIPE_LEFT = 584,
	LIFT_DOWN_ON = 585,
	OBJ_MOVE_ON_GHOST = 586,
	LIFT_DOWN_ON_NORMAL = 587,
	LIFT_RIDE_OFF = 588,
	LINE_TRAIN = 589,
	REMO_LINE_LIFT = 590,
	WATER_LIFT = 591,
	AC_NICE_COIN = 592,
	AC_NICE_COIN_REGULAR = 593,
	EN_BLOCK_HELP = 594,
	FAR_BG = 595,
	AC_BG_WATER = 596,
	AC_BG_LAVA = 597,
	AC_BG_POISON = 598,
	AC_BG_SAND = 599,
	AC_BG_CLOUD = 600,
	AC_BG_MOYA = 601,
	AC_WATERALL_RAIL = 602,
	EN_BLUR = 603,
	MASK = 604,
	DTEST = 605,
	AC_WATER_MOVE = 606,
	AC_WATER_MOVE_REGULAR = 607,
	AC_WATER_XINFINITE_MOVE = 608,
	AC_FLOOR_GYRATION = 609,
	AC_FLOOR_HOLE_DOKAN = 610,
	AC_FLOOR_DOKAN_EIGHT = 611,
	AC_GEAR_GYRATION = 612,
	AC_SHIP_GEAR = 613,
	AC_BIGSHELL = 614,
	EN_BOSS_KOOPA_DEMO_CAGE = 615,
	AC_STAND = 616,
	AC_HOUSE_LIGHT = 617,
	AC_LIGHT_WATER = 618,
	AC_COPYRIGHT = 619,
	WII_STRAP = 620,
	WM_CS_SEQ_MNG = 621,
	WORLD_CAMERA = 622,
	WM_MAP = 623,
	WM_IBARA = 624,
	WM_ANTLION_MNG = 625,
	WM_CASTLE = 626,
	WM_TOWER = 627,
	WM_PEACH_CASTLE = 628,
	WM_KILLER = 629,
	WM_KILLERBULLET = 630,
	WM_SINKSHIP = 631,
	WM_SWITCH = 632,
	WM_START = 633,
	WM_KINOKO_BASE = 634,
	WM_KINOKO_RED = 635,
	WM_KINOKO_1UP = 636,
	WM_KINOKO_STAR = 637,
	WM_COURSE = 638,
	WM_STOP = 639,
	WM_TORIDE = 640,
	WM_GHOST = 641,
	WM_DOKAN = 642,
	WM_CANNON = 643,
	WM_KOOPASHIP = 644,
	WM_BOSS_BASE = 645,
	WM_BOSS_LARRY = 646,
	WM_BOSS_ROY = 647,
	WM_BOSS_WENDY = 648,
	WM_BOSS_IGGY = 649,
	WM_BOSS_LEMMY = 650,
	WM_BOSS_MORTON = 651,
	WM_BOSS_LUDWIG = 652,
	WM_BOSS_KAMECK = 653,
	WM_ANTLION = 654,
	WM_KURIBO = 655,
	WM_PUKU = 656,
	WM_PAKKUN = 657,
	WM_BROS = 658,
	WM_JUGEM = 659,
	WM_PLAYER = 660,
	WM_SUBPLAYER = 661,
	WM_NOTE = 662,
	WM_TREASURESHIP = 663,
	WM_DIRECTOR = 664,
	WM_GRID = 665,
	WM_ISLAND = 666,
	WM_ITEM = 667,
	WM_CS_W3_PALM = 668,
	WM_SURRENDER = 669,
	WM_KOOPA_CASTLE = 670,
	WM_ANCHOR = 671,
	WM_PAKKUNHEAD = 672,
	WM_CLOUD = 673,
	WM_SMALLCLOUD = 674,
	WM_KOOPAJR = 675,
	WM_PEACH = 676,
	WM_BOARD = 677,
	WM_BUBBLE = 678,
	WM_KINOBALLOON = 679,
	WM_SANDPILLAR = 680,
	WM_YOGANPILLAR = 681,
	WM_KINOPIO = 682,
	WM_DANCE_PAKKUN = 683,
	WM_DOKANROUTE = 684,
	WM_HANACHAN = 685,
	WM_TOGEZO = 686,
	WM_MANTA = 687,
	WM_TERESA = 688,
	WORLD_SELECT = 689,
	WORLD_SELECT_GUIDE = 690,
	COLLECTION_COIN_BASE = 691,
	COLLECTION_COIN = 692,
	COURSE_SELECT_MENU = 693,
	NUMBER_OF_PEOPLE_CHANGE = 694,
	STOCK_ITEM = 695,
	STOCK_ITEM_SHADOW = 696,
	EASY_PAIRING = 697,
	WM_2D_PLAYER = 698,
	EVENT_OPENING_TITLE = 699,
	SELECT_PLAYER = 700,
	MULTI_COURSE_SELECT = 701,
	TIME_UP = 702,
	COURSE_TIME_UP = 703,
	YES_NO_WINDOW = 704,
	COURSE_SELECT_MANAGER = 705,
	FUKIDASHI_MANAGER = 706,
	SMALL_SCORE_MANAGER = 707,
	GAMEDISPLAY = 708,
	OTASUKE_INFO = 709,
	PAUSEWINDOW = 710,
	RESULT = 711,
	POINT_RESULT_MULTI = 712,
	POINT_RESULT_DATE_FILE = 713,
	POINT_RESULT_DATE_FILE_FREE = 714,
	GOAL_MANAGER = 715,
	COURSE_CLEAR = 716,
	OTEHON_CLEAR = 717,
	INFO_WINDOW = 718,
	SELECT_CURSOR = 719,
	WARNING_MANAGER = 720,
	SEQUENCE_BG = 721,
	GAME_OVER = 722,
	MODE_SELECT = 723,
	DATE_FILE = 724,
	FILE_SELECT = 725,
	CONTINUE = 726,
	MINI_GAME_CANNON = 727,
	MINI_GAME_WIRE = 728,
	MODEL_PLAY_MANAGER = 729,
	MODEL_PLAY_BASE = 730,
	MODEL_PLAY_DATE = 731,
	MODEL_PLAY_ARROW = 732,
	MODEL_PLAY_GUIDE = 733,
	MESSAGE_WINDOW = 734,
	CHARACTER_CHANGE_SELECT_BASE = 735,
	CHARACTER_CHANGE_SELECT_CONTENTS = 736,
	CHARACTER_CHANGE_SELECT_ARROW = 737,
	CHARACTER_CHANGE_INDICATOR = 738,
	MULTI_COURSE_SELECT_CONTENTS = 739,
	COLLECTION_COIN_DATE = 740,
	CONTROLLER_INFORMATION = 741,
	DRAW_GAME = 742,
	STAFF_CREDIT_SCORE = 743,
	THE_END = 744,
	DEMO_MESSAGE = 745,
	LETTER_WINDOW = 746,
	DUMMY_ACTOR = 747,
	LASTACTOR_STAGE = 748,
	LASTACTOR = 749,

	//Beginning of new entries
	PurpleCoin = 750,
	FlipBlock = 751,
	BonePiece = 752,
	EventBlock = 753,
	ShyGuy = 754,
	ShyGuyGiant = 755,
	Samurshai = 756,
	Topman = 757,
	SuperTopman = 758,
	ElectricLine = 759,
	SpriteSpawner = 760,
	SpriteSwapper = 761,
	LaunchStar = 762,
	LeafPile = 763,
	PlayerNumberEvent = 764,
	GameStateEvent = 765,
	TimeClock = 766,
	SuperBubble = 767,
	ExitEvent = 768,
	NumPad = 769,
	EN_YOSHIWINGS = 770,
	UpsideDownEvent = 771,
	MegaGoomba = 772,
	PumpkinGoomba = 773,
	Ballon = 774,
	TripleBlock = 775,
	NewActorSpawner = 776,
	GreatGoalPole = 777,
	WATER_LIFT_NEW = 778,
	Sidestepper = 779,
	MiniSidestepper = 780,
	BoomBoom = 781,
	CutsceneMgr = 782,
	SecretGem = 783,

	//Baddy's stuff
	ShroobUfo = 784,
	LaunchStar = 785,
	StarChip = 786,
	ShyCart = 787,
	Rail = 788,
	WhereAmIGoing = 789,
	WarpBox = 790,
	Boshi = 791,
	CloudPlattform = 792,
	GoombaTower = 793,
	BusuBusu = 794
};

struct Actor {
	int field_0x00;
	unsigned int settings;
	short type;
	int field_0x0A;
	char field_0x0E;
	char field_0x0F;
	tree_node node;
	int field_0x24;
	int field_0x28;
	void *field_0x2C;
	short field_0x30;
	short field_0x32;
	int field_0x34;
	int field_0x38;
	void *field_0x3C;
	short field_0x40;
	short field_0x42;
	int field_0x44;
	int field_0x48;
	void *field_0x4C;
	int field_0x50;
	int field_0x54;
	int field_0x58;
	void *vtable;
	int field_0x64;
	int field_0x68;
	char *class_name;
	int field_0x70;
	int field_0x74;
	void *field_0x78;
	int field_0x7C;
	int field_0x80;
	int field_0x84;
	int field_0x88;
	int field_0x8C;
	int field_0x90;
	int field_0x94;
	int field_0x98;
	int field_0x9C;
	int field_0xA0;
	int field_0xA4;
	int field_0xA8;
	VEC3 position;
	// more goes here eventually...
};

Actor *CreateActor(Actors type, u32 settings, VEC3 *pos, void *rot, char layer);
Actor *GetActorParent(Actor *ac);
char *GetActorName(Actors type);

Actor *FindActorByID(int id);
Actor *FindActorByType(Actors type, Actor *startFrom);

#endif
