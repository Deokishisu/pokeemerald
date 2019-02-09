MahoganyTown_Gym_EventObjects:
	object_event 1, EVENT_OBJ_GFX_PRYCE, 0, 5, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, MossdeepCity_Gym_EventScript_220898, 0
	object_event 2, EVENT_OBJ_GFX_BEAUTY, 0, 4, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 1, MossdeepCity_Gym_EventScript_220AFD, 0
	object_event 3, EVENT_OBJ_GFX_GUITARIST, 0, 0, 17, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 1, MossdeepCity_Gym_EventScript_220B2B, 0
	object_event 4, EVENT_OBJ_GFX_BEAUTY, 0, 9, 17, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 1, MossdeepCity_Gym_EventScript_220B70, 0
	object_event 5, EVENT_OBJ_GFX_GUITARIST, 0, 5, 9, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 1, MossdeepCity_Gym_EventScript_220B59, 0
	object_event 6, EVENT_OBJ_GFX_GUITARIST, 0, 2, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 1, MossdeepCity_Gym_EventScript_220B14, 0
	object_event 7, EVENT_OBJ_GFX_GYM_GUIDE, 0, 7, 15, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, MossdeepCity_Gym_EventScript_220C11, 0

MahoganyTown_Gym_MapWarps:
	warp_def 4, 17, 3, 2, MAP_MAHOGANY_TOWN
	warp_def 5, 17, 3, 2, MAP_MAHOGANY_TOWN

MahoganyTown_Gym_MapBGEvents:
	bg_event 3, 15, 0, BG_EVENT_PLAYER_FACING_ANY, MossdeepCity_Gym_EventScript_220C33
	bg_event 6, 15, 0, BG_EVENT_PLAYER_FACING_ANY, MossdeepCity_Gym_EventScript_220C43

MahoganyTown_Gym_MapEvents::
	map_events MahoganyTown_Gym_EventObjects, MahoganyTown_Gym_MapWarps, 0x0, MahoganyTown_Gym_MapBGEvents

