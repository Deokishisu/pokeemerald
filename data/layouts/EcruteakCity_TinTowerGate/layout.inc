EcruteakCity_TinTowerGate_MapBorder::
	.incbin "data/layouts/EcruteakCity_TinTowerGate/border.bin"

EcruteakCity_TinTowerGate_MapBlockdata::
	.incbin "data/layouts/EcruteakCity_TinTowerGate/map.bin"

	.align 2
EcruteakCity_TinTowerGate_Layout::
	.4byte 22
	.4byte 18
	.4byte EcruteakCity_TinTowerGate_MapBorder
	.4byte EcruteakCity_TinTowerGate_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

