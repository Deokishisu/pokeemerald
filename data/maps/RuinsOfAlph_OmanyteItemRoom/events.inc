RuinsOfAlph_OmanyteItemRoom_EventObjects:
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 2, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 5, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_ITEM_BALL, 0, 2, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_ITEM_BALL, 0, 5, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

RuinsOfAlph_OmanyteItemRoom_MapWarps:
	warp_def 3, 9, 3, 4, MAP_RUINS_OF_ALPH_OMANYTE_PUZZLE_CHAMBER
	warp_def 4, 9, 3, 4, MAP_RUINS_OF_ALPH_OMANYTE_PUZZLE_CHAMBER
	warp_def 3, 1, 3, 0, MAP_RUINS_OF_ALPH_OMANYTE_WORD_ROOM
	warp_def 4, 1, 3, 1, MAP_RUINS_OF_ALPH_OMANYTE_WORD_ROOM

RuinsOfAlph_OmanyteItemRoom_MapBGEvents:
	bg_event 2, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 5, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

RuinsOfAlph_OmanyteItemRoom_MapEvents::
	map_events RuinsOfAlph_OmanyteItemRoom_EventObjects, RuinsOfAlph_OmanyteItemRoom_MapWarps, 0x0, RuinsOfAlph_OmanyteItemRoom_MapBGEvents

