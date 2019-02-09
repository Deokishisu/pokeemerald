VictoryRoad_EventObjects:
	object_event 1, EVENT_OBJ_GFX_RIVAL, 0, 18, 13, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 3, 28, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_ITEM_BALL, 0, 12, 48, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_ITEM_BALL, 0, 18, 29, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 5, EVENT_OBJ_GFX_ITEM_BALL, 0, 15, 48, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 6, EVENT_OBJ_GFX_ITEM_BALL, 0, 7, 38, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

VictoryRoad_MapWarps:
	warp_def 9, 67, 3, 4, MAP_VICTORY_ROAD_GATE
	warp_def 1, 49, 3, 2, MAP_VICTORY_ROAD
	warp_def 1, 35, 3, 1, MAP_VICTORY_ROAD
	warp_def 13, 31, 3, 4, MAP_VICTORY_ROAD
	warp_def 13, 17, 3, 3, MAP_VICTORY_ROAD
	warp_def 17, 33, 3, 6, MAP_VICTORY_ROAD
	warp_def 17, 19, 3, 5, MAP_VICTORY_ROAD
	warp_def 0, 11, 3, 8, MAP_VICTORY_ROAD
	warp_def 0, 27, 3, 7, MAP_VICTORY_ROAD
	warp_def 13, 5, 3, 2, MAP_ROUTE23

VictoryRoad_MapEvents::
	map_events VictoryRoad_EventObjects, VictoryRoad_MapWarps, 0x0, 0x0

