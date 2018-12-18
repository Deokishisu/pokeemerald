LakeOfRage_MapBorder::
	.incbin "data/layouts/LakeOfRage/border.bin"

LakeOfRage_MapBlockdata::
	.incbin "data/layouts/LakeOfRage/map.bin"

	.align 2
LakeOfRage_Layout::
	.4byte 40
	.4byte 36
	.4byte LakeOfRage_MapBorder
	.4byte LakeOfRage_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

