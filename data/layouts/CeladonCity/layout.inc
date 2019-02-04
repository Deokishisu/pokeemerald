CeladonCity_MapBorder::
	.incbin "data/layouts/CeladonCity/border.bin"

CeladonCity_MapBlockdata::
	.incbin "data/layouts/CeladonCity/map.bin"

	.align 2
CeladonCity_Layout::
	.4byte 40
	.4byte 36
	.4byte CeladonCity_MapBorder
	.4byte CeladonCity_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

