NewBarkTown_EventObjects::
	object_event 1, EVENT_OBJ_GFX_LINK_MAY, 0, 9, 6, 3, MOVEMENT_TYPE_ROTATE_CLOCKWISE, 1, 2, 0, 0, LittlerootTown_EventScript_1E8034, 0
	object_event 2, EVENT_OBJ_GFX_LINK_RS_MAY, 0, 8, 6, 3, MOVEMENT_TYPE_ROTATE_CLOCKWISE, 2, 1, 0, 0, LittlerootTown_EventScript_1E8022, 868
	object_event 3, EVENT_OBJ_GFX_SUICUNE, 3, 15, 14, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 1, 0, 0, LittlerootTown_EventScript_1E802B, 0
	object_event 4, EVENT_OBJ_GFX_MOM, 0, 5, 8, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, LittlerootTown_EventScript_1E863D, 752
	object_event 5, EVENT_OBJ_GFX_LINK_RS_BRENDAN, 0, 6, 6, 4, MOVEMENT_TYPE_ROTATE_CLOCKWISE, 0, 0, 0, 0, NULL, 0
	object_event 6, EVENT_OBJ_GFX_LINK_BRENDAN, 0, 7, 6, 4, MOVEMENT_TYPE_ROTATE_CLOCKWISE, 0, 0, 0, 0, NULL, 0
	object_event 7, EVENT_OBJ_GFX_VAR_0, 0, 13, 10, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, 0, 0, 0x0, 794
	object_event 8, EVENT_OBJ_GFX_PROF_ELM, 0, 16, 9, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, 0, 0, 0x0, 795

NewBarkTown_MapWarps::
	warp_def 11, 13, 0, 1, MAP_NEW_BARK_TOWN_PROF_ELMS_HOUSE
	warp_def 13, 5, 0, 1, MAP_NEW_BARK_TOWN_PLAYERS_HOUSE_1F
	warp_def 6, 3, 0, 0, MAP_NEW_BARK_TOWN_PROF_ELMS_LAB
	warp_def 3, 11, 3, 0, MAP_NEW_BARK_TOWN_HOUSE

NewBarkTown_MapCoordEvents::
	coord_event 10, 1, 3, VAR_0x4050, 0, LittlerootTown_EventScript_1E8091
	coord_event 11, 1, 3, VAR_0x4050, 0, LittlerootTown_EventScript_1E80EF
	coord_event 11, 1, 3, VAR_0x4050, 1, LittlerootTown_EventScript_1E811F
	coord_event 8, 9, 3, VAR_0x4050, 3, LittlerootTown_EventScript_1E81F9
	coord_event 9, 9, 3, VAR_0x4050, 3, LittlerootTown_EventScript_1E8205
	coord_event 10, 9, 3, VAR_0x4050, 3, LittlerootTown_EventScript_1E81E1
	coord_event 11, 9, 3, VAR_0x4050, 3, LittlerootTown_EventScript_1E81ED
	coord_event 10, 2, 3, VAR_0x4050, 3, LittlerootTown_EventScript_1E81BB
	coord_event 11, 2, 3, VAR_0x4050, 3, LittlerootTown_EventScript_1E81CE

NewBarkTown_MapBGEvents::
	bg_event 8, 8, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_EventScript_1E8151
	bg_event 3, 3, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_EventScript_1E815A
	bg_event 11, 5, 3, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_EventScript_1E8163
	bg_event 9, 13, 3, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_EventScript_1E818F

NewBarkTown_MapEvents::
	map_events NewBarkTown_EventObjects, NewBarkTown_MapWarps, NewBarkTown_MapCoordEvents, NewBarkTown_MapBGEvents
