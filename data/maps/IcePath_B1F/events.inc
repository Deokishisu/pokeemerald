IcePath_B1F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 11, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 7, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 8, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 17, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 5, EVENT_OBJ_GFX_ITEM_BALL, 0, 5, 35, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

IcePath_B1F_MapWarps:
	warp_def 3, 15, 3, 2, MAP_ICE_PATH_1F
	warp_def 17, 3, 3, 0, MAP_ICE_PATH_B2F_MAHOGANY
	warp_def 11, 2, 3, 2, MAP_ICE_PATH_B2F_MAHOGANY
	warp_def 4, 7, 3, 3, MAP_ICE_PATH_B2F_MAHOGANY
	warp_def 5, 12, 3, 4, MAP_ICE_PATH_B2F_MAHOGANY
	warp_def 12, 13, 3, 5, MAP_ICE_PATH_B2F_MAHOGANY
	warp_def 5, 25, 3, 3, MAP_ICE_PATH_1F
	warp_def 11, 27, 3, 0, MAP_ICE_PATH_B2F_BLACKTHORN

IcePath_B1F_MapBGEvents:
	bg_hidden_item_event 17, 30, 3, ITEM_MAX_POTION, FLAG_TEMP_1

IcePath_B1F_MapEvents::
	map_events IcePath_B1F_EventObjects, IcePath_B1F_MapWarps, 0x0, IcePath_B1F_MapBGEvents

