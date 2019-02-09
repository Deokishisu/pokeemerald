VioletCity_EarlsPokemonAcademy_EventObjects:
	object_event 1, EVENT_OBJ_GFX_GAMEBOY_KID, 0, 3, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RustboroCity_PokemonSchool_EventScript_213F5F, 0
	object_event 2, EVENT_OBJ_GFX_GAMEBOY_KID, 0, 4, 11, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, RustboroCity_PokemonSchool_EventScript_213F68, 0
	object_event 3, EVENT_OBJ_GFX_YOUNGSTER, 0, 4, 7, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, RustboroCity_PokemonSchool_EventScript_213F71, 0
	object_event 4, EVENT_OBJ_GFX_YOUNGSTER, 0, 2, 5, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, RustboroCity_PokemonSchool_EventScript_213F83, 0
	object_event 5, EVENT_OBJ_GFX_FAT_MAN, 0, 4, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, RustboroCity_PokemonSchool_EventScript_213F95, 0
	object_event 6, EVENT_OBJ_GFX_BOOK, 0, 2, 4, 3, MOVEMENT_TYPE_NONE, 0, 0, 0, 0, NULL, 0

VioletCity_EarlsPokemonAcademy_MapWarps:
	warp_def 3, 15, 0, 1, MAP_VIOLET_CITY
	warp_def 4, 15, 0, 1, MAP_VIOLET_CITY

VioletCity_EarlsPokemonAcademy_MapBGEvents:
	bg_event 3, 0, 0, BG_EVENT_PLAYER_FACING_ANY, RustboroCity_PokemonSchool_EventScript_213EA9
	bg_event 4, 0, 0, BG_EVENT_PLAYER_FACING_ANY, RustboroCity_PokemonSchool_EventScript_213EA9

VioletCity_EarlsPokemonAcademy_MapEvents::
	map_events VioletCity_EarlsPokemonAcademy_EventObjects, VioletCity_EarlsPokemonAcademy_MapWarps, 0x0, VioletCity_EarlsPokemonAcademy_MapBGEvents

