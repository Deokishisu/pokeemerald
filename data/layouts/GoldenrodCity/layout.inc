GoldenrodCity_MapBorder::
	.incbin "data/layouts/GoldenrodCity/border.bin"

GoldenrodCity_MapBlockdata::
	.incbin "data/layouts/GoldenrodCity/map.bin"

	.align 2
GoldenrodCity_Layout::
	.4byte 40
	.4byte 36
	.4byte GoldenrodCity_MapBorder
	.4byte GoldenrodCity_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

