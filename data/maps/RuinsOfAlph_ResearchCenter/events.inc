RuinsOfAlph_ResearchCenter_EventObjects::
	object_event 1, EVENT_OBJ_GFX_SCIENTIST, PAL_NPC_BLUE, 4, 5, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_SCIENTIST, PAL_NPC_BLUE, 5, 2, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 1, FALSE, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_SCIENTIST, PAL_NPC_BLUE, 2, 5, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, FALSE, 0, NULL, 0

RuinsOfAlph_ResearchCenter_MapWarps::
	warp_def 2, 7, 3, 2, MAP_RUINS_OF_ALPH_EXTERIOR
	warp_def 3, 7, 3, 2, MAP_RUINS_OF_ALPH_EXTERIOR

RuinsOfAlph_ResearchCenter_MapBGEvents::
	bg_event 6, 5, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 3, 4, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 7, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

RuinsOfAlph_ResearchCenter_MapEvents::
	map_events RuinsOfAlph_ResearchCenter_EventObjects, RuinsOfAlph_ResearchCenter_MapWarps, 0x0, RuinsOfAlph_ResearchCenter_MapBGEvents
