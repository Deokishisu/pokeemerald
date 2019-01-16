SilverCave_Exterior_MapWarps::
	warp_def 23, 19, 3, 0, MAP_SILVER_CAVE_EXTERIOR_POKEMON_CENTER_1F
	warp_def 18, 11, 3, 0, MAP_SILVER_CAVE_ROOM1

SilverCave_Exterior_MapBGEvents::
	bg_event 17, 13, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_hidden_item_event 9, 25, 3, ITEM_FULL_RESTORE, FLAG_TEMP_1

SilverCave_Exterior_MapEvents::
	map_events 0x0, SilverCave_Exterior_MapWarps, 0x0, SilverCave_Exterior_MapBGEvents
