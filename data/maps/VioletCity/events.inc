VioletCity_EventObjects:
	object_event 1, EVENT_OBJ_GFX_FAT_MAN, 0, 13, 16, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, PetalburgCity_EventScript_1DC3FD, 0
	object_event 2, EVENT_OBJ_GFX_LASS, 0, 28, 28, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 2, 0, 0, 0x0, 0
	object_event 3, EVENT_OBJ_GFX_SUPER_NERD, 0, 24, 14, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 2, 0, 0, PetalburgCity_EventScript_1DC3E6, 0
	object_event 4, EVENT_OBJ_GFX_OLD_MAN, 0, 17, 20, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, PetalburgCity_EventScript_1DC488, 0
	object_event 5, EVENT_OBJ_GFX_YOUNGSTER, 0, 5, 18, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, 0x0, 0
	object_event 6, EVENT_OBJ_GFX_BERRY_TREE, 0, 14, 29, 3, MOVEMENT_TYPE_NONE, 0, 0, 0, 0, PetalburgCity_EventScript_1DC82E, 0
	object_event 7, EVENT_OBJ_GFX_ITEM_BALL, 0, 4, 1, 3, MOVEMENT_TYPE_NONE, 0, 0, 0, 0, PetalburgCity_EventScript_2910B4, FLAG_ITEM_PETALBURG_CITY_MAX_REVIVE
	object_event 8, EVENT_OBJ_GFX_ITEM_BALL, 0, 35, 5, 3, MOVEMENT_TYPE_NONE, 0, 0, 0, 0, PetalburgCity_EventScript_2910C1, FLAG_ITEM_PETALBURG_CITY_ETHER

VioletCity_MapWarps:
	warp_def 3, 15, 0, 0, MAP_VIOLET_CITY_HOUSE1
	warp_def 30, 17, 0, 0, MAP_VIOLET_CITY_EARLS_POKEMON_ACADEMY
	warp_def 18, 17, 0, 0, MAP_VIOLET_CITY_GYM
	warp_def 31, 25, 0, 0, MAP_VIOLET_CITY_POKEMON_CENTER_1F
	warp_def 21, 29, 0, 0, MAP_VIOLET_CITY_HOUSE2
	warp_def 9, 17, 0, 0, MAP_VIOLET_CITY_MART
	warp_def 39, 24, 3, 2, MAP_ROUTE31_GATE
	warp_def 39, 25, 3, 3, MAP_ROUTE31_GATE
	warp_def 23, 5, 3, 0, MAP_SPROUT_TOWER_1F

VioletCity_MapCoordEvents:
	coord_event 8, 10, 3, VAR_0x4057, 0, PetalburgCity_EventScript_1DC49A
	coord_event 8, 11, 3, VAR_0x4057, 0, PetalburgCity_EventScript_1DC4A6
	coord_event 8, 12, 3, VAR_0x4057, 0, PetalburgCity_EventScript_1DC4B2
	coord_event 8, 13, 3, VAR_0x4057, 0, PetalburgCity_EventScript_1DC4BE
	coord_event 4, 10, 3, VAR_0x40C9, 0, PetalburgCity_EventScript_1DC691
	coord_event 4, 11, 3, VAR_0x40C9, 0, PetalburgCity_EventScript_1DC6A7
	coord_event 4, 12, 3, VAR_0x40C9, 0, PetalburgCity_EventScript_1DC6BD
	coord_event 4, 13, 3, VAR_0x40C9, 0, PetalburgCity_EventScript_1DC6D3

VioletCity_MapBGEvents:
	bg_event 15, 17, 0, BG_EVENT_PLAYER_FACING_ANY, PetalburgCity_EventScript_1DC476
	bg_event 10, 17, 0, BG_EVENT_PLAYER_FACING_NORTH, PetalburgCity_EventScript_271E6A
	bg_event 32, 25, 0, BG_EVENT_PLAYER_FACING_NORTH, PetalburgCity_EventScript_271E73
	bg_event 17, 16, 0, BG_EVENT_PLAYER_FACING_ANY, PetalburgCity_EventScript_1DC47F
	bg_event 32, 23, 0, BG_EVENT_PLAYER_FACING_NORTH, PetalburgCity_EventScript_271E73
	bg_event 10, 15, 0, BG_EVENT_PLAYER_FACING_NORTH, PetalburgCity_EventScript_271E6A
	bg_event 10, 9, 0, BG_EVENT_PLAYER_FACING_ANY, PetalburgCity_EventScript_1DC491
	bg_hidden_item_event 37, 14, 3, ITEM_HYPER_POTION, FLAG_HIDDEN_ITEM_PETALBURG_CITY_RARE_CANDY

VioletCity_MapEvents::
	map_events VioletCity_EventObjects, VioletCity_MapWarps, VioletCity_MapCoordEvents, VioletCity_MapBGEvents

