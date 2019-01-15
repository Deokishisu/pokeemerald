IcePath_B2F_Blackthorn_MapBorder::
	.incbin "data/layouts/IcePath_B2F_Blackthorn/border.bin"

IcePath_B2F_Blackthorn_MapBlockdata::
	.incbin "data/layouts/IcePath_B2F_Blackthorn/map.bin"

	.align 2
IcePath_B2F_Blackthorn_Layout::
	.4byte 10
	.4byte 18
	.4byte IcePath_B2F_Blackthorn_MapBorder
	.4byte IcePath_B2F_Blackthorn_MapBlockdata
	.4byte gTileset_Special
	.4byte gTileset_Petalburg

