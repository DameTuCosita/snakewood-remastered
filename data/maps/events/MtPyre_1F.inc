MtPyre_1F_MapObjects: @ 8534D64
	object_event 1, MAP_OBJ_GFX_OLD_WOMAN_2, 0, 0, 21, 2, 3, 8, 17, 0, 0, 0, MtPyre_1F_EventScript_230F3F, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_WOMAN_2, 0, 0, 17, 8, 3, 7, 17, 0, 0, 0, MtPyre_1F_EventScript_230F78, 0, 0, 0
	object_event 3, MAP_OBJ_GFX_MAN_5, 0, 0, 13, 10, 3, 9, 17, 0, 0, 0, MtPyre_1F_EventScript_230F81, 0, 0, 0

MtPyre_1F_MapWarps: @ 8534DAC
	warp_def 17, 18, 3, 0, ROUTE_122
	warp_def 3, 6, 3, 0, MT_PYRE_EXTERIOR
	warp_def 18, 18, 3, 0, ROUTE_122
	warp_def 4, 6, 3, 0, MT_PYRE_EXTERIOR
	warp_def 11, 1, 3, 0, MT_PYRE_2F
	warp_def 20, 9, 3, 4, MT_PYRE_2F

MtPyre_1F_MapEvents:: @ 8534DDC
	map_events MtPyre_1F_MapObjects, MtPyre_1F_MapWarps, 0x0, 0x0

