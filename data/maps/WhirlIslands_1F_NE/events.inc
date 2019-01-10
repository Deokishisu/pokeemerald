WhirlIslands_1F_NE_EventObjects::
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 11, 11, 4, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0

WhirlIslands_1F_NE_MapWarps::
	warp_def 3, 13, 3, 1, MAP_ROUTE41
	warp_def 17, 3, 3, 1, MAP_WHIRL_ISLANDS_B1F
	warp_def 13, 11, 4, 2, MAP_WHIRL_ISLANDS_B1F

WhirlIslands_1F_NE_MapEvents::
	map_events WhirlIslands_1F_NE_EventObjects, WhirlIslands_1F_NE_MapWarps, 0x0, 0x0
