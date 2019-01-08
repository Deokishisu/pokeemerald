DarkCave_Violet_MapBorder::
	.incbin "data/layouts/DarkCave_Violet/border.bin"

DarkCave_Violet_MapBlockdata::
	.incbin "data/layouts/DarkCave_Violet/map.bin"

	.align 2
DarkCave_Violet_Layout::
	.4byte 40
	.4byte 36
	.4byte DarkCave_Violet_MapBorder
	.4byte DarkCave_Violet_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

