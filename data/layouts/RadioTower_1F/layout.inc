RadioTower_1F_MapBorder::
	.incbin "data/layouts/RadioTower_1F/border.bin"

RadioTower_1F_MapBlockdata::
	.incbin "data/layouts/RadioTower_1F/map.bin"

	.align 2
RadioTower_1F_Layout::
	.4byte 18
	.4byte 8
	.4byte RadioTower_1F_MapBorder
	.4byte RadioTower_1F_MapBlockdata
	.4byte gTileset_Special
	.4byte gTileset_Petalburg

