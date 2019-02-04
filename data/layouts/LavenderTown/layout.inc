LavenderTown_MapBorder::
	.incbin "data/layouts/LavenderTown/border.bin"

LavenderTown_MapBlockdata::
	.incbin "data/layouts/LavenderTown/map.bin"

	.align 2
LavenderTown_Layout::
	.4byte 20
	.4byte 18
	.4byte LavenderTown_MapBorder
	.4byte LavenderTown_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

