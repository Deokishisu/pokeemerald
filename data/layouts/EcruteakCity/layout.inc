EcruteakCity_MapBorder::
	.incbin "data/layouts/EcruteakCity/border.bin"

EcruteakCity_MapBlockdata::
	.incbin "data/layouts/EcruteakCity/map.bin"

	.align 2
EcruteakCity_Layout::
	.4byte 40
	.4byte 36
	.4byte EcruteakCity_MapBorder
	.4byte EcruteakCity_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

