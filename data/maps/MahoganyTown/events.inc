MahoganyTown_EventObjects::
	object_event 1, EVENT_OBJ_GFX_GYM_GUIDE, 0, 4, 17, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, VerdanturfTown_EventScript_1EB5A8, 0
	object_event 2, EVENT_OBJ_GFX_TWIN, 0, 10, 2, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 0, 0, 0, VerdanturfTown_EventScript_1EB575, 0
	object_event 3, EVENT_OBJ_GFX_YOUNGSTER, 0, 7, 11, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 1, 0, 0, VerdanturfTown_EventScript_1EB5BA, 0
	object_event 4, EVENT_OBJ_GFX_ZCAMPER, 0, 7, 6, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, VerdanturfTown_EventScript_1EB5B1, 0

MahoganyTown_MapWarps::
	warp_def 9, 1, 0, 0, MAP_ROUTE43_GATE1
	warp_def 11, 7, 0, 0, MAP_MAHOGANY_TOWN
	warp_def 15, 13, 0, 0, MAP_MAHOGANY_TOWN_POKEMON_CENTER_1F
	warp_def 6, 13, 0, 0, MAP_MAHOGANY_TOWN
	warp_def 17, 7, 0, 1, MAP_MAHOGANY_TOWN

MahoganyTown_MapBGEvents::
	bg_event 12, 5, 0, BG_EVENT_PLAYER_FACING_NORTH, VerdanturfTown_EventScript_271E6A
	bg_event 14, 6, 0, BG_EVENT_PLAYER_FACING_ANY, VerdanturfTown_EventScript_1EB5D9
	bg_event 16, 13, 0, BG_EVENT_PLAYER_FACING_NORTH, VerdanturfTown_EventScript_271E73
	bg_event 7, 14, 0, BG_EVENT_PLAYER_FACING_ANY, VerdanturfTown_EventScript_1EB5E2
	bg_event 9, 7, 0, BG_EVENT_PLAYER_FACING_NORTH, VerdanturfTown_EventScript_271E6A
	bg_event 15, 11, 0, BG_EVENT_PLAYER_FACING_NORTH, VerdanturfTown_EventScript_271E73
	bg_event 1, 8, 0, BG_EVENT_PLAYER_FACING_ANY, VerdanturfTown_EventScript_1EB5EB
	bg_event 7, 3, 0, BG_EVENT_PLAYER_FACING_ANY, VerdanturfTown_EventScript_1EB5F4

MahoganyTown_MapEvents::
	map_events MahoganyTown_EventObjects, MahoganyTown_MapWarps, 0x0, MahoganyTown_MapBGEvents
