RadioTower_3F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_SUPER_NERD, 0, 7, 4, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_GYM_GUIDE, 0, 3, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_COOLTRAINER_F, 0, 11, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 5, 1, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 2, NULL, 0
	object_event 5, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 6, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 3, NULL, 0
	object_event 6, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 16, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 3, NULL, 0
	object_event 7, EVENT_OBJ_GFX_SCIENTIST, 0, 9, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 5, NULL, 0

RadioTower_3F_MapWarps:
	warp_def 0, 0, 3, 0, MAP_RADIO_TOWER_2F
	warp_def 7, 0, 3, 1, MAP_RADIO_TOWER_4F
	warp_def 17, 0, 3, 3, MAP_RADIO_TOWER_4F

RadioTower_3F_MapBGEvents:
	bg_event 3, 0, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 9, 0, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 14, 2, 3, BG_EVENT_PLAYER_FACING_NORTH, NULL

RadioTower_3F_MapEvents::
	map_events RadioTower_3F_EventObjects, RadioTower_3F_MapWarps, 0x0, RadioTower_3F_MapBGEvents

