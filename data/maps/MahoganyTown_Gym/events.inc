MahoganyTown_Gym_EventObjects::
	object_event 1, EVENT_OBJ_GFX_PRYCE, PAL_NPC_BROWN, 5, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, MossdeepCity_Gym_EventScript_220898, 0
	object_event 2, EVENT_OBJ_GFX_BEAUTY, PAL_NPC_RED, 4, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 1, MossdeepCity_Gym_EventScript_220AFD, 0
	object_event 3, EVENT_OBJ_GFX_GUITARIST, PAL_NPC_BLUE, 0, 17, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 1, MossdeepCity_Gym_EventScript_220B2B, 0
	object_event 4, EVENT_OBJ_GFX_BEAUTY, PAL_NPC_RED, 9, 17, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 1, MossdeepCity_Gym_EventScript_220B70, 0
	object_event 5, EVENT_OBJ_GFX_GUITARIST, PAL_NPC_BLUE, 5, 9, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 1, MossdeepCity_Gym_EventScript_220B59, 0
	object_event 6, EVENT_OBJ_GFX_GUITARIST, PAL_NPC_BLUE, 2, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 1, MossdeepCity_Gym_EventScript_220B14, 0
	object_event 7, EVENT_OBJ_GFX_GYM_GUIDE, PAL_NPC_RED, 7, 15, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, MossdeepCity_Gym_EventScript_220C11, 0

MahoganyTown_Gym_MapWarps::
	warp_def 4, 17, 3, 2, MAP_MAHOGANY_TOWN
	warp_def 5, 17, 3, 2, MAP_MAHOGANY_TOWN

MahoganyTown_Gym_MapBGEvents::
	bg_event 3, 15, 0, BG_EVENT_PLAYER_FACING_ANY, MossdeepCity_Gym_EventScript_220C33
	bg_event 6, 15, 0, BG_EVENT_PLAYER_FACING_ANY, MossdeepCity_Gym_EventScript_220C43

MahoganyTown_Gym_MapEvents::
	map_events MahoganyTown_Gym_EventObjects, MahoganyTown_Gym_MapWarps, 0x0, MahoganyTown_Gym_MapBGEvents
