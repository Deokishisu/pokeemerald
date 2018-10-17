DewfordTown_Hall_EventObjects::
	object_event 1, EVENT_OBJ_GFX_KURT, 4, 4, 2, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, DewfordTown_Hall_EventScript_1FD4D0, 0
	object_event 2, EVENT_OBJ_GFX_TWIN, 1, 5, 3, 0, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, DewfordTown_Hall_EventScript_1FD4F9, 0
	object_event 3, EVENT_OBJ_GFX_SLOWPOKE, 1, 6, 3, 0, MOVEMENT_TYPE_NONE, 0, 0, 0, 0, DewfordTown_Hall_EventScript_1FD50A, 0
	object_event 4, EVENT_OBJ_GFX_KURT, 4, 14, 3, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, DewfordTown_Hall_EventScript_1FD547, 0
	object_event 5, EVENT_OBJ_GFX_TWIN, 1, 11, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, DewfordTown_Hall_EventScript_1FD563, 0

DewfordTown_Hall_MapWarps::
	warp_def 3, 7, 0, 0, MAP_DEWFORD_TOWN
	warp_def 4, 7, 0, 0, MAP_DEWFORD_TOWN

DewfordTown_Hall_MapBGEvents::
	bg_event 0, 0, 3, BG_EVENT_PLAYER_FACING_ANY, DewfordTown_Hall_EventScript_1FD590
	bg_event 1, 0, 3, BG_EVENT_PLAYER_FACING_ANY, DewfordTown_Hall_EventScript_1FD5A0

DewfordTown_Hall_MapEvents::
	map_events DewfordTown_Hall_EventObjects, DewfordTown_Hall_MapWarps, 0x0, DewfordTown_Hall_MapBGEvents
