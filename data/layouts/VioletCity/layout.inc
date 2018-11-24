VioletCity_MapBorder::
	.incbin "data/layouts/VioletCity/border.bin"

VioletCity_MapBlockdata::
	.incbin "data/layouts/VioletCity/map.bin"

	.align 2
VioletCity_Layout::
	.4byte 40
	.4byte 36
	.4byte VioletCity_MapBorder
	.4byte VioletCity_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

