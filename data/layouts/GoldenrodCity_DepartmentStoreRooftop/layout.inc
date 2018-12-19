GoldenrodCity_DepartmentStoreRooftop_MapBorder::
	.incbin "data/layouts/GoldenrodCity_DepartmentStoreRooftop/border.bin"

GoldenrodCity_DepartmentStoreRooftop_MapBlockdata::
	.incbin "data/layouts/GoldenrodCity_DepartmentStoreRooftop/map.bin"

	.align 2
GoldenrodCity_DepartmentStoreRooftop_Layout::
	.4byte 16
	.4byte 8
	.4byte GoldenrodCity_DepartmentStoreRooftop_MapBorder
	.4byte GoldenrodCity_DepartmentStoreRooftop_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

