Lighthouse_3F_MapBorder::
	.incbin "data/layouts/Lighthouse_3F/border.bin"

Lighthouse_3F_MapBlockdata::
	.incbin "data/layouts/Lighthouse_3F/map.bin"

	.align 2
Lighthouse_3F_Layout::
	.4byte 20
	.4byte 18
	.4byte Lighthouse_3F_MapBorder
	.4byte Lighthouse_3F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

