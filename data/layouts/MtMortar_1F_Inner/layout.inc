MtMortar_1F_Inner_MapBorder::
	.incbin "data/layouts/MtMortar_1F_Inner/border.bin"

MtMortar_1F_Inner_MapBlockdata::
	.incbin "data/layouts/MtMortar_1F_Inner/map.bin"

	.align 2
MtMortar_1F_Inner_Layout::
	.4byte 40
	.4byte 49
	.4byte MtMortar_1F_Inner_MapBorder
	.4byte MtMortar_1F_Inner_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

