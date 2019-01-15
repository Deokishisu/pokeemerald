RadioTower_4F_MapBorder::
	.incbin "data/layouts/RadioTower_4F/border.bin"

RadioTower_4F_MapBlockdata::
	.incbin "data/layouts/RadioTower_4F/map.bin"

	.align 2
RadioTower_4F_Layout::
	.4byte 18
	.4byte 8
	.4byte RadioTower_4F_MapBorder
	.4byte RadioTower_4F_MapBlockdata
	.4byte gTileset_Special
	.4byte gTileset_Petalburg

