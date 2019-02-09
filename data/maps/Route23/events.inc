Route23_MapWarps:
	warp_def 9, 5, 3, 0, MAP_INDIGO_PLATEAU_POKEMON_CENTER_1F
	warp_def 10, 5, 3, 1, MAP_INDIGO_PLATEAU_POKEMON_CENTER_1F
	warp_def 9, 13, 3, 9, MAP_VICTORY_ROAD
	warp_def 10, 13, 3, 9, MAP_VICTORY_ROAD

Route23_MapBGEvents:
	bg_event 11, 7, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

Route23_MapEvents::
	map_events 0x0, Route23_MapWarps, 0x0, Route23_MapBGEvents

