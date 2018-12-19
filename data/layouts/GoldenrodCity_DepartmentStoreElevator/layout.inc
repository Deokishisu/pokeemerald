GoldenrodCity_DepartmentStoreElevator_MapBorder::
	.incbin "data/layouts/GoldenrodCity_DepartmentStoreElevator/border.bin"

GoldenrodCity_DepartmentStoreElevator_MapBlockdata::
	.incbin "data/layouts/GoldenrodCity_DepartmentStoreElevator/map.bin"

	.align 2
GoldenrodCity_DepartmentStoreElevator_Layout::
	.4byte 4
	.4byte 4
	.4byte GoldenrodCity_DepartmentStoreElevator_MapBorder
	.4byte GoldenrodCity_DepartmentStoreElevator_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

