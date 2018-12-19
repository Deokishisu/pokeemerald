GoldenrodCity_BikeShop_EventObjects::
	object_event 1, EVENT_OBJ_GFX_MART_EMPLOYEE, PAL_NPC_RED, 7, 2, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, MauvilleCity_BikeShop_EventScript_20EBBC, 0

GoldenrodCity_BikeShop_MapWarps::
	warp_def 2, 7, 0, 1, MAP_GOLDENROD_CITY
	warp_def 3, 7, 0, 1, MAP_GOLDENROD_CITY

GoldenrodCity_BikeShop_MapBGEvents::
	bg_event 1, 2, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_BikeShop_EventScript_20ED3A
	bg_event 0, 3, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_BikeShop_EventScript_20ED3A
	bg_event 1, 3, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_BikeShop_EventScript_20ED3A
	bg_event 0, 5, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_BikeShop_EventScript_20ED3A
	bg_event 1, 5, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_BikeShop_EventScript_20ED3A
	bg_event 0, 6, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_BikeShop_EventScript_20ED3A
	bg_event 1, 6, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_BikeShop_EventScript_20ED3A
	bg_event 6, 6, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_BikeShop_EventScript_20ED3A
	bg_event 7, 6, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_BikeShop_EventScript_20ED3A

GoldenrodCity_BikeShop_MapEvents::
	map_events GoldenrodCity_BikeShop_EventObjects, GoldenrodCity_BikeShop_MapWarps, 0x0, GoldenrodCity_BikeShop_MapBGEvents
