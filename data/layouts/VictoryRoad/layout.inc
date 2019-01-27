VictoryRoad_MapBorder::
	.incbin "data/layouts/VictoryRoad/border.bin"

VictoryRoad_MapBlockdata::
	.incbin "data/layouts/VictoryRoad/map.bin"

	.align 2
VictoryRoad_Layout::
	.4byte 20
	.4byte 72
	.4byte VictoryRoad_MapBorder
	.4byte VictoryRoad_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

