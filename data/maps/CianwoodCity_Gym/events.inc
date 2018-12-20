CianwoodCity_Gym_EventObjects::
	object_event 1, EVENT_OBJ_GFX_CHUCK, PAL_NPC_BROWN, 4, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FortreeCity_Gym_EventScript_2165C8, 0
	object_event 2, EVENT_OBJ_GFX_BLACK_BELT, PAL_NPC_BROWN, 2, 12, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRUE, 3, FortreeCity_Gym_EventScript_2166A8, 0
	object_event 3, EVENT_OBJ_GFX_BLACK_BELT, PAL_NPC_BROWN, 7, 12, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRUE, 3, FortreeCity_Gym_EventScript_2166D6, 0
	object_event 4, EVENT_OBJ_GFX_BLACK_BELT, PAL_NPC_BROWN, 3, 9, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRUE, 2, FortreeCity_Gym_EventScript_2166ED, 0
	object_event 5, EVENT_OBJ_GFX_BLACK_BELT, PAL_NPC_BROWN, 5, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRUE, 1, FortreeCity_Gym_EventScript_2166BF, 0
	object_event 6, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 5, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FortreeCity_Gym_EventScript_216704, 0
	object_event 7, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 3, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FortreeCity_Gym_EventScript_21671B, 0
	object_event 8, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 4, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FortreeCity_Gym_EventScript_216732, 0
	object_event 9, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 5, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FortreeCity_Gym_EventScript_216732, 0

CianwoodCity_Gym_MapWarps::
	warp_def 4, 17, 0, 1, MAP_CIANWOOD_CITY
	warp_def 5, 17, 0, 1, MAP_CIANWOOD_CITY

CianwoodCity_Gym_MapBGEvents::
	bg_event 3, 15, 0, BG_EVENT_PLAYER_FACING_ANY, FortreeCity_Gym_EventScript_216751
	bg_event 6, 15, 0, BG_EVENT_PLAYER_FACING_ANY, FortreeCity_Gym_EventScript_216761

CianwoodCity_Gym_MapEvents::
	map_events CianwoodCity_Gym_EventObjects, CianwoodCity_Gym_MapWarps, 0x0, CianwoodCity_Gym_MapBGEvents
