North_South_Gate_MapBorder::
	.incbin "data/layouts/North_South_Gate/border.bin"

North_South_Gate_MapBlockdata::
	.incbin "data/layouts/North_South_Gate/map.bin"

	.align 2
North_South_Gate_Layout::
	.4byte 10
	.4byte 8
	.4byte North_South_Gate_MapBorder
	.4byte North_South_Gate_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

