SlowpokeWell_B2F_MapBorder::
	.incbin "data/layouts/SlowpokeWell_B2F/border.bin"

SlowpokeWell_B2F_MapBlockdata::
	.incbin "data/layouts/SlowpokeWell_B2F/map.bin"

	.align 2
SlowpokeWell_B2F_Layout::
	.4byte 20
	.4byte 18
	.4byte SlowpokeWell_B2F_MapBorder
	.4byte SlowpokeWell_B2F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

