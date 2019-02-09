CianwoodCity_House_EventObjects:
	object_event 1, EVENT_OBJ_GFX_TEACHER, 0, 2, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FallarborTown_House1_EventScript_200F13, 0
	object_event 2, EVENT_OBJ_GFX_LASS, 0, 6, 5, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, FallarborTown_House1_EventScript_200FBC, 0
	object_event 3, EVENT_OBJ_GFX_TWIN, 0, 0, 2, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, FallarborTown_House1_EventScript_200FBC, 0

CianwoodCity_House_MapWarps:
	warp_def 2, 7, 0, 5, MAP_CIANWOOD_CITY
	warp_def 3, 7, 0, 5, MAP_CIANWOOD_CITY

CianwoodCity_House_MapEvents::
	map_events CianwoodCity_House_EventObjects, CianwoodCity_House_MapWarps, 0x0, 0x0

