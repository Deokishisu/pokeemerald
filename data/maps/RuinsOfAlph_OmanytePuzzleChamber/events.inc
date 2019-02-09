RuinsOfAlph_OmanytePuzzleChamber_MapWarps:
	warp_def 3, 9, 3, 9, MAP_RUINS_OF_ALPH_EXTERIOR
	warp_def 4, 9, 3, 9, MAP_RUINS_OF_ALPH_EXTERIOR
	warp_def 3, 3, 3, 5, MAP_RUINS_OF_ALPH_MAIN_CHAMBER
	warp_def 4, 3, 3, 6, MAP_RUINS_OF_ALPH_MAIN_CHAMBER
	warp_def 4, 0, 3, 0, MAP_RUINS_OF_ALPH_OMANYTE_ITEM_ROOM

RuinsOfAlph_OmanytePuzzleChamber_MapBGEvents:
	bg_event 2, 3, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 5, 3, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 3, 2, 3, BG_EVENT_PLAYER_FACING_NORTH, NULL
	bg_event 4, 2, 3, BG_EVENT_PLAYER_FACING_NORTH, NULL
	bg_event 3, 0, 3, BG_EVENT_PLAYER_FACING_NORTH, NULL
	bg_event 4, 0, 3, BG_EVENT_PLAYER_FACING_NORTH, NULL

RuinsOfAlph_OmanytePuzzleChamber_MapEvents::
	map_events 0x0, RuinsOfAlph_OmanytePuzzleChamber_MapWarps, 0x0, RuinsOfAlph_OmanytePuzzleChamber_MapBGEvents

