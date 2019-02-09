GoldenrodCity_MagnetTrainStation_EventObjects:
	object_event 1, EVENT_OBJ_GFX_OFFICER, 0, 9, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, SlateportCity_SternsShipyard_1F_EventScript_207F40, 0
	object_event 2, EVENT_OBJ_GFX_GENTLEMAN, 0, 11, 14, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 2, 0, 0, SlateportCity_SternsShipyard_1F_EventScript_207FED, 0

GoldenrodCity_MagnetTrainStation_MapWarps:
	warp_def 8, 17, 0, 4, MAP_GOLDENROD_CITY
	warp_def 9, 17, 0, 4, MAP_GOLDENROD_CITY
	warp_def 6, 5, 0, 0, MAP_GOLDENROD_CITY
	warp_def 11, 5, 0, 0, MAP_GOLDENROD_CITY

GoldenrodCity_MagnetTrainStation_MapEvents::
	map_events GoldenrodCity_MagnetTrainStation_EventObjects, GoldenrodCity_MagnetTrainStation_MapWarps, 0x0, 0x0

