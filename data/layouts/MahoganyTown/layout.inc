MahoganyTown_MapBorder::
	.incbin "data/layouts/MahoganyTown/border.bin"

MahoganyTown_MapBlockdata::
	.incbin "data/layouts/MahoganyTown/map.bin"

	.align 2
MahoganyTown_Layout::
	.4byte 20
	.4byte 18
	.4byte MahoganyTown_MapBorder
	.4byte MahoganyTown_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

