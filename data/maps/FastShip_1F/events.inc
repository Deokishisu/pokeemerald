FastShip_1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_SAILOR, 0, 25, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_SAILOR, 0, 14, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_SAILOR, 0, 22, 17, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 0, FALSE, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_GENTLEMAN, 0, 19, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, NULL, 0

FastShip_1F_MapWarps::
	warp_def 25, 1, 3, 127, MAP_NONE
	warp_def 27, 8, 3, 0, MAP_FAST_SHIP_CABINS_NNW_NNE_NE
	warp_def 23, 8, 3, 1, MAP_FAST_SHIP_CABINS_NNW_NNE_NE
	warp_def 19, 8, 3, 2, MAP_FAST_SHIP_CABINS_NNW_NNE_NE
	warp_def 15, 8, 3, 0, MAP_FAST_SHIP_CABINS_SW_SSW_NW
	warp_def 15, 15, 3, 1, MAP_FAST_SHIP_CABINS_SW_SSW_NW
	warp_def 19, 15, 3, 3, MAP_FAST_SHIP_CABINS_SW_SSW_NW
	warp_def 23, 15, 3, 0, MAP_FAST_SHIP_CABINS_SE_SSE_CAPTAINS
	warp_def 27, 15, 3, 3, MAP_FAST_SHIP_CABINS_SE_SSE_CAPTAINS
	warp_def 3, 13, 3, 4, MAP_FAST_SHIP_CABINS_SE_SSE_CAPTAINS
	warp_def 6, 12, 3, 0, MAP_FAST_SHIP_B1F
	warp_def 30, 14, 3, 1, MAP_FAST_SHIP_B1F

FastShip_1F_MapCoordEvents::
	coord_event 24, 6, 3, VAR_TEMP_0, 0, NULL
	coord_event 25, 6, 3, VAR_TEMP_0, 0, NULL

FastShip_1F_MapEvents::
	map_events FastShip_1F_EventObjects, FastShip_1F_MapWarps, FastShip_1F_MapCoordEvents, 0x0
