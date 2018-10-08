VerdanturfTown_MapBorder::
	.incbin "data/layouts/VerdanturfTown/border.bin"

VerdanturfTown_MapBlockdata::
	.incbin "data/layouts/VerdanturfTown/map.bin"

	.align 2
VerdanturfTown_Layout::
	.4byte 20
	.4byte 18
	.4byte VerdanturfTown_MapBorder
	.4byte VerdanturfTown_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

