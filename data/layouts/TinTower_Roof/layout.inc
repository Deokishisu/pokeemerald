TinTower_Roof_MapBorder::
	.incbin "data/layouts/TinTower_Roof/border.bin"

TinTower_Roof_MapBlockdata::
	.incbin "data/layouts/TinTower_Roof/map.bin"

	.align 2
TinTower_Roof_Layout::
	.4byte 20
	.4byte 18
	.4byte TinTower_Roof_MapBorder
	.4byte TinTower_Roof_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

