Route104_EventObjects::
	object_event 1, EVENT_OBJ_GFX_FAT_MAN, 3, 8, 49, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 1, Route104_EventScript_1ED35F, 0
	object_event 2, EVENT_OBJ_GFX_FAT_MAN, 3, 12, 56, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 3, Route104_EventScript_1ED43B, 0
	object_event 3, EVENT_OBJ_GFX_FAT_MAN, 3, 6, 48, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 1, Route104_EventScript_1ED4E9, 0
	object_event 4, EVENT_OBJ_GFX_YOUNGSTER, 2, 12, 22, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 3, Route104_EventScript_1ED597, 0
	object_event 5, EVENT_OBJ_GFX_YOUNGSTER, 2, 4, 63, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 3, Route104_EventScript_1ED5B6, 0
	object_event 6, EVENT_OBJ_GFX_YOUNGSTER, 3, 3, 45, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 3, Route104_EventScript_1ED5D5, 0
	object_event 7, EVENT_OBJ_GFX_LASS, 3, 10, 30, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 1, Route104_EventScript_1ED376, 0
	object_event 8, EVENT_OBJ_GFX_COOLTRAINER_M, 2, 19, 9, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, Route104_EventScript_1ED00F, 0
	object_event 9, EVENT_OBJ_GFX_YOUNGSTER, 2, 11, 82, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 3, Route104_EventScript_1ED38D, 0
	object_event 10, EVENT_OBJ_GFX_FAT_MAN, 0, 7, 70, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, Route104_EventScript_1ED006, 0
	object_event 11, EVENT_OBJ_GFX_ITEM_BALL, 1, 6, 53, 3, MOVEMENT_TYPE_NONE, 0, 0, 0, 0, Route104_EventScript_290CFF, FLAG_ITEM_ROUTE_104_PP_UP
	object_event 12, EVENT_OBJ_GFX_FAT_MAN, 2, 15, 13, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, Route104_EventScript_1ED045, 0
	object_event 13, EVENT_OBJ_GFX_LASS, 0, 12, 67, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, Route104_EventScript_1ED04E, 0
	object_event 14, EVENT_OBJ_GFX_ITEM_BALL, 1, 3, 30, 3, MOVEMENT_TYPE_NONE, 0, 0, 0, 0, Route104_EventScript_290D0C, FLAG_ITEM_ROUTE_104_POKE_BALL
	object_event 15, EVENT_OBJ_GFX_ITEM_BALL, 1, 0, 0, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, Route104_EventScript_290D19, FLAG_ITEM_ROUTE_104_X_ACCURACY

Route104_MapWarps::
	warp_def 4, 2, 0, 0, MAP_ROUTE32_GATE
	warp_def 4, 3, 0, 1, MAP_ROUTE32_GATE
	warp_def 11, 73, 3, 0, MAP_ROUTE32_POKEMON_CENTER_1F
	warp_def 7, 79, 3, 0, MAP_ROUTE105

Route104_MapCoordEvents::
	coord_event 17, 51, 3, VAR_0x4063, 1, Route104_EventScript_1ECCB3

Route104_MapBGEvents::
	bg_event 13, 5, 0, BG_EVENT_PLAYER_FACING_ANY, Route104_EventScript_1ED018
	bg_event 9, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Route104_EventScript_1ED021
	bg_event 10, 84, 0, BG_EVENT_PLAYER_FACING_ANY, Route104_EventScript_1ED02A
	bg_event 12, 73, 0, BG_EVENT_PLAYER_FACING_ANY, Route104_EventScript_1ED033
	bg_hidden_item_event 12, 67, 3, ITEM_SUPER_POTION, FLAG_HIDDEN_ITEM_ROUTE_104_SUPER_POTION
	bg_hidden_item_event 11, 40, 3, ITEM_POKE_BALL, FLAG_HIDDEN_ITEM_ROUTE_104_POKE_BALL
	bg_hidden_item_event -6, -6, 3, ITEM_ANTIDOTE, FLAG_HIDDEN_ITEM_ROUTE_104_ANTIDOTE
	bg_hidden_item_event -6, -6, 3, ITEM_HEART_SCALE, FLAG_HIDDEN_ITEM_ROUTE_104_HEART_SCALE

Route104_MapEvents::
	map_events Route104_EventObjects, Route104_MapWarps, Route104_MapCoordEvents, Route104_MapBGEvents
