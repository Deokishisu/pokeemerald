RustboroCity_PokemonCenter_1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_NURSE, 0, 3, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RustboroCity_PokemonCenter_1F_EventScript_214D76, 0
	object_event 2, EVENT_OBJ_GFX_MAN_1, 0, 7, 1, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, RustboroCity_PokemonCenter_1F_EventScript_214D84, 0
	object_event 3, EVENT_OBJ_GFX_BOY_1, 0, 3, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, RustboroCity_PokemonCenter_1F_EventScript_214D8D, 0
	object_event 4, EVENT_OBJ_GFX_GIRL_3, 0, 9, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, RustboroCity_PokemonCenter_1F_EventScript_214D96, 0

RustboroCity_PokemonCenter_1F_MapWarps::
	warp_def 3, 7, 3, 3, MAP_RUSTBORO_CITY
	warp_def 4, 7, 3, 3, MAP_RUSTBORO_CITY
	warp_def 0, 7, 3, 0, MAP_RUSTBORO_CITY_POKEMON_CENTER_2F

RustboroCity_PokemonCenter_1F_MapEvents::
	map_events RustboroCity_PokemonCenter_1F_EventObjects, RustboroCity_PokemonCenter_1F_MapWarps, 0x0, 0x0
