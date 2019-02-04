ViridianCity_MapBorder::
	.incbin "data/layouts/ViridianCity/border.bin"

ViridianCity_MapBlockdata::
	.incbin "data/layouts/ViridianCity/map.bin"

	.align 2
ViridianCity_Layout::
	.4byte 40
	.4byte 36
	.4byte ViridianCity_MapBorder
	.4byte ViridianCity_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

