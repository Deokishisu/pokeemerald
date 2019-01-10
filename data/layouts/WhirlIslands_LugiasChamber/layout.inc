WhirlIslands_LugiasChamber_MapBorder::
	.incbin "data/layouts/WhirlIslands_LugiasChamber/border.bin"

WhirlIslands_LugiasChamber_MapBlockdata::
	.incbin "data/layouts/WhirlIslands_LugiasChamber/map.bin"

	.align 2
WhirlIslands_LugiasChamber_Layout::
	.4byte 20
	.4byte 18
	.4byte WhirlIslands_LugiasChamber_MapBorder
	.4byte WhirlIslands_LugiasChamber_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

