Lighthouse_1F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_SAILOR, 0, 8, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_POKEFAN_F, 0, 16, 9, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 2, 0, 0, NULL, 0

Lighthouse_1F_MapWarps:
	warp_def 10, 17, 3, 8, MAP_OLIVINE_CITY
	warp_def 11, 17, 3, 8, MAP_OLIVINE_CITY
	warp_def 3, 11, 3, 0, MAP_LIGHTHOUSE_2F
	warp_def 16, 13, 3, 2, MAP_LIGHTHOUSE_2F
	warp_def 17, 13, 3, 3, MAP_LIGHTHOUSE_2F

Lighthouse_1F_MapEvents::
	map_events Lighthouse_1F_EventObjects, Lighthouse_1F_MapWarps, 0x0, 0x0

