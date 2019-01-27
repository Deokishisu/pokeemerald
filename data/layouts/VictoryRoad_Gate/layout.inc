VictoryRoad_Gate_MapBorder::
	.incbin "data/layouts/VictoryRoad_Gate/border.bin"

VictoryRoad_Gate_MapBlockdata::
	.incbin "data/layouts/VictoryRoad_Gate/map.bin"

	.align 2
VictoryRoad_Gate_Layout::
	.4byte 20
	.4byte 18
	.4byte VictoryRoad_Gate_MapBorder
	.4byte VictoryRoad_Gate_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

