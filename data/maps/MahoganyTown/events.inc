MahoganyTown_EventObjects::
	object_event 1, EVENT_OBJ_GFX_POKEFAN_M, 0, 19, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, VerdanturfTown_EventScript_1EB5A8, 0
	object_event 2, EVENT_OBJ_GFX_OLD_MAN, 0, 6, 9, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, VerdanturfTown_EventScript_1EB575, 0
	object_event 3, EVENT_OBJ_GFX_FAT_MAN, PAL_NPC_GREEN, 6, 14, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, VerdanturfTown_EventScript_1EB5BA, 0
	object_event 4, EVENT_OBJ_GFX_LASS, 0, 12, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, VerdanturfTown_EventScript_1EB5B1, 0

MahoganyTown_MapWarps::
	warp_def 11, 7, 0, 0, MAP_MAHOGANY_TOWN_SHOP
	warp_def 17, 7, 0, 0, MAP_MAHOGANY_TOWN_HOUSE
	warp_def 6, 13, 0, 0, MAP_MAHOGANY_TOWN_GYM
	warp_def 15, 13, 0, 0, MAP_MAHOGANY_TOWN_POKEMON_CENTER_1F
	warp_def 9, 1, 0, 0, MAP_ROUTE43_GATE1

MahoganyTown_MapCoordEvents::
	coord_event 19, 8, 3, VAR_TEMP_0, 0, NULL
	coord_event 19, 9, 3, VAR_TEMP_0, 0, NULL

MahoganyTown_MapBGEvents::
	bg_event 1, 5, 0, BG_EVENT_PLAYER_FACING_ANY, VerdanturfTown_EventScript_271E6A
	bg_event 9, 7, 0, BG_EVENT_PLAYER_FACING_ANY, VerdanturfTown_EventScript_1EB5D9
	bg_event 3, 13, 0, BG_EVENT_PLAYER_FACING_ANY, VerdanturfTown_EventScript_271E73
	bg_event 16, 13, 0, BG_EVENT_PLAYER_FACING_ANY, VerdanturfTown_EventScript_1EB5E2

MahoganyTown_MapEvents::
	map_events MahoganyTown_EventObjects, MahoganyTown_MapWarps, MahoganyTown_MapCoordEvents, MahoganyTown_MapBGEvents
