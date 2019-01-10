MtMortar_1F_Outer_EventObjects::
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 13, 15, 4, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 31, 10, 4, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0

MtMortar_1F_Outer_MapWarps::
	warp_def 3, 33, 3, 2, MAP_ROUTE42
	warp_def 17, 33, 3, 3, MAP_ROUTE42
	warp_def 37, 33, 3, 4, MAP_ROUTE42
	warp_def 17, 5, 3, 0, MAP_MT_MORTAR_2F
	warp_def 11, 21, 3, 0, MAP_MT_MORTAR_1F_INNER
	warp_def 29, 21, 3, 1, MAP_MT_MORTAR_1F_INNER
	warp_def 17, 29, 4, 1, MAP_MT_MORTAR_B1F
	warp_def 7, 13, 4, 2, MAP_MT_MORTAR_1F_INNER
	warp_def 33, 13, 4, 3, MAP_MT_MORTAR_1F_INNER

MtMortar_1F_Outer_MapBGEvents::
	bg_hidden_item_event 25, 22, 3, ITEM_HYPER_POTION, FLAG_TEMP_1

MtMortar_1F_Outer_MapEvents::
	map_events MtMortar_1F_Outer_EventObjects, MtMortar_1F_Outer_MapWarps, 0x0, MtMortar_1F_Outer_MapBGEvents
