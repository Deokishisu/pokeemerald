TinTower_3F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 3, 14, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

TinTower_3F_MapWarps:
	warp_def 10, 14, 3, 0, MAP_TIN_TOWER_2F
	warp_def 16, 2, 3, 1, MAP_TIN_TOWER_4F

TinTower_3F_MapEvents::
	map_events TinTower_3F_EventObjects, TinTower_3F_MapWarps, 0x0, 0x0

