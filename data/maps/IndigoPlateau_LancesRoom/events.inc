IndigoPlateau_LancesRoom_EventObjects::
	object_event 1, EVENT_OBJ_GFX_LANCE, 0, 5, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_TEACHER, PAL_NPC_GREEN, 4, 7, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, FALSE, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_PROF_OAK, 0, 4, 7, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, FALSE, 0, NULL, 0

IndigoPlateau_LancesRoom_MapWarps::
	warp_def 4, 23, 3, 2, MAP_INDIGO_PLATEAU_KARENS_ROOM
	warp_def 5, 23, 3, 3, MAP_INDIGO_PLATEAU_KARENS_ROOM
	warp_def 4, 1, 3, 0, MAP_INDIGO_PLATEAU_HALL_OF_FAME
	warp_def 5, 1, 3, 1, MAP_INDIGO_PLATEAU_HALL_OF_FAME

IndigoPlateau_LancesRoom_MapCoordEvents::
	coord_event 4, 5, 3, VAR_TEMP_0, 0, NULL
	coord_event 5, 5, 3, VAR_TEMP_0, 0, NULL

IndigoPlateau_LancesRoom_MapEvents::
	map_events IndigoPlateau_LancesRoom_EventObjects, IndigoPlateau_LancesRoom_MapWarps, IndigoPlateau_LancesRoom_MapCoordEvents, 0x0
