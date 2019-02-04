CeruleanCity_MapBorder::
	.incbin "data/layouts/CeruleanCity/border.bin"

CeruleanCity_MapBlockdata::
	.incbin "data/layouts/CeruleanCity/map.bin"

	.align 2
CeruleanCity_Layout::
	.4byte 40
	.4byte 36
	.4byte CeruleanCity_MapBorder
	.4byte CeruleanCity_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

