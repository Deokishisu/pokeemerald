TeamRocketBase_B3F_MapBorder::
	.incbin "data/layouts/TeamRocketBase_B3F/border.bin"

TeamRocketBase_B3F_MapBlockdata::
	.incbin "data/layouts/TeamRocketBase_B3F/map.bin"

	.align 2
TeamRocketBase_B3F_Layout::
	.4byte 30
	.4byte 18
	.4byte TeamRocketBase_B3F_MapBorder
	.4byte TeamRocketBase_B3F_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

