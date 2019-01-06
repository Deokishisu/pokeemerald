Lighthouse_3F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_SAILOR, PAL_NPC_BLUE, 9, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRUE, 1, NULL, 0
	object_event 2, EVENT_OBJ_GFX_GENTLEMAN, PAL_NPC_BLUE, 13, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRUE, 4, NULL, 0
	object_event 3, EVENT_OBJ_GFX_YOUNGSTER, PAL_NPC_BLUE, 3, 9, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRUE, 3, NULL, 0
	object_event 4, EVENT_OBJ_GFX_ITEM_BALL, 0, 8, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0

Lighthouse_3F_MapWarps::
	warp_def 13, 3, 3, 0, MAP_LIGHTHOUSE_4F
	warp_def 5, 3, 3, 1, MAP_LIGHTHOUSE_2F
	warp_def 9, 5, 3, 3, MAP_LIGHTHOUSE_4F
	warp_def 16, 11, 3, 4, MAP_LIGHTHOUSE_2F
	warp_def 17, 11, 3, 5, MAP_LIGHTHOUSE_2F
	warp_def 16, 9, 3, 4, MAP_LIGHTHOUSE_4F
	warp_def 17, 9, 3, 5, MAP_LIGHTHOUSE_4F
	warp_def 8, 3, 3, 6, MAP_LIGHTHOUSE_4F
	warp_def 9, 3, 3, 7, MAP_LIGHTHOUSE_4F

Lighthouse_3F_MapEvents::
	map_events Lighthouse_3F_EventObjects, Lighthouse_3F_MapWarps, 0x0, 0x0
