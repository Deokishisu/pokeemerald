TinTower_7F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 16, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

TinTower_7F_MapWarps:
	warp_def 3, 9, 3, 0, MAP_TIN_TOWER_6F
	warp_def 10, 15, 3, 0, MAP_TIN_TOWER_8F
	warp_def 12, 7, 3, 3, MAP_TIN_TOWER_7F
	warp_def 8, 3, 3, 2, MAP_TIN_TOWER_7F
	warp_def 6, 9, 3, 4, MAP_TIN_TOWER_9F

TinTower_7F_MapEvents::
	map_events TinTower_7F_EventObjects, TinTower_7F_MapWarps, 0x0, 0x0

