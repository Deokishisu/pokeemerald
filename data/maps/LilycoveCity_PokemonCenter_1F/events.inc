LilycoveCity_PokemonCenter_1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_NURSE, 0, 3, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, LilycoveCity_PokemonCenter_1F_EventScript_21C5E8, 0
	object_event 2, EVENT_OBJ_GFX_YOUNGSTER, 0, 9, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, LilycoveCity_PokemonCenter_1F_EventScript_21C5F6, 0
	object_event 3, EVENT_OBJ_GFX_SUPER_NERD, 0, 8, 4, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, LilycoveCity_PokemonCenter_1F_EventScript_21C5FF, 0
	object_event 4, EVENT_OBJ_GFX_ZHIPSTER, 0, 1, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, LilycoveCity_PokemonCenter_1F_EventScript_2A836B, 0
	object_event 5, EVENT_OBJ_GFX_ZTRADER, 0, 2, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, LilycoveCity_PokemonCenter_1F_EventScript_2A89C7, FLAG_HIDE_LILYCOVE_POKEMON_CENTER_LADY

LilycoveCity_PokemonCenter_1F_MapWarps::
	warp_def 4, 7, 3, 2, MAP_LILYCOVE_CITY
	warp_def 3, 7, 3, 2, MAP_LILYCOVE_CITY
	warp_def 0, 7, 3, 0, MAP_LILYCOVE_CITY_POKEMON_CENTER_2F

LilycoveCity_PokemonCenter_1F_MapEvents::
	map_events LilycoveCity_PokemonCenter_1F_EventObjects, LilycoveCity_PokemonCenter_1F_MapWarps, 0x0, 0x0
