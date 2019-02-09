GoldenrodCity_House2_EventObjects:
	object_event 1, EVENT_OBJ_GFX_TEACHER, 0, 2, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_POKEFAN_M, 0, 5, 3, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_TWIN, 0, 5, 6, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, NULL, 0

GoldenrodCity_House2_MapWarps:
	warp_def 2, 7, 0, 2, MAP_GOLDENROD_CITY
	warp_def 3, 7, 0, 2, MAP_GOLDENROD_CITY

GoldenrodCity_House2_MapEvents::
	map_events GoldenrodCity_House2_EventObjects, GoldenrodCity_House2_MapWarps, 0x0, 0x0

