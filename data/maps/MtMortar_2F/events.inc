MtMortar_2F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 28, 22, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 2, 33, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_ITEM_BALL, 0, 19, 17, 4, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_ITEM_BALL, 0, 16, 5, 4, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 5, EVENT_OBJ_GFX_ITEM_BALL, 0, 9, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 6, EVENT_OBJ_GFX_ITEM_BALL, 0, 28, 5, 4, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 7, EVENT_OBJ_GFX_SUPER_NERD, 0, 13, 26, 4, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 2, NULL, 0

MtMortar_2F_MapWarps:
	warp_def 17, 33, 3, 3, MAP_MT_MORTAR_1F_OUTER
	warp_def 3, 5, 3, 5, MAP_MT_MORTAR_1F_INNER

MtMortar_2F_MapBGEvents:
	bg_hidden_item_event 24, 8, 3, ITEM_FULL_RESTORE, FLAG_TEMP_1

MtMortar_2F_MapEvents::
	map_events MtMortar_2F_EventObjects, MtMortar_2F_MapWarps, 0x0, MtMortar_2F_MapBGEvents

