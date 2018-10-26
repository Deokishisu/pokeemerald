MeteorFalls_1F_1R_MapBorder::
	.incbin "data/layouts/MeteorFalls_1F_1R/border.bin"

MeteorFalls_1F_1R_MapBlockdata::
	.incbin "data/layouts/MeteorFalls_1F_1R/map.bin"

	.align 2
MeteorFalls_1F_1R_Layout::
	.4byte 20
	.4byte 16
	.4byte MeteorFalls_1F_1R_MapBorder
	.4byte MeteorFalls_1F_1R_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

