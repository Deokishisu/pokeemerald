FastShip_Cabins_NNW_NNE_NE_EventObjects:
	object_event 1, EVENT_OBJ_GFX_COOLTRAINER_M, 0, 4, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 2, NULL, 0
	object_event 2, EVENT_OBJ_GFX_COOLTRAINER_F, 0, 1, 5, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 3, NULL, 0
	object_event 3, EVENT_OBJ_GFX_SUPER_NERD, 0, 1, 5, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 3, NULL, 0
	object_event 4, EVENT_OBJ_GFX_POKEFAN_M, 0, 4, 18, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 3, NULL, 0
	object_event 5, EVENT_OBJ_GFX_SAILOR, 0, 4, 28, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, NULL, 0
	object_event 6, EVENT_OBJ_GFX_GENTLEMAN, 0, 7, 32, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 1, NULL, 0
	object_event 7, EVENT_OBJ_GFX_PHARMACIST, 0, 2, 32, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 4, NULL, 0

FastShip_Cabins_NNW_NNE_NE_MapWarps:
	warp_def 2, 0, 3, 1, MAP_FAST_SHIP_1F
	warp_def 2, 13, 3, 2, MAP_FAST_SHIP_1F
	warp_def 2, 26, 3, 3, MAP_FAST_SHIP_1F

FastShip_Cabins_NNW_NNE_NE_MapBGEvents:
	bg_event 6, 14, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 7, 20, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 7, 33, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

FastShip_Cabins_NNW_NNE_NE_MapEvents::
	map_events FastShip_Cabins_NNW_NNE_NE_EventObjects, FastShip_Cabins_NNW_NNE_NE_MapWarps, 0x0, FastShip_Cabins_NNW_NNE_NE_MapBGEvents

