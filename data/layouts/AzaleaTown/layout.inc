AzaleaTown_MapBorder::
	.incbin "data/layouts/AzaleaTown/border.bin"

AzaleaTown_MapBlockdata::
	.incbin "data/layouts/AzaleaTown/map.bin"

	.align 2
AzaleaTown_Layout::
	.4byte 40
	.4byte 18
	.4byte AzaleaTown_MapBorder
	.4byte AzaleaTown_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

