SaffronCity_MapBorder::
	.incbin "data/layouts/SaffronCity/border.bin"

SaffronCity_MapBlockdata::
	.incbin "data/layouts/SaffronCity/map.bin"

	.align 2
SaffronCity_Layout::
	.4byte 40
	.4byte 36
	.4byte SaffronCity_MapBorder
	.4byte SaffronCity_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

