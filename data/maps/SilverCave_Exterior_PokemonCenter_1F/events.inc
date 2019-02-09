SilverCave_Exterior_PokemonCenter_1F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_NURSE, 0, 3, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_OLD_WOMAN, 0, 1, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 2, 1, 0, 0, NULL, 0

SilverCave_Exterior_PokemonCenter_1F_MapWarps:
	warp_def 3, 7, 3, 0, MAP_SILVER_CAVE_EXTERIOR
	warp_def 4, 7, 3, 0, MAP_SILVER_CAVE_EXTERIOR
	warp_def 0, 7, 3, 0, MAP_SILVER_CAVE_EXTERIOR_POKEMON_CENTER_2F

SilverCave_Exterior_PokemonCenter_1F_MapEvents::
	map_events SilverCave_Exterior_PokemonCenter_1F_EventObjects, SilverCave_Exterior_PokemonCenter_1F_MapWarps, 0x0, 0x0

