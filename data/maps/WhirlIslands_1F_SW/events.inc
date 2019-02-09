WhirlIslands_1F_SW_EventObjects:
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 14, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

WhirlIslands_1F_SW_MapWarps:
	warp_def 4, 6, 3, 2, MAP_ROUTE41
	warp_def 16, 2, 3, 4, MAP_WHIRL_ISLANDS_B1F
	warp_def 2, 2, 3, 3, MAP_WHIRL_ISLANDS_B1F
	warp_def 4, 16, 3, 2, MAP_WHIRL_ISLANDS_1F_NW
	warp_def 18, 16, 3, 3, MAP_WHIRL_ISLANDS_B2F

WhirlIslands_1F_SW_MapEvents::
	map_events WhirlIslands_1F_SW_EventObjects, WhirlIslands_1F_SW_MapWarps, 0x0, 0x0

