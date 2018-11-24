NewBarkTown_House_MapBorder::
	.incbin "data/layouts/NewBarkTown_House/border.bin"

NewBarkTown_House_MapBlockdata::
	.incbin "data/layouts/NewBarkTown_House/map.bin"

	.align 2
NewBarkTown_House_Layout::
	.4byte 8
	.4byte 8
	.4byte NewBarkTown_House_MapBorder
	.4byte NewBarkTown_House_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

