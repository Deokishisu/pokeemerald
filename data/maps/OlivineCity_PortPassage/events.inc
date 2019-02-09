OlivineCity_PortPassage_EventObjects:
	object_event 1, EVENT_OBJ_GFX_POKEFAN_M, 0, 5, 1, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, RustboroCity_Flat1_1F_EventScript_2150CE, 0

OlivineCity_PortPassage_MapWarps:
	warp_def 3, 0, 0, 9, MAP_OLIVINE_CITY
	warp_def 4, 0, 0, 10, MAP_OLIVINE_CITY
	warp_def 3, 4, 0, 3, MAP_OLIVINE_CITY_PORT_PASSAGE
	warp_def 3, 13, 3, 2, MAP_OLIVINE_CITY_PORT_PASSAGE
	warp_def 3, 25, 3, 0, MAP_OLIVINE_CITY_PORT

OlivineCity_PortPassage_MapEvents::
	map_events OlivineCity_PortPassage_EventObjects, OlivineCity_PortPassage_MapWarps, 0x0, 0x0

