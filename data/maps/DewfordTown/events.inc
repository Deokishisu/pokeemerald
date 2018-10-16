DewfordTown_EventObjects: @ 8527964
	object_event 1, EVENT_OBJ_GFX_ZWOMAN_2, 0, 7, 12, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, DewfordTown_EventScript_1E95B1, 0
	object_event 2, EVENT_OBJ_GFX_OLD_MAN, 0, 12, 9, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 1, 0, 3, DewfordTown_EventScript_1E9511, 740
	object_event 3, EVENT_OBJ_GFX_ZFISHERMAN, 0, 12, 14, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, DewfordTown_EventScript_1E95D5, 0
	object_event 4, EVENT_OBJ_GFX_SABRINA, 0, 12, 8, 1, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, 0x0, 743
	object_event 5, EVENT_OBJ_GFX_YOUNGSTER, 0, 1, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, DewfordTown_EventScript_1E9922, 0

DewfordTown_MapWarps::
	warp_def 9, 5, 0, 0, MAP_DEWFORD_TOWN_HALL
	warp_def 15, 9, 0, 0, MAP_DEWFORD_TOWN_POKEMON_CENTER_1F
	warp_def 10, 15, 0, 0, MAP_DEWFORD_TOWN_GYM
	warp_def 21, 13, 0, 0, MAP_DEWFORD_TOWN_HOUSE1
	warp_def 21, 5, 0, 0, MAP_DEWFORD_TOWN_HOUSE2
	warp_def 31, 7, 3, 0, MAP_DEWFORD_TOWN
	warp_def 2, 10, 3, 0, MAP_ROUTE34_GATE1
	warp_def 2, 11, 3, 1, MAP_ROUTE34_GATE1

DewfordTown_MapBGEvents::
	bg_event 10, 10, 0, BG_EVENT_PLAYER_FACING_ANY, DewfordTown_EventScript_1E95BA
	bg_event 11, 16, 0, BG_EVENT_PLAYER_FACING_ANY, DewfordTown_EventScript_1E95C3
	bg_event 16, 8, 0, BG_EVENT_PLAYER_FACING_NORTH, DewfordTown_EventScript_271E73
	bg_event 16, 9, 0, BG_EVENT_PLAYER_FACING_NORTH, DewfordTown_EventScript_271E73
	bg_event 2, 4, 0, BG_EVENT_PLAYER_FACING_ANY, DewfordTown_EventScript_1E95CC

DewfordTown_MapEvents::
	map_events DewfordTown_EventObjects, DewfordTown_MapWarps, 0x0, DewfordTown_MapBGEvents
