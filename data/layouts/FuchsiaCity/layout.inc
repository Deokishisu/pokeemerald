FuchsiaCity_MapBorder::
	.incbin "data/layouts/FuchsiaCity/border.bin"

FuchsiaCity_MapBlockdata::
	.incbin "data/layouts/FuchsiaCity/map.bin"

	.align 2
FuchsiaCity_Layout::
	.4byte 40
	.4byte 36
	.4byte FuchsiaCity_MapBorder
	.4byte FuchsiaCity_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

