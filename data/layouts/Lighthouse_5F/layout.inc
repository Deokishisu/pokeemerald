Lighthouse_5F_MapBorder::
	.incbin "data/layouts/Lighthouse_5F/border.bin"

Lighthouse_5F_MapBlockdata::
	.incbin "data/layouts/Lighthouse_5F/map.bin"

	.align 2
Lighthouse_5F_Layout::
	.4byte 20
	.4byte 18
	.4byte Lighthouse_5F_MapBorder
	.4byte Lighthouse_5F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

