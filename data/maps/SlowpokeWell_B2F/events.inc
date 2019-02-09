SlowpokeWell_B2F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_GYM_GUIDE, 0, 5, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 2, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 15, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

SlowpokeWell_B2F_MapWarps:
	warp_def 9, 11, 3, 1, MAP_SLOWPOKE_WELL_B1F

SlowpokeWell_B2F_MapEvents::
	map_events SlowpokeWell_B2F_EventObjects, SlowpokeWell_B2F_MapWarps, 0x0, 0x0

