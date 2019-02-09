SlowpokeWell_B1F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 15, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 3, NULL, 0
	object_event 2, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 5, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 1, NULL, 0
	object_event 3, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 5, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 2, NULL, 0
	object_event 4, EVENT_OBJ_GFX_ROCKET_GRUNT_F, 0, 10, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 4, NULL, 0
	object_event 5, EVENT_OBJ_GFX_SLOWPOKE, 0, 7, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 6, EVENT_OBJ_GFX_SLOWPOKE, 0, 6, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 7, EVENT_OBJ_GFX_KURT, 0, 16, 14, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, NULL, 0
	object_event 8, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 3, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 9, EVENT_OBJ_GFX_ITEM_BALL, 0, 10, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

SlowpokeWell_B1F_MapWarps:
	warp_def 17, 15, 3, 5, MAP_AZALEA_TOWN
	warp_def 7, 11, 3, 0, MAP_SLOWPOKE_WELL_B2F

SlowpokeWell_B1F_MapEvents::
	map_events SlowpokeWell_B1F_EventObjects, SlowpokeWell_B1F_MapWarps, 0x0, 0x0

