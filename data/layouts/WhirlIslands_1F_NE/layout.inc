WhirlIslands_1F_NE_MapBorder::
	.incbin "data/layouts/WhirlIslands_1F_NE/border.bin"

WhirlIslands_1F_NE_MapBlockdata::
	.incbin "data/layouts/WhirlIslands_1F_NE/map.bin"

	.align 2
WhirlIslands_1F_NE_Layout::
	.4byte 20
	.4byte 18
	.4byte WhirlIslands_1F_NE_MapBorder
	.4byte WhirlIslands_1F_NE_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

