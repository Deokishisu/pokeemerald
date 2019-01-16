BattleTower_Lobby_MapBorder::
	.incbin "data/layouts/BattleTower_Lobby/border.bin"

BattleTower_Lobby_MapBlockdata::
	.incbin "data/layouts/BattleTower_Lobby/map.bin"

	.align 2
BattleTower_Lobby_Layout::
	.4byte 16
	.4byte 10
	.4byte BattleTower_Lobby_MapBorder
	.4byte BattleTower_Lobby_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

