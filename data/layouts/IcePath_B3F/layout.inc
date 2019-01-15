IcePath_B3F_MapBorder::
	.incbin "data/layouts/IcePath_B3F/border.bin"

IcePath_B3F_MapBlockdata::
	.incbin "data/layouts/IcePath_B3F/map.bin"

	.align 2
IcePath_B3F_Layout::
	.4byte 20
	.4byte 18
	.4byte IcePath_B3F_MapBorder
	.4byte IcePath_B3F_MapBlockdata
	.4byte gTileset_Special
	.4byte gTileset_Petalburg

