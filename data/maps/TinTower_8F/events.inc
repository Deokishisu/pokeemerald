TinTower_8F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 7, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 11, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_ITEM_BALL, 0, 3, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	
TinTower_8F_MapWarps::
	warp_def 2, 5, 3, 1, MAP_TIN_TOWER_7F
	warp_def 2, 11, 3, 0, MAP_TIN_TOWER_9F
	warp_def 16, 7, 3, 1, MAP_TIN_TOWER_9F
	warp_def 10, 3, 3, 2, MAP_TIN_TOWER_9F
	warp_def 14, 15, 3, 5, MAP_TIN_TOWER_9F
	warp_def 6, 9, 3, 6, MAP_TIN_TOWER_9F

TinTower_8F_MapEvents::
	map_events TinTower_8F_EventObjects, TinTower_8F_MapWarps, 0x0, 0x0
