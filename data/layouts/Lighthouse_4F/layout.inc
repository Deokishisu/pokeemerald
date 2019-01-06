Lighthouse_4F_MapBorder::
	.incbin "data/layouts/Lighthouse_4F/border.bin"

Lighthouse_4F_MapBlockdata::
	.incbin "data/layouts/Lighthouse_4F/map.bin"

	.align 2
Lighthouse_4F_Layout::
	.4byte 20
	.4byte 18
	.4byte Lighthouse_4F_MapBorder
	.4byte Lighthouse_4F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

