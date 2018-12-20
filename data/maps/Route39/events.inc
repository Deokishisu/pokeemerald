Route39_EventObjects::
	object_event 1, EVENT_OBJ_GFX_SAILOR, PAL_NPC_BLUE, 13, 29, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRUE, 5, Route111_EventScript_1F121B, 0
	object_event 2, EVENT_OBJ_GFX_POKEFAN_M, PAL_NPC_RED, 10, 22, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRUE, 4, Route111_EventScript_1F1260, 0
	object_event 3, EVENT_OBJ_GFX_POKEFAN_F, PAL_NPC_RED, 11, 19, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 0, TRUE, 4, Route111_EventScript_1F1249, 0
	object_event 4, EVENT_OBJ_GFX_CAL, 0, 3, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 5, EVENT_OBJ_GFX_CAL, 0, 6, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, Route111_EventScript_1F0EB9, 0
	object_event 6, EVENT_OBJ_GFX_CAL, 0, 4, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, Route111_EventScript_1F0EB9, 0
	object_event 7, EVENT_OBJ_GFX_CAL, 0, 8, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, Route111_EventScript_1F0EB9, 0
	object_event 8, EVENT_OBJ_GFX_YOUNGSTER, PAL_NPC_BLUE, 13, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRUE, 1, Route111_EventScript_1F12D9, 0
	object_event 9, EVENT_OBJ_GFX_BERRY_TREE, 0, 9, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 10, EVENT_OBJ_GFX_POKEFAN_F, PAL_NPC_RED, 4, 22, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

Route39_MapWarps::
	warp_def 5, 3, 0, 0, MAP_ROUTE39_MOO_MOO_FARM_HOUSE
	warp_def 1, 3, 0, 0, MAP_ROUTE39_MOO_MOO_FARM_BARN

Route39_MapBGEvents::
	bg_event 5, 31, 0, BG_EVENT_PLAYER_FACING_ANY, Route111_EventScript_1F115C
	bg_event 9, 5, 0, BG_EVENT_PLAYER_FACING_ANY, Route111_EventScript_1F1153
	bg_event 15, 7, 0, BG_EVENT_PLAYER_FACING_ANY, Route111_EventScript_1F1165
	bg_hidden_item_event 5, 13, 0, ITEM_NUGGET, FLAG_HIDDEN_ITEM_ROUTE_111_STARDUST

Route39_MapEvents::
	map_events Route39_EventObjects, Route39_MapWarps, 0x0, Route39_MapBGEvents
