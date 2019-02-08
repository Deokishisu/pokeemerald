PalletTown_ProfOaksLab_MapBorder::
	.incbin "data/layouts/PalletTown_ProfOaksLab/border.bin"

PalletTown_ProfOaksLab_MapBlockdata::
	.incbin "data/layouts/PalletTown_ProfOaksLab/map.bin"

	.align 2
PalletTown_ProfOaksLab_Layout::
	.4byte 10
	.4byte 12
	.4byte PalletTown_ProfOaksLab_MapBorder
	.4byte PalletTown_ProfOaksLab_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

