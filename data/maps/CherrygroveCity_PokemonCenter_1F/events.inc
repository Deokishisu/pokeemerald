CherrygroveCity_PokemonCenter_1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_NURSE, PAL_NPC_RED, 3, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, OldaleTown_PokemonCenter_1F_EventScript_1FC01A, 0
	object_event 2, EVENT_OBJ_GFX_FAT_MAN, PAL_NPC_RED, 2, 3, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, OldaleTown_PokemonCenter_1F_EventScript_1FC028, 0
	object_event 3, EVENT_OBJ_GFX_GENTLEMAN, PAL_NPC_BLUE, 8, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, OldaleTown_PokemonCenter_1F_EventScript_1FC031, 0
	object_event 4, EVENT_OBJ_GFX_TEACHER, PAL_NPC_GREEN, 1, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, 0, 0, OldaleTown_PokemonCenter_1F_EventScript_1FC03A, 0

CherrygroveCity_PokemonCenter_1F_MapWarps::
	warp_def 3, 7, 3, 2, MAP_CHERRYGROVE_CITY
	warp_def 4, 7, 3, 2, MAP_CHERRYGROVE_CITY
	warp_def 0, 7, 3, 0, MAP_CHERRYGROVE_CITY_POKEMON_CENTER_2F

CherrygroveCity_PokemonCenter_1F_MapEvents::
	map_events CherrygroveCity_PokemonCenter_1F_EventObjects, CherrygroveCity_PokemonCenter_1F_MapWarps, 0x0, 0x0
