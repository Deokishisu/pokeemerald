Lighthouse_2F_MapBorder::
	.incbin "data/layouts/Lighthouse_2F/border.bin"

Lighthouse_2F_MapBlockdata::
	.incbin "data/layouts/Lighthouse_2F/map.bin"

	.align 2
Lighthouse_2F_Layout::
	.4byte 20
	.4byte 18
	.4byte Lighthouse_2F_MapBorder
	.4byte Lighthouse_2F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

