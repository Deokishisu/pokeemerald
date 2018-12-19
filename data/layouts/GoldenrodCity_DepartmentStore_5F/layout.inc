GoldenrodCity_DepartmentStore_5F_MapBorder::
	.incbin "data/layouts/GoldenrodCity_DepartmentStore_5F/border.bin"

GoldenrodCity_DepartmentStore_5F_MapBlockdata::
	.incbin "data/layouts/GoldenrodCity_DepartmentStore_5F/map.bin"

	.align 2
GoldenrodCity_DepartmentStore_5F_Layout::
	.4byte 16
	.4byte 8
	.4byte GoldenrodCity_DepartmentStore_5F_MapBorder
	.4byte GoldenrodCity_DepartmentStore_5F_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

