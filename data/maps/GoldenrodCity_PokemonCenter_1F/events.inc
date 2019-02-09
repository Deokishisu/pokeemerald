GoldenrodCity_PokemonCenter_1F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_NURSE, 0, 3, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, SlateportCity_PokemonCenter_1F_EventScript_20DAD3, 0
	object_event 2, EVENT_OBJ_GFX_TEALA, 0, 16, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, SlateportCity_PokemonCenter_1F_EventScript_20DAE1, 0
	object_event 3, EVENT_OBJ_GFX_GAMEBOY_KID, 0, 6, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, SlateportCity_PokemonCenter_1F_EventScript_20DAEA, 0
	object_event 4, EVENT_OBJ_GFX_LASS, 0, 1, 4, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, SlateportCity_PokemonCenter_1F_EventScript_20DAEA, 0
	object_event 5, EVENT_OBJ_GFX_POKEFAN_F, 0, 7, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, SlateportCity_PokemonCenter_1F_EventScript_20DAEA, 0

GoldenrodCity_PokemonCenter_1F_MapWarps:
	warp_def 3, 7, 3, 14, MAP_GOLDENROD_CITY
	warp_def 4, 7, 3, 14, MAP_GOLDENROD_CITY
	warp_def 0, 7, 3, 0, MAP_GOLDENROD_CITY_POKEMON_CENTER_2F

GoldenrodCity_PokemonCenter_1F_MapCoordEvents:
	coord_event 3, 7, 3, VAR_TEMP_0, 0, NULL
	coord_event 4, 7, 3, VAR_TEMP_0, 0, NULL

GoldenrodCity_PokemonCenter_1F_MapEvents::
	map_events GoldenrodCity_PokemonCenter_1F_EventObjects, GoldenrodCity_PokemonCenter_1F_MapWarps, GoldenrodCity_PokemonCenter_1F_MapCoordEvents, 0x0

