FallarborTown_MapBorder::
	.incbin "data/layouts/FallarborTown/border.bin"

FallarborTown_MapBlockdata::
	.incbin "data/layouts/FallarborTown/map.bin"

	.align 2
FallarborTown_Layout::
	.4byte 30
	.4byte 54
	.4byte FallarborTown_MapBorder
	.4byte FallarborTown_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Fallarbor

