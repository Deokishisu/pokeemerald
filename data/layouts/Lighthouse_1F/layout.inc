Lighthouse_1F_MapBorder::
	.incbin "data/layouts/Lighthouse_1F/border.bin"

Lighthouse_1F_MapBlockdata::
	.incbin "data/layouts/Lighthouse_1F/map.bin"

	.align 2
Lighthouse_1F_Layout::
	.4byte 20
	.4byte 18
	.4byte Lighthouse_1F_MapBorder
	.4byte Lighthouse_1F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

