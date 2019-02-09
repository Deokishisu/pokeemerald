MtMortar_B1F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 29, 12, 4, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 4, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 9, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_BLACK_BELT, 0, 16, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 5, EVENT_OBJ_GFX_ITEM_BALL, 0, 34, 24, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 6, EVENT_OBJ_GFX_ITEM_BALL, 0, 32, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 7, EVENT_OBJ_GFX_ITEM_BALL, 0, 21, 26, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

MtMortar_B1F_MapWarps:
	warp_def 3, 3, 3, 4, MAP_MT_MORTAR_1F_INNER
	warp_def 19, 29, 4, 6, MAP_MT_MORTAR_1F_OUTER

MtMortar_B1F_MapBGEvents:
	bg_hidden_item_event 4, 6, 3, ITEM_MAX_REVIVE, FLAG_TEMP_1

MtMortar_B1F_MapEvents::
	map_events MtMortar_B1F_EventObjects, MtMortar_B1F_MapWarps, 0x0, MtMortar_B1F_MapBGEvents

