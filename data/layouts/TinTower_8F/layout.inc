TinTower_8F_MapBorder::
	.incbin "data/layouts/TinTower_8F/border.bin"

TinTower_8F_MapBlockdata::
	.incbin "data/layouts/TinTower_8F/map.bin"

	.align 2
TinTower_8F_Layout::
	.4byte 20
	.4byte 18
	.4byte TinTower_8F_MapBorder
	.4byte TinTower_8F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

