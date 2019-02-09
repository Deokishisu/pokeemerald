RadioTower_4F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_FAT_MAN, 0, 6, 4, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_TEACHER, 0, 14, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_CAL, 0, 12, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 5, 6, 3, MOVEMENT_TYPE_ROTATE_CLOCKWISE, 0, 0, 1, 3, NULL, 0
	object_event 5, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 14, 1, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 2, NULL, 0
	object_event 6, EVENT_OBJ_GFX_ROCKET_GRUNT_F, 0, 12, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 1, NULL, 0
	object_event 7, EVENT_OBJ_GFX_SCIENTIST, 0, 4, 2, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 4, NULL, 0

RadioTower_4F_MapWarps:
	warp_def 0, 0, 3, 0, MAP_RADIO_TOWER_5F
	warp_def 9, 0, 3, 1, MAP_RADIO_TOWER_3F
	warp_def 12, 0, 3, 1, MAP_RADIO_TOWER_5F
	warp_def 17, 0, 3, 2, MAP_RADIO_TOWER_3F

RadioTower_4F_MapBGEvents:
	bg_event 7, 0, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 15, 0, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

RadioTower_4F_MapEvents::
	map_events RadioTower_4F_EventObjects, RadioTower_4F_MapWarps, 0x0, RadioTower_4F_MapBGEvents

