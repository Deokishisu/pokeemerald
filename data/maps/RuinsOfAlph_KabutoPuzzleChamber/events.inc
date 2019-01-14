RuinsOfAlph_KabutoPuzzleChamber_EventObjects::
	object_event 1, EVENT_OBJ_GFX_RECEPTIONIST, 0, 5, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_SCIENTIST, PAL_NPC_BLUE, 3, 1, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, FALSE, 0, NULL, 0

RuinsOfAlph_KabutoPuzzleChamber_MapWarps::
	warp_def 3, 9, 3, 1, MAP_RUINS_OF_ALPH_EXTERIOR
	warp_def 4, 9, 3, 1, MAP_RUINS_OF_ALPH_EXTERIOR
	warp_def 3, 3, 3, 3, MAP_RUINS_OF_ALPH_MAIN_CHAMBER
	warp_def 4, 3, 3, 4, MAP_RUINS_OF_ALPH_MAIN_CHAMBER
	warp_def 4, 0, 3, 0, MAP_RUINS_OF_ALPH_KABUTO_ITEM_ROOM

RuinsOfAlph_KabutoPuzzleChamber_MapBGEvents::
	bg_event 2, 3, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 5, 3, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 3, 2, 3, BG_EVENT_PLAYER_FACING_NORTH, NULL
	bg_event 4, 2, 3, BG_EVENT_PLAYER_FACING_NORTH, NULL
	bg_event 3, 0, 3, BG_EVENT_PLAYER_FACING_NORTH, NULL
	bg_event 4, 0, 3, BG_EVENT_PLAYER_FACING_NORTH, NULL

RuinsOfAlph_KabutoPuzzleChamber_MapEvents::
	map_events RuinsOfAlph_KabutoPuzzleChamber_EventObjects, RuinsOfAlph_KabutoPuzzleChamber_MapWarps, 0x0, RuinsOfAlph_KabutoPuzzleChamber_MapBGEvents
