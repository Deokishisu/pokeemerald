SlateportCity_PokemonCenter_1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_NURSE, 0, 3, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, SlateportCity_PokemonCenter_1F_EventScript_20DAD3, 0
	object_event 2, EVENT_OBJ_GFX_SAILOR, 0, 2, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, SlateportCity_PokemonCenter_1F_EventScript_20DAE1, 0
	object_event 3, EVENT_OBJ_GFX_WOMAN_5, 0, 7, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, SlateportCity_PokemonCenter_1F_EventScript_20DAEA, 0

SlateportCity_PokemonCenter_1F_MapWarps::
	warp_def 3, 7, 3, 0, MAP_SLATEPORT_CITY
	warp_def 4, 7, 3, 0, MAP_SLATEPORT_CITY
	warp_def 0, 7, 3, 0, MAP_SLATEPORT_CITY_POKEMON_CENTER_2F

SlateportCity_PokemonCenter_1F_MapEvents::
	map_events SlateportCity_PokemonCenter_1F_EventObjects, SlateportCity_PokemonCenter_1F_MapWarps, 0x0, 0x0
