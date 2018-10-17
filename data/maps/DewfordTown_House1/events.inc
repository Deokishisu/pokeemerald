DewfordTown_House1_EventObjects::
	object_event 1, EVENT_OBJ_GFX_YOUNGSTER, 2, 5, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, DewfordTown_House1_EventScript_1FC3D7, 0
	object_event 2, EVENT_OBJ_GFX_BLACK_BELT, 4, 2, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, DewfordTown_House1_EventScript_1FC3CE, 0
	object_event 3, EVENT_OBJ_GFX_LASS, 4, 5, 6, 3, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN, 3, 1, 0, 0, DewfordTown_House1_EventScript_1FC3E0, 0

DewfordTown_House1_MapWarps::
	warp_def 2, 7, 0, 3, MAP_DEWFORD_TOWN
	warp_def 3, 7, 0, 3, MAP_DEWFORD_TOWN

DewfordTown_House1_MapEvents::
	map_events DewfordTown_House1_EventObjects, DewfordTown_House1_MapWarps, 0x0, 0x0
