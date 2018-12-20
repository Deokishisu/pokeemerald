OlivineCity_Port_MapBorder::
	.incbin "data/layouts/OlivineCity_Port/border.bin"

OlivineCity_Port_MapBlockdata::
	.incbin "data/layouts/OlivineCity_Port/map.bin"

	.align 2
OlivineCity_Port_Layout::
	.4byte 20
	.4byte 36
	.4byte OlivineCity_Port_MapBorder
	.4byte OlivineCity_Port_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

