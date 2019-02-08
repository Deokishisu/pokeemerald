PalletTown_RedsHouse_2F_MapBorder::
	.incbin "data/layouts/PalletTown_RedsHouse_2F/border.bin"

PalletTown_RedsHouse_2F_MapBlockdata::
	.incbin "data/layouts/PalletTown_RedsHouse_2F/map.bin"

	.align 2
PalletTown_RedsHouse_2F_Layout::
	.4byte 8
	.4byte 8
	.4byte PalletTown_RedsHouse_2F_MapBorder
	.4byte PalletTown_RedsHouse_2F_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

