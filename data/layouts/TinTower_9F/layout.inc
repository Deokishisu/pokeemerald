TinTower_9F_MapBorder::
	.incbin "data/layouts/TinTower_9F/border.bin"

TinTower_9F_MapBlockdata::
	.incbin "data/layouts/TinTower_9F/map.bin"

	.align 2
TinTower_9F_Layout::
	.4byte 20
	.4byte 18
	.4byte TinTower_9F_MapBorder
	.4byte TinTower_9F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

