PalletTown_RedsHouse_1F_MapBorder::
	.incbin "data/layouts/PalletTown_RedsHouse_1F/border.bin"

PalletTown_RedsHouse_1F_MapBlockdata::
	.incbin "data/layouts/PalletTown_RedsHouse_1F/map.bin"

	.align 2
PalletTown_RedsHouse_1F_Layout::
	.4byte 8
	.4byte 8
	.4byte PalletTown_RedsHouse_1F_MapBorder
	.4byte PalletTown_RedsHouse_1F_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

