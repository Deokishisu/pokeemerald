Route35_National_Park_Gate_EventObjects::
	object_event 1, EVENT_OBJ_GFX_OFFICER, PAL_NPC_GREEN, 2, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_YOUNGSTER, PAL_NPC_RED, 6, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, FALSE, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_OFFICER, PAL_NPC_GREEN, 0, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, NULL, 0

Route35_National_Park_Gate_MapWarps::
	warp_def 3, 7, 3, 2, MAP_ROUTE35
	warp_def 4, 7, 3, 2, MAP_ROUTE35
	warp_def 3, 0, 3, 0, MAP_RUSTURF_TUNNEL
	warp_def 4, 0, 3, 1, MAP_RUSTURF_TUNNEL

Route35_National_Park_Gate_MapBGEvents::
	bg_event 5, 0, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

Route35_National_Park_Gate_MapEvents::
	map_events Route35_National_Park_Gate_EventObjects, Route35_National_Park_Gate_MapWarps, 0x0, Route35_National_Park_Gate_MapBGEvents
