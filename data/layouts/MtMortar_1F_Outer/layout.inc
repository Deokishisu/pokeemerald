MtMortar_1F_Outer_MapBorder::
	.incbin "data/layouts/MtMortar_1F_Outer/border.bin"

MtMortar_1F_Outer_MapBlockdata::
	.incbin "data/layouts/MtMortar_1F_Outer/map.bin"

	.align 2
MtMortar_1F_Outer_Layout::
	.4byte 40
	.4byte 36
	.4byte MtMortar_1F_Outer_MapBorder
	.4byte MtMortar_1F_Outer_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

