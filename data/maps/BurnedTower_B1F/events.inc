BurnedTower_B1F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 17, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_RAIKOU, 0, 7, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_ENTEI, 0, 12, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_SUICUNE, 0, 10, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 5, EVENT_OBJ_GFX_RAIKOU, 0, 7, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 6, EVENT_OBJ_GFX_ENTEI, 0, 12, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 7, EVENT_OBJ_GFX_SUICUNE, 0, 10, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 8, EVENT_OBJ_GFX_ITEM_BALL, 0, 16, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 9, EVENT_OBJ_GFX_SUPER_NERD, 0, 10, 12, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, NULL, 0

BurnedTower_B1F_MapWarps:
	warp_def 10, 9, 3, 2, MAP_BURNED_TOWER_1F
	warp_def 7, 15, 3, 3, MAP_BURNED_TOWER_1F

BurnedTower_B1F_MapCoordEvents:
	coord_event 10, 6, 3, VAR_TEMP_0, 0, NULL

BurnedTower_B1F_MapEvents::
	map_events BurnedTower_B1F_EventObjects, BurnedTower_B1F_MapWarps, BurnedTower_B1F_MapCoordEvents, 0x0

