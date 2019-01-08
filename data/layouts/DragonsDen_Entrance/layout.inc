DragonsDen_Entrance_MapBorder::
	.incbin "data/layouts/DragonsDen_Entrance/border.bin"

DragonsDen_Entrance_MapBlockdata::
	.incbin "data/layouts/DragonsDen_Entrance/map.bin"

	.align 2
DragonsDen_Entrance_Layout::
	.4byte 10
	.4byte 18
	.4byte DragonsDen_Entrance_MapBorder
	.4byte DragonsDen_Entrance_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

