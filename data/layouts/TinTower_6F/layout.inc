TinTower_6F_MapBorder::
	.incbin "data/layouts/TinTower_6F/border.bin"

TinTower_6F_MapBlockdata::
	.incbin "data/layouts/TinTower_6F/map.bin"

	.align 2
TinTower_6F_Layout::
	.4byte 20
	.4byte 18
	.4byte TinTower_6F_MapBorder
	.4byte TinTower_6F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

