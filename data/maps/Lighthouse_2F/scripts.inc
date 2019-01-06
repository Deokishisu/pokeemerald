Lighthouse_2F_MapScripts:: @ 823962B
	.byte 0

SkyPillar_2F_MapScript1_23963B: @ 823963B
	compare VAR_0x40CA, 2
	call_if_lt SkyPillar_2F_EventScript_23964C
	copyvar VAR_ICE_STEP_COUNT, 0x1
	end

SkyPillar_2F_EventScript_23964C:: @ 823964C
	setmaplayoutindex 434
	return

SkyPillar_2F_MapScript1_239650: @ 8239650
	setstepcallback 7
	setholewarp MAP_LIGHTHOUSE_1F, 255, 0, 0
	end

