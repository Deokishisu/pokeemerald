EcruteakCity_DanceTheater_MapBorder::
	.incbin "data/layouts/EcruteakCity_DanceTheater/border.bin"

EcruteakCity_DanceTheater_MapBlockdata::
	.incbin "data/layouts/EcruteakCity_DanceTheater/map.bin"

	.align 2
EcruteakCity_DanceTheater_Layout::
	.4byte 12
	.4byte 14
	.4byte EcruteakCity_DanceTheater_MapBorder
	.4byte EcruteakCity_DanceTheater_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

