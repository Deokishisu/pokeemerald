SproutTower_3F_MapBorder::
	.incbin "data/layouts/SproutTower_3F/border.bin"

SproutTower_3F_MapBlockdata::
	.incbin "data/layouts/SproutTower_3F/map.bin"

	.align 2
SproutTower_3F_Layout::
	.4byte 20
	.4byte 16
	.4byte SproutTower_3F_MapBorder
	.4byte SproutTower_3F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

