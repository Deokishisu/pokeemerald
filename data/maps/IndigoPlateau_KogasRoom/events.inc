IndigoPlateau_KogasRoom_EventObjects::
	object_event 1, EVENT_OBJ_GFX_KOGA, PAL_NPC_BLUE, 5, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0

IndigoPlateau_KogasRoom_MapWarps::
	warp_def 4, 17, 3, 1, MAP_INDIGO_PLATEAU_WILLS_ROOM
	warp_def 5, 17, 3, 2, MAP_INDIGO_PLATEAU_WILLS_ROOM
	warp_def 4, 2, 3, 0, MAP_INDIGO_PLATEAU_BRUNOS_ROOM
	warp_def 5, 2, 3, 1, MAP_INDIGO_PLATEAU_BRUNOS_ROOM

IndigoPlateau_KogasRoom_MapEvents::
	map_events IndigoPlateau_KogasRoom_EventObjects, IndigoPlateau_KogasRoom_MapWarps, 0x0, 0x0
