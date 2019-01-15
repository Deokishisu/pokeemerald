BattleTower_Exterior_MapBorder::
	.incbin "data/layouts/BattleTower_Exterior/border.bin"

BattleTower_Exterior_MapBlockdata::
	.incbin "data/layouts/BattleTower_Exterior/map.bin"

	.align 2
BattleTower_Exterior_Layout::
	.4byte 20
	.4byte 28
	.4byte BattleTower_Exterior_MapBorder
	.4byte BattleTower_Exterior_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

