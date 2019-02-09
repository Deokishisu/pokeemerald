BurnedTower_1F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 15, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_SUPER_NERD, 0, 12, 12, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_RIVAL, 0, 8, 9, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_MORTY, 0, 14, 14, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, NULL, 0
	object_event 5, EVENT_OBJ_GFX_ITEM_BALL, 0, 14, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

BurnedTower_1F_MapWarps:
	warp_def 9, 15, 3, 12, MAP_ECRUTEAK_CITY
	warp_def 10, 15, 3, 12, MAP_ECRUTEAK_CITY
	warp_def 10, 9, 3, 0, MAP_BURNED_TOWER_B1F
	warp_def 7, 15, 3, 1, MAP_BURNED_TOWER_B1F

BurnedTower_1F_MapCoordEvents:
	coord_event 11, 9, 3, VAR_TEMP_0, 0, NULL

BurnedTower_1F_MapBGEvents:
	bg_hidden_item_event 8, 7, 3, ITEM_ETHER, FLAG_TEMP_1
	bg_hidden_item_event 13, 11, 3, ITEM_ULTRA_BALL, FLAG_TEMP_1

BurnedTower_1F_MapEvents::
	map_events BurnedTower_1F_EventObjects, BurnedTower_1F_MapWarps, BurnedTower_1F_MapCoordEvents, BurnedTower_1F_MapBGEvents

