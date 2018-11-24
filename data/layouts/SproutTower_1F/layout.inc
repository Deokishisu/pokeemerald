SproutTower_1F_MapBorder::
	.incbin "data/layouts/SproutTower_1F/border.bin"

SproutTower_1F_MapBlockdata::
	.incbin "data/layouts/SproutTower_1F/map.bin"

	.align 2
SproutTower_1F_Layout::
	.4byte 20
	.4byte 16
	.4byte SproutTower_1F_MapBorder
	.4byte SproutTower_1F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

