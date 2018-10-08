SootopolisCity_PokemonCenter_1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_NURSE, 0, 3, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, SootopolisCity_PokemonCenter_1F_EventScript_226500, 0
	object_event 2, EVENT_OBJ_GFX_GENTLEMAN, 0, 8, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, SootopolisCity_PokemonCenter_1F_EventScript_22650E, 0
	object_event 3, EVENT_OBJ_GFX_WOMAN_7, 0, 1, 5, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, SootopolisCity_PokemonCenter_1F_EventScript_226538, 0
	object_event 4, EVENT_OBJ_GFX_WOMAN_1, 0, 2, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, SootopolisCity_PokemonCenter_1F_EventScript_2C8256, 0

SootopolisCity_PokemonCenter_1F_MapWarps::
	warp_def 3, 7, 3, 0, MAP_SOOTOPOLIS_CITY
	warp_def 4, 7, 3, 0, MAP_SOOTOPOLIS_CITY
	warp_def 0, 7, 3, 0, MAP_SOOTOPOLIS_CITY_POKEMON_CENTER_2F

SootopolisCity_PokemonCenter_1F_MapEvents::
	map_events SootopolisCity_PokemonCenter_1F_EventObjects, SootopolisCity_PokemonCenter_1F_MapWarps, 0x0, 0x0
