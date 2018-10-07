Mart_MapBorder::
	.incbin "data/layouts/Mart/border.bin"

Mart_MapBlockdata::
	.incbin "data/layouts/Mart/map.bin"

	.align 2
Mart_Layout::
	.4byte 12
	.4byte 8
	.4byte Mart_MapBorder
	.4byte Mart_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

