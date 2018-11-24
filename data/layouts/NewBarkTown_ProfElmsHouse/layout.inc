NewBarkTown_ProfElmsHouse_MapBorder::
	.incbin "data/layouts/NewBarkTown_ProfElmsHouse/border.bin"

NewBarkTown_ProfElmsHouse_MapBlockdata::
	.incbin "data/layouts/NewBarkTown_ProfElmsHouse/map.bin"

	.align 2
NewBarkTown_ProfElmsHouse_Layout::
	.4byte 8
	.4byte 8
	.4byte NewBarkTown_ProfElmsHouse_MapBorder
	.4byte NewBarkTown_ProfElmsHouse_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

