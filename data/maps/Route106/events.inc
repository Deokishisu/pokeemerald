Route106_EventObjects::
	object_event 1, EVENT_OBJ_GFX_SWIMMER_M, 0, 18, 5, 1, MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT, 4, 0, 1, 3, Route106_EventScript_1EE493, 0
	object_event 2, EVENT_OBJ_GFX_SWIMMER_F, 0, 29, 10, 1, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 3, Route106_EventScript_1EE4AA, 0
	object_event 3, EVENT_OBJ_GFX_ZFISHERMAN, 0, 51, 14, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 4, Route106_EventScript_1EE4C1, 0
	object_event 4, EVENT_OBJ_GFX_ZFISHERMAN, 0, 65, 14, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 3, Route106_EventScript_1EE523, 0
	object_event 5, EVENT_OBJ_GFX_ITEM_BALL, 0, 29, 14, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, Route106_EventScript_290D40, 1004

Route106_MapWarps::
	warp_def 13, 37, 0, 2, MAP_ROUTE34_GATE2
	warp_def 14, 37, 3, 3, MAP_ROUTE34_GATE2
	warp_def 11, 14, 3, 2, MAP_ROUTE34_POKEMON_DAY_CARE
	warp_def 11, 15, 3, 3, MAP_ROUTE34_POKEMON_DAY_CARE
	warp_def 13, 15, 3, 0, MAP_ROUTE34_POKEMON_DAY_CARE

Route106_MapBGEvents::
	bg_hidden_item_event 41, 11, 3, ITEM_POKE_BALL, 63
	bg_hidden_item_event 53, 12, 0, ITEM_STARDUST, 46
	bg_hidden_item_event 68, 15, 3, ITEM_HEART_SCALE, 47
	bg_event 59, 13, 3, BG_EVENT_PLAYER_FACING_ANY, Route106_EventScript_1EE48A

Route106_MapEvents::
	map_events Route106_EventObjects, Route106_MapWarps, 0x0, Route106_MapBGEvents
