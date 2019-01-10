WhirlIslands_1F_NW_MapBorder::
	.incbin "data/layouts/WhirlIslands_1F_NW/border.bin"

WhirlIslands_1F_NW_MapBlockdata::
	.incbin "data/layouts/WhirlIslands_1F_NW/map.bin"

	.align 2
WhirlIslands_1F_NW_Layout::
	.4byte 10
	.4byte 18
	.4byte WhirlIslands_1F_NW_MapBorder
	.4byte WhirlIslands_1F_NW_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

