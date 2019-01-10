WhirlIslands_B1F_MapBorder::
	.incbin "data/layouts/WhirlIslands_B1F/border.bin"

WhirlIslands_B1F_MapBlockdata::
	.incbin "data/layouts/WhirlIslands_B1F/map.bin"

	.align 2
WhirlIslands_B1F_Layout::
	.4byte 40
	.4byte 36
	.4byte WhirlIslands_B1F_MapBorder
	.4byte WhirlIslands_B1F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

