BurnedTower_B1F_MapBorder::
	.incbin "data/layouts/BurnedTower_B1F/border.bin"

BurnedTower_B1F_MapBlockdata::
	.incbin "data/layouts/BurnedTower_B1F/map.bin"

	.align 2
BurnedTower_B1F_Layout::
	.4byte 20
	.4byte 18
	.4byte BurnedTower_B1F_MapBorder
	.4byte BurnedTower_B1F_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

