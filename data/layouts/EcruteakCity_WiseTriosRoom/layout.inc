EcruteakCity_WiseTriosRoom_MapBorder::
	.incbin "data/layouts/EcruteakCity_WiseTriosRoom/border.bin"

EcruteakCity_WiseTriosRoom_MapBlockdata::
	.incbin "data/layouts/EcruteakCity_WiseTriosRoom/map.bin"

	.align 2
EcruteakCity_WiseTriosRoom_Layout::
	.4byte 8
	.4byte 8
	.4byte EcruteakCity_WiseTriosRoom_MapBorder
	.4byte EcruteakCity_WiseTriosRoom_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

