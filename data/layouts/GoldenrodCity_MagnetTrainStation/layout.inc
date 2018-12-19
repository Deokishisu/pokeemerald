GoldenrodCity_MagnetTrainStation_MapBorder::
	.incbin "data/layouts/GoldenrodCity_MagnetTrainStation/border.bin"

GoldenrodCity_MagnetTrainStation_MapBlockdata::
	.incbin "data/layouts/GoldenrodCity_MagnetTrainStation/map.bin"

	.align 2
GoldenrodCity_MagnetTrainStation_Layout::
	.4byte 20
	.4byte 18
	.4byte GoldenrodCity_MagnetTrainStation_MapBorder
	.4byte GoldenrodCity_MagnetTrainStation_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

