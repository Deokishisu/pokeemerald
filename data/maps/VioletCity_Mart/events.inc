VioletCity_Mart_EventObjects:
	object_event 1, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 1, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, PetalburgCity_Mart_EventScript_207D69, 0
	object_event 2, EVENT_OBJ_GFX_OLD_WOMAN, 0, 7, 6, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, PetalburgCity_Mart_EventScript_207DE8, 0
	object_event 3, EVENT_OBJ_GFX_COOLTRAINER_M, 0, 5, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, PetalburgCity_Mart_EventScript_207DDF, 0

VioletCity_Mart_MapWarps:
	warp_def 3, 7, 0, 5, MAP_VIOLET_CITY
	warp_def 2, 7, 0, 5, MAP_VIOLET_CITY

VioletCity_Mart_MapEvents::
	map_events VioletCity_Mart_EventObjects, VioletCity_Mart_MapWarps, 0x0, 0x0

