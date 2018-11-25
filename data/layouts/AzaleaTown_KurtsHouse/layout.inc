AzaleaTown_KurtsHouse_MapBorder::
	.incbin "data/layouts/AzaleaTown_KurtsHouse/border.bin"

AzaleaTown_KurtsHouse_MapBlockdata::
	.incbin "data/layouts/AzaleaTown_KurtsHouse/map.bin"

	.align 2
AzaleaTown_KurtsHouse_Layout::
	.4byte 16
	.4byte 8
	.4byte AzaleaTown_KurtsHouse_MapBorder
	.4byte AzaleaTown_KurtsHouse_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

