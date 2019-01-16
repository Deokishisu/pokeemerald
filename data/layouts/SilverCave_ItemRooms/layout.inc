SilverCave_ItemRooms_MapBorder::
	.incbin "data/layouts/SilverCave_ItemRooms/border.bin"

SilverCave_ItemRooms_MapBlockdata::
	.incbin "data/layouts/SilverCave_ItemRooms/map.bin"

	.align 2
SilverCave_ItemRooms_Layout::
	.4byte 20
	.4byte 18
	.4byte SilverCave_ItemRooms_MapBorder
	.4byte SilverCave_ItemRooms_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

