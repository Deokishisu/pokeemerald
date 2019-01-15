IcePath_1F_MapBorder::
	.incbin "data/layouts/IcePath_1F/border.bin"

IcePath_1F_MapBlockdata::
	.incbin "data/layouts/IcePath_1F/map.bin"

	.align 2
IcePath_1F_Layout::
	.4byte 40
	.4byte 36
	.4byte IcePath_1F_MapBorder
	.4byte IcePath_1F_MapBlockdata
	.4byte gTileset_Special
	.4byte gTileset_Petalburg

