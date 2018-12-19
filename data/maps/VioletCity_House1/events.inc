VioletCity_House1_EventObjects::
	object_event 1, EVENT_OBJ_GFX_TEACHER, PAL_NPC_RED, 2, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, PetalburgCity_House1_EventScript_2077A3, 0
	object_event 2, EVENT_OBJ_GFX_LASS, PAL_NPC_GREEN, 6, 4, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, PetalburgCity_House1_EventScript_20779A, 0
	object_event 3, EVENT_OBJ_GFX_BIRD, PAL_NPC_BROWN, 5, 2, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, PetalburgCity_House1_EventScript_20779A, 0

VioletCity_House1_MapWarps::
	warp_def 3, 7, 0, 0, MAP_VIOLET_CITY
	warp_def 4, 7, 0, 0, MAP_VIOLET_CITY

VioletCity_House1_MapEvents::
	map_events VioletCity_House1_EventObjects, VioletCity_House1_MapWarps, 0x0, 0x0
