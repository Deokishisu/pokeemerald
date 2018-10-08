CherrygroveCity_MapBorder::
	.incbin "data/layouts/CherrygroveCity/border.bin"

CherrygroveCity_MapBlockdata::
	.incbin "data/layouts/CherrygroveCity/map.bin"

	.align 2
CherrygroveCity_Layout::
	.4byte 40
	.4byte 18
	.4byte CherrygroveCity_MapBorder
	.4byte CherrygroveCity_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

