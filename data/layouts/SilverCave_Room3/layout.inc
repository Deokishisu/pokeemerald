SilverCave_Room3_MapBorder::
	.incbin "data/layouts/SilverCave_Room3/border.bin"

SilverCave_Room3_MapBlockdata::
	.incbin "data/layouts/SilverCave_Room3/map.bin"

	.align 2
SilverCave_Room3_Layout::
	.4byte 20
	.4byte 39
	.4byte SilverCave_Room3_MapBorder
	.4byte SilverCave_Room3_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

