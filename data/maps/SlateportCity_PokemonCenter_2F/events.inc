SlateportCity_PokemonCenter_2F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_TEALA, 0, 5, 2, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, SlateportCity_PokemonCenter_2F_EventScript_27375B, 0
	object_event 2, EVENT_OBJ_GFX_TEALA, 0, 1, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, SlateportCity_PokemonCenter_2F_EventScript_273761, 0
	object_event 3, EVENT_OBJ_GFX_TEALA, 0, 9, 2, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, SlateportCity_PokemonCenter_2F_EventScript_273767, 0
	object_event 4, EVENT_OBJ_GFX_ZMYSTERY_GIFT_MAN, 0, 0, 1, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, SlateportCity_PokemonCenter_2F_EventScript_276B03, FLAG_HIDE_POKEMON_CENTER_2F_MYSTERY_GIFT_MAN

SlateportCity_PokemonCenter_2F_MapWarps::
	warp_def 0, 7, 3, 2, MAP_SLATEPORT_CITY_POKEMON_CENTER_1F
	warp_def 5, 0, 3, 0, MAP_UNION_ROOM
	warp_def 9, 0, 3, 0, MAP_TRADE_CENTER

SlateportCity_PokemonCenter_2F_MapEvents::
	map_events SlateportCity_PokemonCenter_2F_EventObjects, SlateportCity_PokemonCenter_2F_MapWarps, 0x0, 0x0
