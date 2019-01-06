Lighthouse_6F_MapBorder::
	.incbin "data/layouts/Lighthouse_6F/border.bin"

Lighthouse_6F_MapBlockdata::
	.incbin "data/layouts/Lighthouse_6F/map.bin"

	.align 2
Lighthouse_6F_Layout::
	.4byte 20
	.4byte 18
	.4byte Lighthouse_6F_MapBorder
	.4byte Lighthouse_6F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

