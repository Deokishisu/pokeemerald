WhirlIslands_B1F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 7, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 2, 18, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_ITEM_BALL, 0, 33, 23, 4, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_ITEM_BALL, 0, 17, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 5, EVENT_OBJ_GFX_ITEM_BALL, 0, 19, 26, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 6, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 23, 26, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

WhirlIslands_B1F_MapWarps:
	warp_def 5, 5, 3, 1, MAP_WHIRL_ISLANDS_1F_NW
	warp_def 35, 3, 3, 1, MAP_WHIRL_ISLANDS_1F_NE
	warp_def 29, 9, 3, 2, MAP_WHIRL_ISLANDS_1F_NE
	warp_def 9, 31, 3, 2, MAP_WHIRL_ISLANDS_1F_SW
	warp_def 23, 31, 3, 1, MAP_WHIRL_ISLANDS_1F_SW
	warp_def 31, 29, 4, 1, MAP_WHIRL_ISLANDS_1F_SE
	warp_def 25, 21, 3, 0, MAP_WHIRL_ISLANDS_B2F
	warp_def 13, 27, 3, 1, MAP_WHIRL_ISLANDS_B2F
	warp_def 17, 21, 3, 0, MAP_WHIRL_ISLANDS_CAVE

WhirlIslands_B1F_MapBGEvents:
	bg_hidden_item_event 30, 4, 3, ITEM_RARE_CANDY, FLAG_TEMP_1
	bg_hidden_item_event 36, 18, 3, ITEM_ULTRA_BALL, FLAG_TEMP_1
	bg_hidden_item_event 2, 23, 3, ITEM_FULL_RESTORE, FLAG_TEMP_1

WhirlIslands_B1F_MapEvents::
	map_events WhirlIslands_B1F_EventObjects, WhirlIslands_B1F_MapWarps, 0x0, WhirlIslands_B1F_MapBGEvents

