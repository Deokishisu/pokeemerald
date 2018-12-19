GoldenrodCity_UndergroundSwitchRoomEntrances_MapBorder::
	.incbin "data/layouts/GoldenrodCity_UndergroundSwitchRoomEntrances/border.bin"

GoldenrodCity_UndergroundSwitchRoomEntrances_MapBlockdata::
	.incbin "data/layouts/GoldenrodCity_UndergroundSwitchRoomEntrances/map.bin"

	.align 2
GoldenrodCity_UndergroundSwitchRoomEntrances_Layout::
	.4byte 26
	.4byte 29
	.4byte GoldenrodCity_UndergroundSwitchRoomEntrances_MapBorder
	.4byte GoldenrodCity_UndergroundSwitchRoomEntrances_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

