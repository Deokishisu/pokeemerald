WhirlIslands_1F_SW_MapBorder::
	.incbin "data/layouts/WhirlIslands_1F_SW/border.bin"

WhirlIslands_1F_SW_MapBlockdata::
	.incbin "data/layouts/WhirlIslands_1F_SW/map.bin"

	.align 2
WhirlIslands_1F_SW_Layout::
	.4byte 20
	.4byte 18
	.4byte WhirlIslands_1F_SW_MapBorder
	.4byte WhirlIslands_1F_SW_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

