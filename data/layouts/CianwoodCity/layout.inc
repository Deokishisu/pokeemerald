CianwoodCity_MapBorder::
	.incbin "data/layouts/CianwoodCity/border.bin"

CianwoodCity_MapBlockdata::
	.incbin "data/layouts/CianwoodCity/map.bin"

	.align 2
CianwoodCity_Layout::
	.4byte 30
	.4byte 54
	.4byte CianwoodCity_MapBorder
	.4byte CianwoodCity_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

