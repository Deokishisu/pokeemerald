MtMortar_2F_MapBorder::
	.incbin "data/layouts/MtMortar_2F/border.bin"

MtMortar_2F_MapBlockdata::
	.incbin "data/layouts/MtMortar_2F/map.bin"

	.align 2
MtMortar_2F_Layout::
	.4byte 40
	.4byte 36
	.4byte MtMortar_2F_MapBorder
	.4byte MtMortar_2F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

