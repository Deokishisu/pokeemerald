WhirlIslands_Cave_MapBorder::
	.incbin "data/layouts/WhirlIslands_Cave/border.bin"

WhirlIslands_Cave_MapBlockdata::
	.incbin "data/layouts/WhirlIslands_Cave/map.bin"

	.align 2
WhirlIslands_Cave_Layout::
	.4byte 8
	.4byte 14
	.4byte WhirlIslands_Cave_MapBorder
	.4byte WhirlIslands_Cave_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

