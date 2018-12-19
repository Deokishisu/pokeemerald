AzaleaTown_EventObjects::
	object_event 1, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 31, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_OLD_MAN, PAL_NPC_BROWN, 21, 9, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 2, 0, 3, DewfordTown_EventScript_1E9511, 0
	object_event 3, EVENT_OBJ_GFX_TEACHER, PAL_NPC_BLUE, 15, 13, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 2, 0, 0, DewfordTown_EventScript_1E95B1, 0
	object_event 4, EVENT_OBJ_GFX_YOUNGSTER, PAL_NPC_GREEN, 7, 9, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, DewfordTown_EventScript_1E9922, 0
	object_event 5, EVENT_OBJ_GFX_SLOWPOKE, PAL_NPC_RED, 8, 17, 3, MOVEMENT_TYPE_NONE, 1, 0, 0, 0, DewfordTown_EventScript_1E95D5, 0
	object_event 6, EVENT_OBJ_GFX_SLOWPOKE, PAL_NPC_RED, 18, 9, 3, MOVEMENT_TYPE_NONE, 0, 0, 0, 0, NULL, 0
	object_event 7, EVENT_OBJ_GFX_SLOWPOKE, PAL_NPC_RED, 29, 9, 3, MOVEMENT_TYPE_NONE, 0, 0, FALSE, 0, NULL, 0
	object_event 8, EVENT_OBJ_GFX_SLOWPOKE, PAL_NPC_RED, 15, 15, 3, MOVEMENT_TYPE_NONE, 0, 0, FALSE, 0, NULL, 0
	object_event 9, EVENT_OBJ_GFX_BERRY_TREE, 0, 8, 2, 3, MOVEMENT_TYPE_NONE, 0, 0, FALSE, 0, NULL, 0
	object_event 10, EVENT_OBJ_GFX_RIVAL, 0, 11, 10, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, NULL, 0
	object_event 11, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 10, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 12, EVENT_OBJ_GFX_KURT, 0, 6, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, NULL, 0

AzaleaTown_MapWarps::
	warp_def 9, 5, 0, 0, MAP_AZALEA_TOWN_KURTS_HOUSE
	warp_def 15, 9, 0, 0, MAP_AZALEA_TOWN_POKEMON_CENTER_1F
	warp_def 10, 15, 0, 0, MAP_AZALEA_TOWN_GYM
	warp_def 21, 13, 0, 0, MAP_AZALEA_TOWN_CHARCOAL_KILN
	warp_def 21, 5, 0, 0, MAP_AZALEA_TOWN_MART
	warp_def 31, 7, 3, 0, MAP_AZALEA_TOWN
	warp_def 2, 10, 3, 0, MAP_ROUTE34_GATE1
	warp_def 2, 11, 3, 1, MAP_ROUTE34_GATE1

AzaleaTown_MapBGEvents::
	bg_event 19, 9, 0, BG_EVENT_PLAYER_FACING_ANY, DewfordTown_EventScript_1E95BA
	bg_event 10, 9, 0, BG_EVENT_PLAYER_FACING_ANY, DewfordTown_EventScript_1E95C3
	bg_event 14, 15, 0, BG_EVENT_PLAYER_FACING_NORTH, DewfordTown_EventScript_271E73
	bg_event 29, 7, 0, BG_EVENT_PLAYER_FACING_NORTH, DewfordTown_EventScript_271E73
	bg_event 19, 13, 0, BG_EVENT_PLAYER_FACING_ANY, DewfordTown_EventScript_1E95CC
	bg_event 16, 9, 0, BG_EVENT_PLAYER_FACING_ANY, DewfordTown_EventScript_1E95CC
	bg_event 22, 5, 0, BG_EVENT_PLAYER_FACING_ANY, DewfordTown_EventScript_1E95CC
	bg_event 3, 9, 0, BG_EVENT_PLAYER_FACING_ANY, DewfordTown_EventScript_1E95CC
	bg_hidden_item_event 31, 6, 3, ITEM_FULL_HEAL, 37

AzaleaTown_MapEvents::
	map_events AzaleaTown_EventObjects, AzaleaTown_MapWarps, 0x0, AzaleaTown_MapBGEvents
