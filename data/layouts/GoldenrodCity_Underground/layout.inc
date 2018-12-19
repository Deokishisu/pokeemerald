GoldenrodCity_Underground_MapBorder::
	.incbin "data/layouts/GoldenrodCity_Underground/border.bin"

GoldenrodCity_Underground_MapBlockdata::
	.incbin "data/layouts/GoldenrodCity_Underground/map.bin"

	.align 2
GoldenrodCity_Underground_Layout::
	.4byte 30
	.4byte 36
	.4byte GoldenrodCity_Underground_MapBorder
	.4byte GoldenrodCity_Underground_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

