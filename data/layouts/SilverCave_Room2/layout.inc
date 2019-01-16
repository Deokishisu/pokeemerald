SilverCave_Room2_MapBorder::
	.incbin "data/layouts/SilverCave_Room2/border.bin"

SilverCave_Room2_MapBlockdata::
	.incbin "data/layouts/SilverCave_Room2/map.bin"

	.align 2
SilverCave_Room2_Layout::
	.4byte 30
	.4byte 36
	.4byte SilverCave_Room2_MapBorder
	.4byte SilverCave_Room2_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

