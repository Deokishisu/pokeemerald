OlivineCity_PortPassage_MapBorder::
	.incbin "data/layouts/OlivineCity_PortPassage/border.bin"

OlivineCity_PortPassage_MapBlockdata::
	.incbin "data/layouts/OlivineCity_PortPassage/map.bin"

	.align 2
OlivineCity_PortPassage_Layout::
	.4byte 8
	.4byte 28
	.4byte OlivineCity_PortPassage_MapBorder
	.4byte OlivineCity_PortPassage_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

