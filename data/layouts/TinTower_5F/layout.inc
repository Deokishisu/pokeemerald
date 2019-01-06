TinTower_5F_MapBorder::
	.incbin "data/layouts/TinTower_5F/border.bin"

TinTower_5F_MapBlockdata::
	.incbin "data/layouts/TinTower_5F/map.bin"

	.align 2
TinTower_5F_Layout::
	.4byte 20
	.4byte 18
	.4byte TinTower_5F_MapBorder
	.4byte TinTower_5F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

