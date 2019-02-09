IndigoPlateau_KarensRoom_EventObjects:
	object_event 1, EVENT_OBJ_GFX_KAREN, 0, 5, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

IndigoPlateau_KarensRoom_MapWarps:
	warp_def 4, 17, 3, 2, MAP_INDIGO_PLATEAU_BRUNOS_ROOM
	warp_def 5, 17, 3, 3, MAP_INDIGO_PLATEAU_BRUNOS_ROOM
	warp_def 4, 2, 3, 0, MAP_INDIGO_PLATEAU_LANCES_ROOM
	warp_def 5, 2, 3, 1, MAP_INDIGO_PLATEAU_LANCES_ROOM

IndigoPlateau_KarensRoom_MapEvents::
	map_events IndigoPlateau_KarensRoom_EventObjects, IndigoPlateau_KarensRoom_MapWarps, 0x0, 0x0

