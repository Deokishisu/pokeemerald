RustboroCity_PokemonSchool_EventObjects::
	object_event 1, EVENT_OBJ_GFX_GAMEBOY_KID, 0, 3, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RustboroCity_PokemonSchool_EventScript_213F5F, 0
	object_event 2, EVENT_OBJ_GFX_GAMEBOY_KID, 0, 4, 11, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, RustboroCity_PokemonSchool_EventScript_213F68, 0
	object_event 3, EVENT_OBJ_GFX_RICH_BOY, 0, 4, 7, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, RustboroCity_PokemonSchool_EventScript_213F71, 0
	object_event 4, EVENT_OBJ_GFX_LASS, 0, 7, 15, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, RustboroCity_PokemonSchool_EventScript_213F7A, 0
	object_event 5, EVENT_OBJ_GFX_SCHOOL_KID_M, 0, 2, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RustboroCity_PokemonSchool_EventScript_213F83, 0
	object_event 6, EVENT_OBJ_GFX_GENTLEMAN, 0, 4, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, RustboroCity_PokemonSchool_EventScript_213F95, 0
	object_event 7, EVENT_OBJ_GFX_SCOTT, 0, 0, 15, 0, MOVEMENT_TYPE_FACE_UP, 1, 1, 0, 0, RustboroCity_PokemonSchool_EventScript_214040, 999

RustboroCity_PokemonSchool_MapWarps::
	warp_def 3, 15, 0, 1, MAP_PETALBURG_CITY
	warp_def 4, 15, 0, 1, MAP_PETALBURG_CITY

RustboroCity_PokemonSchool_MapBGEvents::
	bg_event 3, 0, 0, BG_EVENT_PLAYER_FACING_ANY, RustboroCity_PokemonSchool_EventScript_213EA9
	bg_event 0, 0, 0, BG_EVENT_PLAYER_FACING_ANY, RustboroCity_PokemonSchool_EventScript_213EA9
	bg_event 4, 0, 0, BG_EVENT_PLAYER_FACING_ANY, RustboroCity_PokemonSchool_EventScript_213EA9
	bg_event 1, 0, 0, BG_EVENT_PLAYER_FACING_ANY, RustboroCity_PokemonSchool_EventScript_213EA9
	bg_event 2, 4, 0, BG_EVENT_PLAYER_FACING_ANY, RustboroCity_PokemonSchool_EventScript_213F8C

RustboroCity_PokemonSchool_MapEvents::
	map_events RustboroCity_PokemonSchool_EventObjects, RustboroCity_PokemonSchool_MapWarps, 0x0, RustboroCity_PokemonSchool_MapBGEvents
