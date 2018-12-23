BlackthornCity_House1_EventObjects: @ 8530C2C
	object_event 1, EVENT_OBJ_GFX_OLD_WOMAN, 0, 2, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, FortreeCity_House1_EventScript_2162BB, 0
	object_event 2, EVENT_OBJ_GFX_CAL, PAL_NPC_BLUE, 5, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FortreeCity_House1_EventScript_216368, 0

BlackthornCity_House1_MapWarps: @ 8530C74
	warp_def 2, 7, 0, 1, MAP_BLACKTHORN_CITY
	warp_def 2, 7, 0, 1, MAP_BLACKTHORN_CITY

BlackthornCity_House1_MapEvents:: @ 8530C84
	map_events BlackthornCity_House1_EventObjects, BlackthornCity_House1_MapWarps, 0x0, 0x0

