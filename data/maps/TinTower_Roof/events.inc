TinTower_Roof_EventObjects:
	object_event 1, EVENT_OBJ_GFX_CAL, 0, 9, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, 0x0, 0

TinTower_Roof_MapWarps:
	warp_def 9, 11, 3, 3, MAP_TIN_TOWER_9F

TinTower_Roof_MapCoordEvents:
	coord_event 0, 0, 3, VAR_0x40A2, 0, SeafloorCavern_Room9_EventScript_234DC9

TinTower_Roof_MapEvents::
	map_events TinTower_Roof_EventObjects, TinTower_Roof_MapWarps, TinTower_Roof_MapCoordEvents, 0x0

