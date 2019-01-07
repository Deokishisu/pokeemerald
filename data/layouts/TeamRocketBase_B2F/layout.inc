TeamRocketBase_B2F_MapBorder::
	.incbin "data/layouts/TeamRocketBase_B2F/border.bin"

TeamRocketBase_B2F_MapBlockdata::
	.incbin "data/layouts/TeamRocketBase_B2F/map.bin"

	.align 2
TeamRocketBase_B2F_Layout::
	.4byte 30
	.4byte 18
	.4byte TeamRocketBase_B2F_MapBorder
	.4byte TeamRocketBase_B2F_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

