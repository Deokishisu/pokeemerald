GoldenrodCity_UndergroundWarehouse_MapBorder::
	.incbin "data/layouts/GoldenrodCity_UndergroundWarehouse/border.bin"

GoldenrodCity_UndergroundWarehouse_MapBlockdata::
	.incbin "data/layouts/GoldenrodCity_UndergroundWarehouse/map.bin"

	.align 2
GoldenrodCity_UndergroundWarehouse_Layout::
	.4byte 20
	.4byte 18
	.4byte GoldenrodCity_UndergroundWarehouse_MapBorder
	.4byte GoldenrodCity_UndergroundWarehouse_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

