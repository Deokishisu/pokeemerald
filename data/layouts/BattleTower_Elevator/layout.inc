BattleTower_Elevator_MapBorder::
	.incbin "data/layouts/BattleTower_Elevator/border.bin"

BattleTower_Elevator_MapBlockdata::
	.incbin "data/layouts/BattleTower_Elevator/map.bin"

	.align 2
BattleTower_Elevator_Layout::
	.4byte 4
	.4byte 4
	.4byte BattleTower_Elevator_MapBorder
	.4byte BattleTower_Elevator_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

