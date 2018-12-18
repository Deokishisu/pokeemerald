OlivineCity_MapBorder::
	.incbin "data/layouts/OlivineCity/border.bin"

OlivineCity_MapBlockdata::
	.incbin "data/layouts/OlivineCity/map.bin"

	.align 2
OlivineCity_Layout::
	.4byte 40
	.4byte 36
	.4byte OlivineCity_MapBorder
	.4byte OlivineCity_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

