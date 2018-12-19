EcruteakCity_WiseTriosRoom_EventObjects::
	object_event 1, EVENT_OBJ_GFX_SAGE, 0, 6, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, LilycoveCity_CoveLilyMotel_1F_EventScript_218189, 0
	object_event 2, EVENT_OBJ_GFX_SAGE, 0, 6, 7, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, LilycoveCity_CoveLilyMotel_1F_EventScript_218189, 0
	object_event 3, EVENT_OBJ_GFX_SAGE, 0, 7, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, LilycoveCity_CoveLilyMotel_1F_EventScript_218189, 0
	object_event 4, EVENT_OBJ_GFX_SAGE, 0, 4, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRUE, 2, LilycoveCity_CoveLilyMotel_1F_EventScript_218189, 0
	object_event 5, EVENT_OBJ_GFX_SAGE, 0, 4, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRUE, 2, LilycoveCity_CoveLilyMotel_1F_EventScript_218189, 0
	object_event 6, EVENT_OBJ_GFX_SAGE, 0, 6, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRUE, 2, LilycoveCity_CoveLilyMotel_1F_EventScript_218189, 0

EcruteakCity_WiseTriosRoom_MapWarps::
	warp_def 7, 4, 0, 3, MAP_ECRUTEAK_CITY
	warp_def 7, 5, 0, 4, MAP_ECRUTEAK_CITY
	warp_def 1, 4, 0, 4, MAP_ECRUTEAK_CITY_TIN_TOWER_GATE

EcruteakCity_WiseTriosRoom_MapCoordEvents::
	coord_event 7, 4, 3, VAR_TEMP_1, 0, LilycoveCity_CoveLilyMotel_1F_EventScript_218211

EcruteakCity_WiseTriosRoom_MapEvents::
	map_events EcruteakCity_WiseTriosRoom_EventObjects, EcruteakCity_WiseTriosRoom_MapWarps, EcruteakCity_WiseTriosRoom_MapCoordEvents, 0x0
