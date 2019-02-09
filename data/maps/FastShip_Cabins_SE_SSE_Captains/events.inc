FastShip_Cabins_SE_SSE_Captains_EventObjects:
	object_event 1, EVENT_OBJ_GFX_CAPTAIN, 0, 3, 27, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_GENTLEMAN, 0, 2, 18, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_TWIN, 0, 3, 18, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_TWIN, 0, 2, 27, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, NULL, 0
	object_event 5, EVENT_OBJ_GFX_POKEFAN_M, 0, 5, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 5, NULL, 0
	object_event 6, EVENT_OBJ_GFX_TWIN, 0, 2, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 1, NULL, 0
	object_event 7, EVENT_OBJ_GFX_TWIN, 0, 3, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 1, NULL, 0
	object_event 8, EVENT_OBJ_GFX_SUPER_NERD, 0, 5, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 5, NULL, 0
	object_event 9, EVENT_OBJ_GFX_POKEFAN_M, 0, 2, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 3, NULL, 0
	object_event 10, EVENT_OBJ_GFX_POKEFAN_F, 0, 5, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 1, NULL, 0
	object_event 11, EVENT_OBJ_GFX_SUPER_NERD, 0, 1, 16, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 2, NULL, 0

FastShip_Cabins_SE_SSE_Captains_MapWarps:
	warp_def 2, 7, 3, 7, MAP_FAST_SHIP_1F
	warp_def 3, 7, 3, 7, MAP_FAST_SHIP_1F
	warp_def 2, 20, 3, 8, MAP_FAST_SHIP_1F
	warp_def 3, 20, 3, 8, MAP_FAST_SHIP_1F
	warp_def 2, 35, 3, 9, MAP_FAST_SHIP_1F
	warp_def 3, 35, 3, 9, MAP_FAST_SHIP_1F

FastShip_Cabins_SE_SSE_Captains_MapBGEvents:
	bg_event 4, 27, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

FastShip_Cabins_SE_SSE_Captains_MapEvents::
	map_events FastShip_Cabins_SE_SSE_Captains_EventObjects, FastShip_Cabins_SE_SSE_Captains_MapWarps, 0x0, FastShip_Cabins_SE_SSE_Captains_MapBGEvents

