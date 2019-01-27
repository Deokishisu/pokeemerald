VictoryRoad_Gate_EventObjects::
	object_event 1, EVENT_OBJ_GFX_OFFICER, 0, 8, 11, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_BLACK_BELT, 0, 7, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_BLACK_BELT, 0, 12, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, NULL, 0

VictoryRoad_Gate_MapWarps::
	warp_def 17, 7, 3, 0, MAP_VICTORY_ROAD_GATE
	warp_def 18, 7, 3, 0, MAP_VICTORY_ROAD_GATE
	warp_def 9, 17, 3, 0, MAP_ROUTE26
	warp_def 10, 17, 3, 0, MAP_ROUTE26
	warp_def 9, 0, 3, 0, MAP_VICTORY_ROAD
	warp_def 10, 0, 3, 0, MAP_VICTORY_ROAD
	warp_def 1, 7, 3, 1, MAP_ROUTE28
	warp_def 2, 7, 3, 1, MAP_ROUTE28

VictoryRoad_Gate_MapCoordEvents::
	coord_event 10, 11, 3, VAR_TEMP_0, 0, NULL

VictoryRoad_Gate_MapEvents::
	map_events VictoryRoad_Gate_EventObjects, VictoryRoad_Gate_MapWarps, VictoryRoad_Gate_MapCoordEvents, 0x0
