MtMortar_1F_Inner_EventObjects:
	object_event 1, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 21, 43, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 35, 38, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_ITEM_BALL, 0, 16, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_ITEM_BALL, 0, 10, 27, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 5, EVENT_OBJ_GFX_ITEM_BALL, 0, 22, 20, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 6, EVENT_OBJ_GFX_ITEM_BALL, 0, 35, 19, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 7, EVENT_OBJ_GFX_SUPER_NERD, 0, 33, 43, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 3, NULL, 0
	object_event 8, EVENT_OBJ_GFX_SUPER_NERD, 0, 24, 28, 4, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 3, NULL, 0
	object_event 9, EVENT_OBJ_GFX_ITEM_BALL, 0, 8, 16, 4, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 10, EVENT_OBJ_GFX_ITEM_BALL, 0, 17, 17, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

MtMortar_1F_Inner_MapWarps:
	warp_def 11, 47, 3, 4, MAP_MT_MORTAR_1F_OUTER
	warp_def 29, 47, 3, 5, MAP_MT_MORTAR_1F_OUTER
	warp_def 5, 39, 3, 7, MAP_MT_MORTAR_1F_OUTER
	warp_def 33, 41, 3, 8, MAP_MT_MORTAR_1F_OUTER
	warp_def 3, 19, 3, 0, MAP_MT_MORTAR_B1F
	warp_def 9, 9, 4, 0, MAP_MT_MORTAR_2F

MtMortar_1F_Inner_MapBGEvents:
	bg_hidden_item_event 30, 11, 3, ITEM_MAX_REPEL, FLAG_TEMP_1

MtMortar_1F_Inner_MapEvents::
	map_events MtMortar_1F_Inner_EventObjects, MtMortar_1F_Inner_MapWarps, 0x0, MtMortar_1F_Inner_MapBGEvents

