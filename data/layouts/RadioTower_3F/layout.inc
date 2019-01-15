RadioTower_3F_MapBorder::
	.incbin "data/layouts/RadioTower_3F/border.bin"

RadioTower_3F_MapBlockdata::
	.incbin "data/layouts/RadioTower_3F/map.bin"

	.align 2
RadioTower_3F_Layout::
	.4byte 18
	.4byte 8
	.4byte RadioTower_3F_MapBorder
	.4byte RadioTower_3F_MapBlockdata
	.4byte gTileset_Special
	.4byte gTileset_Petalburg

