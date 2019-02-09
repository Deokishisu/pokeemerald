TinTower_4F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 14, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 17, 14, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_ITEM_BALL, 0, 2, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

TinTower_4F_MapWarps:
	warp_def 2, 4, 3, 1, MAP_TIN_TOWER_5F
	warp_def 16, 2, 3, 1, MAP_TIN_TOWER_3F
	warp_def 2, 14, 3, 2, MAP_TIN_TOWER_5F
	warp_def 17, 15, 3, 3, MAP_TIN_TOWER_5F

TinTower_4F_MapBGEvents:
	bg_hidden_item_event 11, 6, 3, ITEM_MAX_POTION, FLAG_TEMP_1

TinTower_4F_MapEvents::
	map_events TinTower_4F_EventObjects, TinTower_4F_MapWarps, 0x0, TinTower_4F_MapBGEvents

