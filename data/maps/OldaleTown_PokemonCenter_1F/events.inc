OldaleTown_PokemonCenter_1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_NURSE, 0, 3, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, OldaleTown_PokemonCenter_1F_EventScript_1FC01A, 0
	object_event 2, EVENT_OBJ_GFX_GENTLEMAN, 0, 8, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, OldaleTown_PokemonCenter_1F_EventScript_1FC028, 0
	object_event 3, EVENT_OBJ_GFX_BOY_1, 0, 2, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, OldaleTown_PokemonCenter_1F_EventScript_1FC031, 0
	object_event 4, EVENT_OBJ_GFX_GIRL_3, 0, 0, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, 0, 0, OldaleTown_PokemonCenter_1F_EventScript_1FC03A, 0

OldaleTown_PokemonCenter_1F_MapWarps::
	warp_def 4, 7, 3, 2, MAP_OLDALE_TOWN
	warp_def 3, 7, 3, 2, MAP_OLDALE_TOWN
	warp_def 0, 7, 4, 0, MAP_OLDALE_TOWN_POKEMON_CENTER_2F

OldaleTown_PokemonCenter_1F_MapEvents::
	map_events OldaleTown_PokemonCenter_1F_EventObjects, OldaleTown_PokemonCenter_1F_MapWarps, 0x0, 0x0
