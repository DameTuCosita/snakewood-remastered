SeafloorCavern_Room2_MapObjects: @ 853579C
	object_event 1, MAP_OBJ_GFX_PUSHABLE_BOULDER, 0, 0, 13, 3, 3, 1, 0, 0, 0, 0, SeafloorCavern_Room2_EventScript_2908BA, 18, 0, 0
	object_event 2, MAP_OBJ_GFX_PUSHABLE_BOULDER, 0, 0, 10, 3, 3, 1, 0, 0, 0, 0, SeafloorCavern_Room2_EventScript_2908BA, 19, 0, 0
	object_event 3, MAP_OBJ_GFX_PUSHABLE_BOULDER, 0, 0, 13, 5, 3, 1, 0, 0, 0, 0, SeafloorCavern_Room2_EventScript_2908BA, 17, 0, 0
	object_event 4, MAP_OBJ_GFX_PUSHABLE_BOULDER, 0, 0, 4, 5, 3, 1, 0, 0, 0, 0, SeafloorCavern_Room2_EventScript_2908BA, 21, 0, 0
	object_event 5, MAP_OBJ_GFX_PUSHABLE_BOULDER, 0, 0, 7, 4, 3, 1, 0, 0, 0, 0, SeafloorCavern_Room2_EventScript_2908BA, 22, 0, 0
	object_event 6, MAP_OBJ_GFX_BREAKABLE_ROCK, 0, 0, 8, 7, 3, 1, 0, 0, 0, 0, SeafloorCavern_Room2_EventScript_2907A6, 24, 0, 0
	object_event 7, MAP_OBJ_GFX_BREAKABLE_ROCK, 0, 0, 9, 3, 3, 1, 0, 0, 0, 0, SeafloorCavern_Room2_EventScript_2907A6, 25, 0, 0
	object_event 8, MAP_OBJ_GFX_PUSHABLE_BOULDER, 0, 0, 4, 8, 3, 1, 0, 0, 0, 0, SeafloorCavern_Room2_EventScript_2908BA, 23, 0, 0

SeafloorCavern_Room2_MapWarps: @ 853585C
	warp_def 10, 7, 3, 2, SEAFLOOR_CAVERN_ROOM_1
	warp_def 4, 10, 3, 0, SEAFLOOR_CAVERN_ROOM_4
	warp_def 6, 1, 3, 0, SEAFLOOR_CAVERN_ROOM_6
	warp_def 11, 1, 3, 0, SEAFLOOR_CAVERN_ROOM_7

SeafloorCavern_Room2_MapEvents:: @ 853587C
	map_events SeafloorCavern_Room2_MapObjects, SeafloorCavern_Room2_MapWarps, 0x0, 0x0

