IcePath_B2F_Mahogany_MapBorder::
	.incbin "data/layouts/IcePath_B2F_Mahogany/border.bin"

IcePath_B2F_Mahogany_MapBlockdata::
	.incbin "data/layouts/IcePath_B2F_Mahogany/map.bin"

	.align 2
IcePath_B2F_Mahogany_Layout::
	.4byte 20
	.4byte 18
	.4byte IcePath_B2F_Mahogany_MapBorder
	.4byte IcePath_B2F_Mahogany_MapBlockdata
	.4byte gTileset_Special
	.4byte gTileset_Petalburg

