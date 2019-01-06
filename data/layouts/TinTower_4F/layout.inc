TinTower_4F_MapBorder::
	.incbin "data/layouts/TinTower_4F/border.bin"

TinTower_4F_MapBlockdata::
	.incbin "data/layouts/TinTower_4F/map.bin"

	.align 2
TinTower_4F_Layout::
	.4byte 20
	.4byte 18
	.4byte TinTower_4F_MapBorder
	.4byte TinTower_4F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

