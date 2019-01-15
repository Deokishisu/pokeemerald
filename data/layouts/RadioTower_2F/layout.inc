RadioTower_2F_MapBorder::
	.incbin "data/layouts/RadioTower_2F/border.bin"

RadioTower_2F_MapBlockdata::
	.incbin "data/layouts/RadioTower_2F/map.bin"

	.align 2
RadioTower_2F_Layout::
	.4byte 18
	.4byte 8
	.4byte RadioTower_2F_MapBorder
	.4byte RadioTower_2F_MapBlockdata
	.4byte gTileset_Special
	.4byte gTileset_Petalburg

