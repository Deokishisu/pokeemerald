IcePath_B2F_Mahogany_EventObjects::
	object_event 1, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 11, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 4, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 3, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 12, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 5, EVENT_OBJ_GFX_ITEM_BALL, 0, 8, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 6, EVENT_OBJ_GFX_ITEM_BALL, 0, 0, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0

IcePath_B2F_Mahogany_MapWarps::
	warp_def 17, 1, 3, 1, MAP_ICE_PATH_B1F
	warp_def 9, 11, 3, 0, MAP_ICE_PATH_B3F
	warp_def 11, 4, 3, 0, MAP_ICE_PATH_B2F_MAHOGANY
	warp_def 4, 6, 3, 0, MAP_ICE_PATH_B2F_MAHOGANY
	warp_def 4, 12, 3, 0, MAP_ICE_PATH_B2F_MAHOGANY
	warp_def 12, 12, 3, 0, MAP_ICE_PATH_B2F_MAHOGANY

IcePath_B2F_Mahogany_MapBGEvents::
	bg_hidden_item_event 0, 17, 3, ITEM_CARBOS, FLAG_TEMP_1

IcePath_B2F_Mahogany_MapEvents::
	map_events IcePath_B2F_Mahogany_EventObjects, IcePath_B2F_Mahogany_MapWarps, 0x0, IcePath_B2F_Mahogany_MapBGEvents
