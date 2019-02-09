CherrygroveCity_House2_EventObjects:
	object_event 1, EVENT_OBJ_GFX_YOUNGSTER, 0, 2, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_LASS, 0, 3, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, NULL, 0

CherrygroveCity_House2_MapWarps:
	warp_def 2, 7, 3, 4, MAP_CHERRYGROVE_CITY
	warp_def 3, 7, 3, 4, MAP_CHERRYGROVE_CITY

CherrygroveCity_House2_MapEvents::
	map_events CherrygroveCity_House2_EventObjects, CherrygroveCity_House2_MapWarps, 0x0, 0x0

