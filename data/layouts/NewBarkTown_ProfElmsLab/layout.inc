NewBarkTown_ProfElmsLab_MapBorder::
	.incbin "data/layouts/NewBarkTown_ProfElmsLab/border.bin"

NewBarkTown_ProfElmsLab_MapBlockdata::
	.incbin "data/layouts/NewBarkTown_ProfElmsLab/map.bin"

	.align 2
NewBarkTown_ProfElmsLab_Layout::
	.4byte 10
	.4byte 12
	.4byte NewBarkTown_ProfElmsLab_MapBorder
	.4byte NewBarkTown_ProfElmsLab_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

