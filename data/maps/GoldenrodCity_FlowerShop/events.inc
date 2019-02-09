GoldenrodCity_FlowerShop_EventObjects:
	object_event 1, EVENT_OBJ_GFX_TEACHER, 0, 2, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, 0x0, 0
	object_event 2, EVENT_OBJ_GFX_LASS, 0, 5, 6, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, SlateportCity_SternsShipyard_2F_EventScript_20863E, 0

GoldenrodCity_FlowerShop_MapWarps:
	warp_def 2, 7, 0, 5, MAP_GOLDENROD_CITY
	warp_def 3, 7, 0, 5, MAP_GOLDENROD_CITY

GoldenrodCity_FlowerShop_MapEvents::
	map_events GoldenrodCity_FlowerShop_EventObjects, GoldenrodCity_FlowerShop_MapWarps, 0x0, 0x0

