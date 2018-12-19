GoldenrodCity_DepartmentStore_B1F_MapBorder::
	.incbin "data/layouts/GoldenrodCity_DepartmentStore_B1F/border.bin"

GoldenrodCity_DepartmentStore_B1F_MapBlockdata::
	.incbin "data/layouts/GoldenrodCity_DepartmentStore_B1F/map.bin"

	.align 2
GoldenrodCity_DepartmentStore_B1F_Layout::
	.4byte 20
	.4byte 18
	.4byte GoldenrodCity_DepartmentStore_B1F_MapBorder
	.4byte GoldenrodCity_DepartmentStore_B1F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

