GoldenrodCity_BikeShop_MapBorder::
	.incbin "data/layouts/GoldenrodCity_BikeShop/border.bin"

GoldenrodCity_BikeShop_MapBlockdata::
	.incbin "data/layouts/GoldenrodCity_BikeShop/map.bin"

	.align 2
GoldenrodCity_BikeShop_Layout::
	.4byte 8
	.4byte 8
	.4byte GoldenrodCity_BikeShop_MapBorder
	.4byte GoldenrodCity_BikeShop_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

