NationalPark_MapBorder::
	.incbin "data/layouts/NationalPark/border.bin"

NationalPark_MapBlockdata::
	.incbin "data/layouts/NationalPark/map.bin"

	.align 2
NationalPark_Layout::
	.4byte 40
	.4byte 54
	.4byte NationalPark_MapBorder
	.4byte NationalPark_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

