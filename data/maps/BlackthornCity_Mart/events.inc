BlackthornCity_Mart_EventObjects:
	object_event 1, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 1, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, FortreeCity_Mart_EventScript_217666, 0
	object_event 2, EVENT_OBJ_GFX_COOLTRAINER_M, 0, 7, 6, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 0, 0, 0, FortreeCity_Mart_EventScript_217698, 0
	object_event 3, EVENT_OBJ_GFX_BLACK_BELT, 0, 5, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FortreeCity_Mart_EventScript_2176A1, 0

BlackthornCity_Mart_MapWarps:
	warp_def 2, 7, 0, 3, MAP_BLACKTHORN_CITY
	warp_def 3, 7, 0, 3, MAP_BLACKTHORN_CITY

BlackthornCity_Mart_MapEvents::
	map_events BlackthornCity_Mart_EventObjects, BlackthornCity_Mart_MapWarps, 0x0, 0x0

