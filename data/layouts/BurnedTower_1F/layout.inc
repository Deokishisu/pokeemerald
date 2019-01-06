BurnedTower_1F_MapBorder::
	.incbin "data/layouts/BurnedTower_1F/border.bin"

BurnedTower_1F_MapBlockdata::
	.incbin "data/layouts/BurnedTower_1F/map.bin"

	.align 2
BurnedTower_1F_Layout::
	.4byte 20
	.4byte 18
	.4byte BurnedTower_1F_MapBorder
	.4byte BurnedTower_1F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

