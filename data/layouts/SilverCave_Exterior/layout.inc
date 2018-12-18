SilverCave_Exterior_MapBorder::
	.incbin "data/layouts/SilverCave_Exterior/border.bin"

SilverCave_Exterior_MapBlockdata::
	.incbin "data/layouts/SilverCave_Exterior/map.bin"

	.align 2
SilverCave_Exterior_Layout::
	.4byte 40
	.4byte 36
	.4byte SilverCave_Exterior_MapBorder
	.4byte SilverCave_Exterior_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

