IcePath_B1F_MapBorder::
	.incbin "data/layouts/IcePath_B1F/border.bin"

IcePath_B1F_MapBlockdata::
	.incbin "data/layouts/IcePath_B1F/map.bin"

	.align 2
IcePath_B1F_Layout::
	.4byte 20
	.4byte 36
	.4byte IcePath_B1F_MapBorder
	.4byte IcePath_B1F_MapBlockdata
	.4byte gTileset_Special
	.4byte gTileset_Petalburg

