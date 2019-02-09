Route42_EventObjects:
	object_event 1, EVENT_OBJ_GFX_FAT_MAN, 0, 40, 10, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 1, Route114_EventScript_1F27F2, 0
	object_event 2, EVENT_OBJ_GFX_POKEFAN_M, 0, 51, 9, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 3, Route114_EventScript_1F27C4, 0
	object_event 3, EVENT_OBJ_GFX_SUPER_NERD, 0, 47, 8, 7, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 3, Route114_EventScript_1F2640, 0
	object_event 4, EVENT_OBJ_GFX_BERRY_TREE, 0, 27, 16, 5, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, Route114_EventScript_1F2657, 0
	object_event 5, EVENT_OBJ_GFX_BERRY_TREE, 0, 28, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, Route114_EventScript_1F266E, 0
	object_event 6, EVENT_OBJ_GFX_BERRY_TREE, 0, 29, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, Route114_EventScript_1F2685, 0
	object_event 7, EVENT_OBJ_GFX_ITEM_BALL, 0, 6, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, Route114_EventScript_290E03, FLAG_ITEM_ROUTE_114_RARE_CANDY
	object_event 8, EVENT_OBJ_GFX_ITEM_BALL, 0, 33, 8, 4, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, Route114_EventScript_290E10, FLAG_ITEM_ROUTE_114_PROTEIN
	object_event 9, EVENT_OBJ_GFX_SUICUNE, 0, 26, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, Route114_EventScript_1F25D1, 0

Route42_MapWarps:
	warp_def 0, 8, 0, 0, MAP_ROUTE42_GATE
	warp_def 0, 9, 0, 1, MAP_ROUTE42_GATE
	warp_def 10, 5, 0, 0, MAP_MT_MORTAR_1F_OUTER
	warp_def 28, 9, 0, 1, MAP_MT_MORTAR_1F_OUTER
	warp_def 46, 7, 0, 2, MAP_MT_MORTAR_1F_OUTER

Route42_MapCoordEvents:
	coord_event 24, 14, 3, VAR_TEMP_0, 0, NULL

Route42_MapBGEvents:
	bg_event 4, 10, 0, BG_EVENT_PLAYER_FACING_ANY, Route114_EventScript_1F2625
	bg_event 7, 5, 0, BG_EVENT_PLAYER_FACING_ANY, Route114_EventScript_1F262E
	bg_event 45, 9, 3, BG_EVENT_PLAYER_FACING_ANY, Route114_EventScript_1F2637
	bg_event 54, 8, 3, BG_EVENT_PLAYER_FACING_ANY, Route114_EventScript_1F2637
	bg_hidden_item_event 16, 11, 3, ITEM_MAX_POTION, FLAG_HIDDEN_ITEM_ROUTE_114_CARBOS

Route42_MapEvents::
	map_events Route42_EventObjects, Route42_MapWarps, Route42_MapCoordEvents, Route42_MapBGEvents

