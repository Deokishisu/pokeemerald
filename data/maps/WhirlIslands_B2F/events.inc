WhirlIslands_B2F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 10, 11, 4, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 6, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_ITEM_BALL, 0, 5, 12, 4, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0

WhirlIslands_B2F_MapWarps::
	warp_def 11, 5, 3, 6, MAP_WHIRL_ISLANDS_B1F
	warp_def 7, 11, 4, 7, MAP_WHIRL_ISLANDS_B1F
	warp_def 7, 25, 3, 0, MAP_WHIRL_ISLANDS_LUGIAS_CHAMBER
	warp_def 13, 31, 3, 4, MAP_WHIRL_ISLANDS_1F_SW

WhirlIslands_B2F_MapEvents::
	map_events WhirlIslands_B2F_EventObjects, WhirlIslands_B2F_MapWarps, 0x0, 0x0
