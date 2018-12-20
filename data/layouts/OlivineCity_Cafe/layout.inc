OlivineCity_Cafe_MapBorder::
	.incbin "data/layouts/OlivineCity_Cafe/border.bin"

OlivineCity_Cafe_MapBlockdata::
	.incbin "data/layouts/OlivineCity_Cafe/map.bin"

	.align 2
OlivineCity_Cafe_Layout::
	.4byte 8
	.4byte 8
	.4byte OlivineCity_Cafe_MapBorder
	.4byte OlivineCity_Cafe_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

