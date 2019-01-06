TinTower_2F_MapBorder::
	.incbin "data/layouts/TinTower_2F/border.bin"

TinTower_2F_MapBlockdata::
	.incbin "data/layouts/TinTower_2F/map.bin"

	.align 2
TinTower_2F_Layout::
	.4byte 20
	.4byte 18
	.4byte TinTower_2F_MapBorder
	.4byte TinTower_2F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

