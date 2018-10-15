CherrygroveCity_EventObjects::
	object_event 1, EVENT_OBJ_GFX_TWIN, 0, 16, 11, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, OldaleTown_EventScript_1E8EF3, 0
	object_event 2, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 13, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, OldaleTown_EventScript_1E8EFC, 0
	object_event 3, EVENT_OBJ_GFX_MANIAC, 0, 8, 9, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, OldaleTown_EventScript_1E901F, 0
	object_event 4, EVENT_OBJ_GFX_HIPSTER, 0, 11, 19, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, 0, 0, OldaleTown_EventScript_1E9070, 979

CherrygroveCity_MapWarps::
	warp_def 17, 7, 0, 0, MAP_CHERRYGROVE_CITY_HOUSE1
	warp_def 25, 9, 0, 0, MAP_CHERRYGROVE_CITY_GUIDE_GENTS_HOUSE
	warp_def 29, 3, 0, 0, MAP_CHERRYGROVE_CITY_POKEMON_CENTER_1F
	warp_def 23, 3, 0, 0, MAP_CHERRYGROVE_CITY_MART
	warp_def 31, 11, 3, 0, MAP_CHERRYGROVE_CITY_HOUSE2

CherrygroveCity_MapCoordEvents::
	coord_event 0, 10, 3, VAR_0x4051, 0, OldaleTown_EventScript_1E903F
	coord_event 8, 19, 3, VAR_0x40C7, 1, OldaleTown_EventScript_1E9086
	coord_event 9, 19, 3, VAR_0x40C7, 1, OldaleTown_EventScript_1E90A6
	coord_event 10, 19, 3, VAR_0x40C7, 1, OldaleTown_EventScript_1E90C6

CherrygroveCity_MapBGEvents::
	bg_event 30, 8, 0, BG_EVENT_PLAYER_FACING_ANY, OldaleTown_EventScript_1E8EEA
	bg_event 30, 3, 0, BG_EVENT_PLAYER_FACING_NORTH, OldaleTown_EventScript_271E73
	bg_event 24, 3, 0, BG_EVENT_PLAYER_FACING_NORTH, OldaleTown_EventScript_271E6A
	bg_event 23, 9, 0, BG_EVENT_PLAYER_FACING_NORTH, OldaleTown_EventScript_271E73

CherrygroveCity_MapEvents::
	map_events CherrygroveCity_EventObjects, CherrygroveCity_MapWarps, CherrygroveCity_MapCoordEvents, CherrygroveCity_MapBGEvents
