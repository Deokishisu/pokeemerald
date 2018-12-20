OlivineCity_Gym_EventObjects::
	object_event 1, EVENT_OBJ_GFX_JASMINE, PAL_NPC_RED, 5, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RustboroCity_Gym_EventScript_212F31, 0
	object_event 2, EVENT_OBJ_GFX_GYM_GUIDE, PAL_NPC_RED, 7, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RustboroCity_Gym_EventScript_213028, 0

OlivineCity_Gym_MapWarps::
	warp_def 4, 15, 0, 1, MAP_OLIVINE_CITY
	warp_def 5, 15, 0, 1, MAP_OLIVINE_CITY

OlivineCity_Gym_MapBGEvents::
	bg_event 3, 13, 0, BG_EVENT_PLAYER_FACING_ANY, RustboroCity_Gym_EventScript_213047
	bg_event 6, 13, 0, BG_EVENT_PLAYER_FACING_ANY, RustboroCity_Gym_EventScript_213057

OlivineCity_Gym_MapEvents::
	map_events OlivineCity_Gym_EventObjects, OlivineCity_Gym_MapWarps, 0x0, OlivineCity_Gym_MapBGEvents
