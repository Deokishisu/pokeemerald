RadioTower_5F_MapBorder::
	.incbin "data/layouts/RadioTower_5F/border.bin"

RadioTower_5F_MapBlockdata::
	.incbin "data/layouts/RadioTower_5F/map.bin"

	.align 2
RadioTower_5F_Layout::
	.4byte 18
	.4byte 8
	.4byte RadioTower_5F_MapBorder
	.4byte RadioTower_5F_MapBlockdata
	.4byte gTileset_Special
	.4byte gTileset_Petalburg

