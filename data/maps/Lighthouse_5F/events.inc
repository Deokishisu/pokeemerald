Lighthouse_5F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_SAILOR, PAL_NPC_BLUE, 8, 11, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRUE, 3, NULL, 0
	object_event 2, EVENT_OBJ_GFX_YOUNGSTER, PAL_NPC_BLUE, 8, 3, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRUE, 4, NULL, 0
	object_event 3, EVENT_OBJ_GFX_ITEM_BALL, 0, 15, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_ITEM_BALL, 0, 6, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 5, EVENT_OBJ_GFX_ITEM_BALL, 0, 2, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0

Lighthouse_5F_MapWarps::
	warp_def 9, 15, 3, 0, MAP_LIGHTHOUSE_6F
	warp_def 3, 5, 3, 1, MAP_LIGHTHOUSE_4F
	warp_def 9, 7, 3, 1, MAP_LIGHTHOUSE_4F
	warp_def 16, 7, 3, 8, MAP_LIGHTHOUSE_4F
	warp_def 17, 7, 3, 9, MAP_LIGHTHOUSE_4F
	warp_def 16, 5, 3, 1, MAP_LIGHTHOUSE_6F
	warp_def 17, 5, 3, 2, MAP_LIGHTHOUSE_6F

Lighthouse_5F_MapBGEvents::
	bg_hidden_item_event 3, 13, 3, ITEM_HYPER_POTION, FLAG_TEMP_1

Lighthouse_5F_MapEvents::
	map_events Lighthouse_5F_EventObjects, Lighthouse_5F_MapWarps, 0x0, Lighthouse_5F_MapBGEvents
