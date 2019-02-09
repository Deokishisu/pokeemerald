IndigoPlateau_BrunosRoom_EventObjects:
	object_event 1, EVENT_OBJ_GFX_BRUNO, 0, 5, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

IndigoPlateau_BrunosRoom_MapWarps:
	warp_def 4, 17, 3, 2, MAP_INDIGO_PLATEAU_KOGAS_ROOM
	warp_def 5, 17, 3, 3, MAP_INDIGO_PLATEAU_KOGAS_ROOM
	warp_def 4, 2, 3, 0, MAP_INDIGO_PLATEAU_KARENS_ROOM
	warp_def 5, 2, 3, 1, MAP_INDIGO_PLATEAU_KARENS_ROOM

IndigoPlateau_BrunosRoom_MapEvents::
	map_events IndigoPlateau_BrunosRoom_EventObjects, IndigoPlateau_BrunosRoom_MapWarps, 0x0, 0x0

