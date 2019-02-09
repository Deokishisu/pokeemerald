Lighthouse_4F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_SAILOR, 0, 7, 14, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 3, NULL, 0
	object_event 2, EVENT_OBJ_GFX_LASS, 0, 11, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 1, NULL, 0

Lighthouse_4F_MapWarps:
	warp_def 13, 3, 3, 0, MAP_LIGHTHOUSE_3F
	warp_def 3, 5, 3, 1, MAP_LIGHTHOUSE_5F
	warp_def 9, 7, 3, 2, MAP_LIGHTHOUSE_5F
	warp_def 9, 5, 3, 2, MAP_LIGHTHOUSE_3F
	warp_def 16, 9, 3, 5, MAP_LIGHTHOUSE_3F
	warp_def 17, 9, 3, 6, MAP_LIGHTHOUSE_3F
	warp_def 8, 3, 3, 7, MAP_LIGHTHOUSE_3F
	warp_def 9, 3, 3, 8, MAP_LIGHTHOUSE_3F
	warp_def 16, 7, 3, 3, MAP_LIGHTHOUSE_5F
	warp_def 17, 7, 3, 4, MAP_LIGHTHOUSE_5F

Lighthouse_4F_MapEvents::
	map_events Lighthouse_4F_EventObjects, Lighthouse_4F_MapWarps, 0x0, 0x0

