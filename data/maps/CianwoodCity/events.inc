CianwoodCity_EventObjects:
	object_event 1, EVENT_OBJ_GFX_YOUNGSTER, 0, 21, 37, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, FallarborTown_EventScript_1EB22B, 0
	object_event 2, EVENT_OBJ_GFX_POKEFAN_M, 0, 17, 33, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, FallarborTown_EventScript_1EB20C, 0
	object_event 3, EVENT_OBJ_GFX_LASS, 0, 14, 42, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 2, 0, 0, FallarborTown_EventScript_1EB234, 0
	object_event 4, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 8, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FallarborTown_EventScript_1EB23D, 0
	object_event 5, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 9, 17, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FallarborTown_EventScript_1EB23D, 0
	object_event 6, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 4, 25, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FallarborTown_EventScript_1EB23D, 0
	object_event 7, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 5, 29, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FallarborTown_EventScript_1EB23D, 0
	object_event 8, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 10, 27, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FallarborTown_EventScript_1EB23D, 0
	object_event 9, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 4, 19, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FallarborTown_EventScript_1EB23D, 0
	object_event 10, EVENT_OBJ_GFX_POKEFAN_F, 0, 10, 46, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, FallarborTown_EventScript_1EB22B, 0
	object_event 11, EVENT_OBJ_GFX_SUPER_NERD, 0, 11, 21, 3, MOVEMENT_TYPE_FACE_UP, 1, 0, 0, 0, FallarborTown_EventScript_1EB20C, 0
	object_event 12, EVENT_OBJ_GFX_SUICUNE, 0, 10, 14, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FallarborTown_EventScript_1EB234, 0

CianwoodCity_MapWarps:
	warp_def 17, 41, 0, 0, MAP_CIANWOOD_CITY_MANIAS_HOUSE
	warp_def 8, 43, 0, 0, MAP_CIANWOOD_CITY_GYM
	warp_def 23, 43, 0, 0, MAP_CIANWOOD_CITY_POKEMON_CENTER_1F
	warp_def 15, 47, 0, 0, MAP_CIANWOOD_CITY_PHARMACY
	warp_def 9, 31, 0, 0, MAP_CIANWOOD_CITY_PHOTO_STUDIO
	warp_def 15, 37, 0, 0, MAP_CIANWOOD_CITY_HOUSE
	warp_def 5, 17, 0, 0, MAP_CIANWOOD_CITY_POKE_SEERS_HOUSE

CianwoodCity_MapCoordEvents:
	coord_event 11, 16, 3, VAR_TEMP_0, 0, NULL

CianwoodCity_MapBGEvents:
	bg_event 20, 34, 0, BG_EVENT_PLAYER_FACING_ANY, FallarborTown_EventScript_271E6A
	bg_event 7, 45, 0, BG_EVENT_PLAYER_FACING_ANY, FallarborTown_EventScript_271E73
	bg_event 24, 43, 0, BG_EVENT_PLAYER_FACING_ANY, FallarborTown_EventScript_1EB250
	bg_event 19, 47, 0, BG_EVENT_PLAYER_FACING_ANY, FallarborTown_EventScript_271E73
	bg_event 8, 32, 0, BG_EVENT_PLAYER_FACING_ANY, FallarborTown_EventScript_1EB259
	bg_event 8, 24, 0, BG_EVENT_PLAYER_FACING_ANY, FallarborTown_EventScript_271E6A
	bg_event 4, 19, 0, BG_EVENT_PLAYER_FACING_ANY, FallarborTown_EventScript_1EB262
	bg_hidden_item_event 5, 29, 3, ITEM_MAX_ETHER, FLAG_HIDDEN_ITEM_FALLARBOR_TOWN_NUGGET

CianwoodCity_MapEvents::
	map_events CianwoodCity_EventObjects, CianwoodCity_MapWarps, CianwoodCity_MapCoordEvents, CianwoodCity_MapBGEvents

