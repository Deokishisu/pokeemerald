VermilionCity_MapBorder::
	.incbin "data/layouts/VermilionCity/border.bin"

VermilionCity_MapBlockdata::
	.incbin "data/layouts/VermilionCity/map.bin"

	.align 2
VermilionCity_Layout::
	.4byte 40
	.4byte 36
	.4byte VermilionCity_MapBorder
	.4byte VermilionCity_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

