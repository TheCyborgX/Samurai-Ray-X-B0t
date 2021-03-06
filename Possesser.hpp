
#define GetCurrentThreadIdFast() (__readfsdword(0x24))



#pragma region OFFSET_GLOBAL_VARS

#pragma region CMISC

#define OFFSET_FREEZE 0x10601BC
#define OFFSET_UNLOCK_CLASSES 0x6BCE720
#define OFFSET_NAME (*(DWORD*)0x5CCB138 + 0x142)
#define OFFSET_CLANTAG 0x1328D54
#define OFFSET_EMBLEM_TITLE 0x1328D35

#pragma endregion

#pragma region CENGINE
#define OFFSET_DIRECTX_THREAD_ID 0x1D69C7C
#define OFFSET_RENDER_FRAME_THREAD_ID 0x1D69C78
#define OFFSET_SCREEN_SIZE 0x1338050
#define OFFSET_LOCAL_CLIENT_NUMBER 0xB3D364
#define OFFSET_MATCH_ID 0xFF5058
#define OFFSET_IS_IN_GAME 0x8FF110
#define	OFFSET_USER_CMDS 0x10638A4
#define OFFSET_CURRENT_CMD_NUMBER 0x1064EA4 
#define OFFSET_USER_CMD_BUTTONS 0x1063890
#define OFFSET_CURRENT_WEAPON 0x8FF470
#define OFFSET_CG_T 0x8FF100
#define OFFSET_OUT_PACKET_T 0x106D6BC
#define OFFSET_G_ENTITY 0xA08630
#define OFFSET_PLAYER_INFO 0x9FC748
#define OFFSET_REFDEF_T 0x96A288
#define OFFSET_CLIENT_ACTIVE_T 0x1063778
#define OFFSET_REFDEF_VIEW_ANGLES_T 0x96EDAC
#define OFFSET_WEAPON_INFO 0x8DDF18
#define OFFSET_SPREAD_MULTIPLIER 0xA03950
#define OFFSET_GET_WEAPON_RECOIL 0x4500E0
#define OFFSET_CONSOLE_FONT 0xFB457C
#define OFFSET_HUD_SMALL_FONT 0x58DD3D0
#define OFFSET_OBJECTIVE_FONT 0x58DD3C8
#define OFFSET_WHITE_SHADER 0xFB4574
#define OFFSET_USER_CAPTION 0x106020C
#define OFFSET_CG_SERVER_COMMAND 0x4EE3A0

#pragma endregion

#pragma endregion

#pragma region OFFSET_FUNCTION

#define OFFSET_FIND_DVAR 0x649490
#define OFFSET_PROCESS_DVAR 0x648B70
#define OFFSET_BG_EVALUATE_TRAJECTORY 0x4DEEE0
#define OFFSET_VECTOR_NORMALIZE 0x541670
#define OFFSET_VECTOR_DISTANCE 0x466AE0
#define OFFSET_CG_GET_PLAYER_VIEW_POINT 0x4B02E0
#define OFFSET_CG_GET_VIEW_ANGLE_ANIMATIONS 0x523460
#define OFFSET_CG_INTERPOLATE_ENTITY 0x58BD80
#define OFFSET_BULLET_TRACE 0x5A8650
#define OFFSET_GET_WALL_DEPTH 0x4933E0
#define OFFSET_ADVANCE_TRACE 0x49A5A0
#define OFFSET_DRAW_TEXT 0x42C970
#define OFFSET_DRAW_SHADER 0x4EE060
#define OFFSET_LOAD_SHADER 0x41B6B0
#define OFFSET_WEAPON_SHADER 0xA03E14
#define OFFSET_GET_WORLD_2D_COORDS_FROM_3D 0x588980
#define OFFSET_CG_DRAW_2D 0x430430
#define OFFSET_GET_SPREAD_ANGLE 0x4E1130
#define OFFSET_GET_SPREAD_VECTOR 0x5A8C40
#define OFFSET_CL_WRITE_PACKET 0x420ABA
#define OFFSET_CL_END_WRITE_PACKET 0x420E8A
#define OFFSET_CL_CREATE_NEW_COMMANDS 0x5B0A60
#define OFFSET_CL_CREATE_NEW_CMD 0x5B08C0
#define OFFSET_GET_ENTITY_POS 0x571790
#define OFFSET_GET_POINT_NUMBER_BY_NAME 0x473490
#define OFFSET_BUTTON_SHOOT 0xB3A009
#define OFFSET_CG_INIT_DRAW_CONSOLE 0x4D6280
#define OFFSET_GET_TEXT_WIDTH 0x548A70
#define OFFSET_GET_FONT_HEIGHT_BY_SCALE_ONE 0x779000
#define OFFSET_USER_KEYS 0x5A83D18
#define OFFSET_NEXT_USER_KEYS_NUMBER 0x5A83CEC
#define OFFSET_CURSOR_POS 0x58DA490

#pragma endregion





class Possesser
{
public:
	static void PossessEngine();


	
	static struct MemoryPossesser
	{
		static void MakeDirectJUMP(void* from, void* to);
		static void* MakeDirectJUMP(void* from, void* to, size_t bytestosave);
		static void PatchNOP(DWORD addr, size_t sz);
	};

};


