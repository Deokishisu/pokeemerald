TeamRocketBase_B1F_MapBorder::
	.incbin "data/layouts/TeamRocketBase_B1F/border.bin"

TeamRocketBase_B1F_MapBlockdata::
	.incbin "data/layouts/TeamRocketBase_B1F/map.bin"

	.align 2
TeamRocketBase_B1F_Layout::
	.4byte 30
	.4byte 18
	.4byte TeamRocketBase_B1F_MapBorder
	.4byte TeamRocketBase_B1F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

