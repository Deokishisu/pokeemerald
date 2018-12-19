GoldenrodCity_DepartmentStore_2F_MapBorder::
	.incbin "data/layouts/GoldenrodCity_DepartmentStore_2F/border.bin"

GoldenrodCity_DepartmentStore_2F_MapBlockdata::
	.incbin "data/layouts/GoldenrodCity_DepartmentStore_2F/map.bin"

	.align 2
GoldenrodCity_DepartmentStore_2F_Layout::
	.4byte 16
	.4byte 8
	.4byte GoldenrodCity_DepartmentStore_2F_MapBorder
	.4byte GoldenrodCity_DepartmentStore_2F_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

