AzaleaTown_Gym_EventObjects::
	object_event 1, EVENT_OBJ_GFX_BUGSY, PAL_NPC_GREEN, 5, 7, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, DewfordTown_Gym_EventScript_1FC7C2, 0
	object_event 2, EVENT_OBJ_GFX_BUG_CATCHER, PAL_NPC_BROWN, 5, 3, 0, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 2, DewfordTown_Gym_EventScript_1FC8B7, 0
	object_event 3, EVENT_OBJ_GFX_BUG_CATCHER, PAL_NPC_BROWN, 8, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 3, DewfordTown_Gym_EventScript_1FC8D9, 0
	object_event 4, EVENT_OBJ_GFX_BUG_CATCHER, PAL_NPC_BROWN, 0, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 3, DewfordTown_Gym_EventScript_1FC8FB, 0
	object_event 5, EVENT_OBJ_GFX_TWIN, PAL_NPC_RED, 4, 10, 1, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 1, DewfordTown_Gym_EventScript_1FC93F, 0
	object_event 6, EVENT_OBJ_GFX_TWIN, PAL_NPC_RED, 5, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 1, DewfordTown_Gym_EventScript_1FC961, 0
	object_event 7, EVENT_OBJ_GFX_GYM_GUIDE, 0, 7, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, DewfordTown_Gym_EventScript_1FC983, 0

AzaleaTown_Gym_MapWarps::
	warp_def 4, 15, 0, 2, MAP_AZALEA_TOWN
	warp_def 5, 15, 0, 2, MAP_AZALEA_TOWN

AzaleaTown_Gym_MapBGEvents::
	bg_event 3, 13, 3, BG_EVENT_PLAYER_FACING_ANY, DewfordTown_Gym_EventScript_1FC9A2
	bg_event 6, 13, 3, BG_EVENT_PLAYER_FACING_ANY, DewfordTown_Gym_EventScript_1FC9B2

AzaleaTown_Gym_MapEvents::
	map_events AzaleaTown_Gym_EventObjects, AzaleaTown_Gym_MapWarps, 0x0, AzaleaTown_Gym_MapBGEvents
