BlackthornCity_Gym_1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_CLAIR, PAL_NPC_BLUE, 5, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, SootopolisCity_Gym_1F_EventScript_224F44, 0
	object_event 2, EVENT_OBJ_GFX_COOLTRAINER_M, PAL_NPC_RED, 6, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRUE, 3, SootopolisCity_Gym_1F_EventScript_224F44, 0
	object_event 3, EVENT_OBJ_GFX_COOLTRAINER_M, PAL_NPC_RED, 1, 14, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRUE, 3, SootopolisCity_Gym_1F_EventScript_224F44, 0
	object_event 4, EVENT_OBJ_GFX_COOLTRAINER_F, PAL_NPC_RED, 9, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRUE, 1, SootopolisCity_Gym_1F_EventScript_224F44, 0
	object_event 5, EVENT_OBJ_GFX_GYM_GUIDE, PAL_NPC_RED, 7, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, SootopolisCity_Gym_1F_EventScript_225040, 0

BlackthornCity_Gym_1F_MapWarps::
	warp_def 4, 17, 0, 0, MAP_BLACKTHORN_CITY
	warp_def 5, 17, 0, 0, MAP_BLACKTHORN_CITY
	warp_def 1, 7, 3, 0, MAP_BLACKTHORN_CITY_GYM_2F
	warp_def 7, 9, 3, 0, MAP_BLACKTHORN_CITY_GYM_2F
	warp_def 2, 6, 3, 0, MAP_BLACKTHORN_CITY_GYM_2F
	warp_def 7, 7, 3, 0, MAP_BLACKTHORN_CITY_GYM_2F
	warp_def 7, 6, 3, 0, MAP_BLACKTHORN_CITY_GYM_2F

BlackthornCity_Gym_1F_MapBGEvents::
	bg_event 3, 15, 0, BG_EVENT_PLAYER_FACING_ANY, SootopolisCity_Gym_1F_EventScript_22505F
	bg_event 6, 15, 0, BG_EVENT_PLAYER_FACING_NORTH, SootopolisCity_Gym_1F_EventScript_22506F

BlackthornCity_Gym_1F_MapEvents::
	map_events BlackthornCity_Gym_1F_EventObjects, BlackthornCity_Gym_1F_MapWarps, 0x0, BlackthornCity_Gym_1F_MapBGEvents
