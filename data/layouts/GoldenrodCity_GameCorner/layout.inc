GoldenrodCity_GameCorner_MapBorder::
	.incbin "data/layouts/GoldenrodCity_GameCorner/border.bin"

GoldenrodCity_GameCorner_MapBlockdata::
	.incbin "data/layouts/GoldenrodCity_GameCorner/map.bin"

	.align 2
GoldenrodCity_GameCorner_Layout::
	.4byte 20
	.4byte 14
	.4byte GoldenrodCity_GameCorner_MapBorder
	.4byte GoldenrodCity_GameCorner_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

