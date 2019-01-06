DragonsDen_DragonShrine_MapBorder::
	.incbin "data/layouts/DragonsDen_DragonShrine/border.bin"

DragonsDen_DragonShrine_MapBlockdata::
	.incbin "data/layouts/DragonsDen_DragonShrine/map.bin"

	.align 2
DragonsDen_DragonShrine_Layout::
	.4byte 10
	.4byte 10
	.4byte DragonsDen_DragonShrine_MapBorder
	.4byte DragonsDen_DragonShrine_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

