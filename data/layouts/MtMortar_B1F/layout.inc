MtMortar_B1F_MapBorder::
	.incbin "data/layouts/MtMortar_B1F/border.bin"

MtMortar_B1F_MapBlockdata::
	.incbin "data/layouts/MtMortar_B1F/map.bin"

	.align 2
MtMortar_B1F_Layout::
	.4byte 40
	.4byte 36
	.4byte MtMortar_B1F_MapBorder
	.4byte MtMortar_B1F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

