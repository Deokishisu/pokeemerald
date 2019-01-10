WhirlIslands_B2F_MapBorder::
	.incbin "data/layouts/WhirlIslands_B2F/border.bin"

WhirlIslands_B2F_MapBlockdata::
	.incbin "data/layouts/WhirlIslands_B2F/map.bin"

	.align 2
WhirlIslands_B2F_Layout::
	.4byte 20
	.4byte 36
	.4byte WhirlIslands_B2F_MapBorder
	.4byte WhirlIslands_B2F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

