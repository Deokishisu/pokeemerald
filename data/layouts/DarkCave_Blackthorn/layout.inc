DarkCave_Blackthorn_MapBorder::
	.incbin "data/layouts/DarkCave_Blackthorn/border.bin"

DarkCave_Blackthorn_MapBlockdata::
	.incbin "data/layouts/DarkCave_Blackthorn/map.bin"

	.align 2
DarkCave_Blackthorn_Layout::
	.4byte 30
	.4byte 29
	.4byte DarkCave_Blackthorn_MapBorder
	.4byte DarkCave_Blackthorn_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

