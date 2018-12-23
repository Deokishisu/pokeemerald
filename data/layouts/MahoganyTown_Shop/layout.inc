MahoganyTown_Shop_MapBorder::
	.incbin "data/layouts/MahoganyTown_Shop/border.bin"

MahoganyTown_Shop_MapBlockdata::
	.incbin "data/layouts/MahoganyTown_Shop/map.bin"

	.align 2
MahoganyTown_Shop_Layout::
	.4byte 8
	.4byte 8
	.4byte MahoganyTown_Shop_MapBorder
	.4byte MahoganyTown_Shop_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

