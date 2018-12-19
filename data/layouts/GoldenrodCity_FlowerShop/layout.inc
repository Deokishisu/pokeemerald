GoldenrodCity_FlowerShop_MapBorder::
	.incbin "data/layouts/GoldenrodCity_FlowerShop/border.bin"

GoldenrodCity_FlowerShop_MapBlockdata::
	.incbin "data/layouts/GoldenrodCity_FlowerShop/map.bin"

	.align 2
GoldenrodCity_FlowerShop_Layout::
	.4byte 8
	.4byte 8
	.4byte GoldenrodCity_FlowerShop_MapBorder
	.4byte GoldenrodCity_FlowerShop_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

