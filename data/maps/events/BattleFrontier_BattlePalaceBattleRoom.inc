BattleFrontier_BattlePalaceBattleRoom_MapObjects: @ 853C4FC
	object_event 1, MAP_OBJ_GFX_TRADER, 0, 0, 1, 9, 3, 7, 17, 0, 0, 0, 0x0, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_HIPSTER, 0, 0, 13, 1, 3, 8, 17, 0, 0, 0, 0x0, 0, 0, 0
	object_event 3, MAP_OBJ_GFX_OLD_MAN_1, 0, 0, 1, 4, 3, 10, 17, 0, 0, 0, 0x0, 0, 0, 0
	object_event 4, MAP_OBJ_GFX_DUSCLOPS, 0, 0, 13, 1, 3, 8, 17, 0, 0, 0, 0x0, 0, 0, 0
	object_event 5, MAP_OBJ_GFX_AZURILL, 0, 0, 13, 1, 3, 8, 17, 0, 0, 0, 0x0, 0, 0, 0

BattleFrontier_BattlePalaceBattleRoom_MapWarps: @ 853C574
	warp_def 0, 9, 3, 2, BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR
	warp_def 1, 9, 3, 2, BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR

BattleFrontier_BattlePalaceBattleRoom_MapEvents:: @ 853C584
	map_events BattleFrontier_BattlePalaceBattleRoom_MapObjects, BattleFrontier_BattlePalaceBattleRoom_MapWarps, 0x0, 0x0

