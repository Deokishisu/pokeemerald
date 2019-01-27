Route28_MapWarps::
	warp_def 7, 3, 3, 0, MAP_ROUTE28_HOUSE
	warp_def 33, 5, 3, 6, MAP_VICTORY_ROAD_GATE

Route28_MapBGEvents::
	bg_event 31, 5, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_hidden_item_event 25, 2, 3, ITEM_RARE_CANDY, FLAG_TEMP_1

Route28_MapEvents::
	map_events 0x0, Route28_MapWarps, 0x0, Route28_MapBGEvents
