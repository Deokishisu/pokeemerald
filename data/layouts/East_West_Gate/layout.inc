East_West_Gate_MapBorder::
	.incbin "data/layouts/East_West_Gate/border.bin"

East_West_Gate_MapBlockdata::
	.incbin "data/layouts/East_West_Gate/map.bin"

	.align 2
East_West_Gate_Layout::
	.4byte 10
	.4byte 8
	.4byte East_West_Gate_MapBorder
	.4byte East_West_Gate_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

