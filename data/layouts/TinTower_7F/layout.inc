TinTower_7F_MapBorder::
	.incbin "data/layouts/TinTower_7F/border.bin"

TinTower_7F_MapBlockdata::
	.incbin "data/layouts/TinTower_7F/map.bin"

	.align 2
TinTower_7F_Layout::
	.4byte 20
	.4byte 18
	.4byte TinTower_7F_MapBorder
	.4byte TinTower_7F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

