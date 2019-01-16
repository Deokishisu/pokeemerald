SilverCave_Room1_MapBorder::
	.incbin "data/layouts/SilverCave_Room1/border.bin"

SilverCave_Room1_MapBlockdata::
	.incbin "data/layouts/SilverCave_Room1/map.bin"

	.align 2
SilverCave_Room1_Layout::
	.4byte 20
	.4byte 36
	.4byte SilverCave_Room1_MapBorder
	.4byte SilverCave_Room1_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

