TinTower_5F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 9, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

TinTower_5F_MapWarps:
	warp_def 11, 15, 3, 1, MAP_TIN_TOWER_6F
	warp_def 2, 4, 3, 0, MAP_TIN_TOWER_4F
	warp_def 2, 14, 3, 2, MAP_TIN_TOWER_4F
	warp_def 17, 15, 3, 3, MAP_TIN_TOWER_4F

TinTower_5F_MapBGEvents:
	bg_hidden_item_event 16, 14, 3, ITEM_FULL_RESTORE, FLAG_TEMP_1
	bg_hidden_item_event 3, 15, 3, ITEM_CARBOS, FLAG_TEMP_1

TinTower_5F_MapEvents::
	map_events TinTower_5F_EventObjects, TinTower_5F_MapWarps, 0x0, TinTower_5F_MapBGEvents

