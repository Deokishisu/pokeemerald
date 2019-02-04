PalletTown_MapBorder::
	.incbin "data/layouts/PalletTown/border.bin"

PalletTown_MapBlockdata::
	.incbin "data/layouts/PalletTown/map.bin"

	.align 2
PalletTown_Layout::
	.4byte 20
	.4byte 18
	.4byte PalletTown_MapBorder
	.4byte PalletTown_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

