GoldenrodCity_Underground_EventObjects:
	object_event 1, EVENT_OBJ_GFX_SUPER_NERD, 0, 5, 31, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 3, SlateportCity_OceanicMuseum_1F_EventScript_20AD96, 0
	object_event 2, EVENT_OBJ_GFX_SUPER_NERD, 0, 6, 9, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 2, SlateportCity_OceanicMuseum_1F_EventScript_20AE5F, FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
	object_event 3, EVENT_OBJ_GFX_SUPER_NERD, 0, 3, 27, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 2, SlateportCity_OceanicMuseum_1F_EventScript_20AE68, FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
	object_event 4, EVENT_OBJ_GFX_SUPER_NERD, 0, 2, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 3, SlateportCity_OceanicMuseum_1F_EventScript_20AE56, FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
	object_event 5, EVENT_OBJ_GFX_ITEM_BALL, 0, 7, 25, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, SlateportCity_OceanicMuseum_1F_EventScript_20AE4D, FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
	object_event 6, EVENT_OBJ_GFX_OLD_MAN, 0, 7, 11, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, SlateportCity_OceanicMuseum_1F_EventScript_20AE71, FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
	object_event 7, EVENT_OBJ_GFX_SUPER_NERD, 0, 7, 14, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, SlateportCity_OceanicMuseum_1F_EventScript_20AD96, 0
	object_event 8, EVENT_OBJ_GFX_SUPER_NERD, 0, 7, 15, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, SlateportCity_OceanicMuseum_1F_EventScript_20AE7A, FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
	object_event 9, EVENT_OBJ_GFX_OLD_WOMAN, 0, 7, 21, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, SlateportCity_OceanicMuseum_1F_EventScript_20AED4, FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION

GoldenrodCity_Underground_MapWarps:
	warp_def 3, 2, 0, 6, MAP_GOLDENROD_CITY_UNDERGROUND_SWITCH_ROOM_ENTRANCES
	warp_def 3, 34, 0, 3, MAP_GOLDENROD_CITY_UNDERGROUND_SWITCH_ROOM_ENTRANCES
	warp_def 18, 6, 0, 3, MAP_GOLDENROD_CITY_UNDERGROUND
	warp_def 21, 31, 0, 2, MAP_GOLDENROD_CITY_UNDERGROUND
	warp_def 22, 31, 0, 2, MAP_GOLDENROD_CITY_UNDERGROUND
	warp_def 22, 27, 0, 0, MAP_GOLDENROD_CITY_UNDERGROUND_SWITCH_ROOM_ENTRANCES

GoldenrodCity_Underground_MapBGEvents:
	bg_event 18, 6, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_1F_EventScript_20AE83
	bg_event 19, 6, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_1F_EventScript_20AE8C
	bg_event 6, 13, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_1F_EventScript_20AE95
	bg_event 4, 18, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_1F_EventScript_20AE9E
	bg_event 17, 8, 0, BG_EVENT_PLAYER_FACING_ANY, SlateportCity_OceanicMuseum_1F_EventScript_20AE95

GoldenrodCity_Underground_MapEvents::
	map_events GoldenrodCity_Underground_EventObjects, GoldenrodCity_Underground_MapWarps, 0x0, GoldenrodCity_Underground_MapBGEvents

