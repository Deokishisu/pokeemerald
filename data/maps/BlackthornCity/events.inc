BlackthornCity_EventObjects::
	object_event 1, EVENT_OBJ_GFX_SUPER_NERD, PAL_NPC_RED, 18, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FortreeCity_EventScript_1E25B6, 0
	object_event 2, EVENT_OBJ_GFX_SUPER_NERD, PAL_NPC_RED, 19, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, FortreeCity_EventScript_1E25DE, 0
	object_event 3, EVENT_OBJ_GFX_OLD_MAN, 0, 20, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 1, 0, 0, FortreeCity_EventScript_1E25BF, 0
	object_event 4, EVENT_OBJ_GFX_OLD_MAN, 0, 21, 2, 4, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, FortreeCity_EventScript_1E25F0, 0
	object_event 5, EVENT_OBJ_GFX_BLACK_BELT, PAL_NPC_BLUE, 24, 31, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, FortreeCity_EventScript_1E25E7, 0
	object_event 6, EVENT_OBJ_GFX_COOLTRAINER_F, PAL_NPC_RED, 9, 25, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 0, 0, 0, FortreeCity_EventScript_1E25F9, 0
	object_event 7, EVENT_OBJ_GFX_YOUNGSTER, 0, 13, 15, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, FortreeCity_EventScript_1E2614, 0
	object_event 8, EVENT_OBJ_GFX_YOUNGSTER, 0, 22, 20, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FortreeCity_EventScript_1E2614, 0
	object_event 9, EVENT_OBJ_GFX_COOLTRAINER_F, PAL_NPC_GREEN, 35, 19, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, FortreeCity_EventScript_1E25F9, 0

BlackthornCity_MapWarps::
	warp_def 18, 11, 0, 0, MAP_BLACKTHORN_CITY_GYM_1F
	warp_def 13, 21, 0, 0, MAP_BLACKTHORN_CITY_HOUSE1
	warp_def 29, 23, 0, 0, MAP_BLACKTHORN_CITY_HOUSE2
	warp_def 15, 29, 0, 0, MAP_BLACKTHORN_CITY_MART
	warp_def 21, 29, 0, 0, MAP_BLACKTHORN_CITY_POKEMON_CENTER_1F
	warp_def 9, 31, 0, 0, MAP_BLACKTHORN_CITY_MOVE_DELETERS_HOUSE
	warp_def 36, 9, 0, 1, MAP_ICE_PATH_1F
	warp_def 20, 1, 0, 0, MAP_DRAGONS_DEN_ENTRANCE

BlackthornCity_MapBGEvents::
	bg_event 34, 24, 0, BG_EVENT_PLAYER_FACING_ANY, FortreeCity_EventScript_1E2602
	bg_event 17, 13, 0, BG_EVENT_PLAYER_FACING_ANY, FortreeCity_EventScript_271E73
	bg_event 7, 31, 0, BG_EVENT_PLAYER_FACING_ANY, FortreeCity_EventScript_271E6A
	bg_event 21, 3, 0, BG_EVENT_PLAYER_FACING_ANY, FortreeCity_EventScript_1E260B
	bg_event 5, 25, 0, BG_EVENT_PLAYER_FACING_ANY, FortreeCity_EventScript_271E73
	bg_event 16, 29, 0, BG_EVENT_PLAYER_FACING_ANY, FortreeCity_EventScript_271E6A
	bg_event 22, 29, 0, BG_EVENT_PLAYER_FACING_ANY, FortreeCity_EventScript_271E6A

BlackthornCity_MapEvents::
	map_events BlackthornCity_EventObjects, BlackthornCity_MapWarps, 0x0, BlackthornCity_MapBGEvents
