SproutTower_2F_MapBorder::
	.incbin "data/layouts/SproutTower_2F/border.bin"

SproutTower_2F_MapBlockdata::
	.incbin "data/layouts/SproutTower_2F/map.bin"

	.align 2
SproutTower_2F_Layout::
	.4byte 20
	.4byte 16
	.4byte SproutTower_2F_MapBorder
	.4byte SproutTower_2F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

