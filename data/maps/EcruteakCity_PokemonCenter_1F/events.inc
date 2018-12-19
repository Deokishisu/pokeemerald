EcruteakCity_PokemonCenter_1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_NURSE, 1, 3, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, MauvilleCity_PokemonCenter_1F_EventScript_210E78, 0
	object_event 2, EVENT_OBJ_GFX_POKEFAN_M, 0, 7, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, MauvilleCity_PokemonCenter_1F_EventScript_28E066, 0
	object_event 3, EVENT_OBJ_GFX_COOLTRAINER_F, 0, 1, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, MauvilleCity_PokemonCenter_1F_EventScript_210E86, 0
	object_event 4, EVENT_OBJ_GFX_GYM_GUIDE, PAL_NPC_GREEN, 7, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, MauvilleCity_PokemonCenter_1F_EventScript_210E8F, 0
	object_event 5, EVENT_OBJ_GFX_BILL, 0, 0, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, MauvilleCity_PokemonCenter_1F_EventScript_210E98, 0

EcruteakCity_PokemonCenter_1F_MapWarps::
	warp_def 3, 7, 3, 5, MAP_ECRUTEAK_CITY
	warp_def 4, 7, 3, 5, MAP_ECRUTEAK_CITY
	warp_def 0, 7, 3, 0, MAP_ECRUTEAK_CITY_POKEMON_CENTER_2F

EcruteakCity_PokemonCenter_1F_MapEvents::
	map_events EcruteakCity_PokemonCenter_1F_EventObjects, EcruteakCity_PokemonCenter_1F_MapWarps, 0x0, 0x0
