MossdeepCity_PokemonCenter_1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_NURSE, 1, 3, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, MossdeepCity_PokemonCenter_1F_EventScript_22224E, 0
	object_event 2, EVENT_OBJ_GFX_ZWOMAN_2, 0, 8, 4, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, MossdeepCity_PokemonCenter_1F_EventScript_22225C, 0
	object_event 3, EVENT_OBJ_GFX_ZGIRL_1, 0, 3, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, MossdeepCity_PokemonCenter_1F_EventScript_222265, 0

MossdeepCity_PokemonCenter_1F_MapWarps::
	warp_def 3, 7, 3, 2, MAP_MOSSDEEP_CITY
	warp_def 4, 7, 3, 2, MAP_MOSSDEEP_CITY
	warp_def 0, 7, 3, 0, MAP_MOSSDEEP_CITY_POKEMON_CENTER_2F

MossdeepCity_PokemonCenter_1F_MapEvents::
	map_events MossdeepCity_PokemonCenter_1F_EventObjects, MossdeepCity_PokemonCenter_1F_MapWarps, 0x0, 0x0
