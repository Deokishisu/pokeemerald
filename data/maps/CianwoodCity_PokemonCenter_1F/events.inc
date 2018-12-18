CianwoodCity_PokemonCenter_1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_NURSE, 1, 3, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FallarborTown_PokemonCenter_1F_EventScript_200BE1, 0
	object_event 2, EVENT_OBJ_GFX_ZGIRL_3, 0, 8, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, FallarborTown_PokemonCenter_1F_EventScript_200BEF, 0
	object_event 3, EVENT_OBJ_GFX_OLD_MAN, 0, 2, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FallarborTown_PokemonCenter_1F_EventScript_200BF8, 0
	object_event 4, EVENT_OBJ_GFX_ZWOMAN_2, 0, 7, 1, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, FallarborTown_PokemonCenter_1F_EventScript_200C01, FLAG_HIDE_FALLORBOR_POKEMON_CENTER_LANETTE

CianwoodCity_PokemonCenter_1F_MapWarps::
	warp_def 3, 7, 3, 2, MAP_CIANWOOD_CITY
	warp_def 4, 7, 3, 2, MAP_CIANWOOD_CITY
	warp_def 0, 7, 3, 0, MAP_CIANWOOD_CITY_POKEMON_CENTER_2F

CianwoodCity_PokemonCenter_1F_MapEvents::
	map_events CianwoodCity_PokemonCenter_1F_EventObjects, CianwoodCity_PokemonCenter_1F_MapWarps, 0x0, 0x0
