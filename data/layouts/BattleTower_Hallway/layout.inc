BattleTower_Hallway_MapBorder::
	.incbin "data/layouts/BattleTower_Hallway/border.bin"

BattleTower_Hallway_MapBlockdata::
	.incbin "data/layouts/BattleTower_Hallway/map.bin"

	.align 2
BattleTower_Hallway_Layout::
	.4byte 22
	.4byte 4
	.4byte BattleTower_Hallway_MapBorder
	.4byte BattleTower_Hallway_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

