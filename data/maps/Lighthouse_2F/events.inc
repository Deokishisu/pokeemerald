Lighthouse_2F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_SAILOR, 0, 9, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 3, NULL, 0
	object_event 2, EVENT_OBJ_GFX_GENTLEMAN, 0, 17, 8, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 3, NULL, 0

Lighthouse_2F_MapWarps:
	warp_def 3, 11, 3, 2, MAP_LIGHTHOUSE_1F
	warp_def 5, 3, 3, 1, MAP_LIGHTHOUSE_3F
	warp_def 16, 13, 3, 3, MAP_LIGHTHOUSE_1F
	warp_def 17, 13, 3, 4, MAP_LIGHTHOUSE_1F
	warp_def 16, 11, 3, 3, MAP_LIGHTHOUSE_3F
	warp_def 17, 11, 3, 4, MAP_LIGHTHOUSE_3F

Lighthouse_2F_MapEvents::
	map_events Lighthouse_2F_EventObjects, Lighthouse_2F_MapWarps, 0x0, 0x0

