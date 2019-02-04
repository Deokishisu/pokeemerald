PewterCity_MapBorder::
	.incbin "data/layouts/PewterCity/border.bin"

PewterCity_MapBlockdata::
	.incbin "data/layouts/PewterCity/map.bin"

	.align 2
PewterCity_Layout::
	.4byte 40
	.4byte 36
	.4byte PewterCity_MapBorder
	.4byte PewterCity_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

