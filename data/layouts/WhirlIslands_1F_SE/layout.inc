WhirlIslands_1F_SE_MapBorder::
	.incbin "data/layouts/WhirlIslands_1F_SE/border.bin"

WhirlIslands_1F_SE_MapBlockdata::
	.incbin "data/layouts/WhirlIslands_1F_SE/map.bin"

	.align 2
WhirlIslands_1F_SE_Layout::
	.4byte 10
	.4byte 18
	.4byte WhirlIslands_1F_SE_MapBorder
	.4byte WhirlIslands_1F_SE_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

