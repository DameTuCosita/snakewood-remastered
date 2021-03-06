SouthernIsland_Interior_MapScripts:: @ 8242A45
	map_script 5, SouthernIsland_Interior_MapScript1_242A50
	map_script 3, SouthernIsland_Interior_MapScript1_242A6E
	.byte 0

SouthernIsland_Interior_MapScript1_242A50: @ 8242A50
	checkflag FLAG_SYS_CTRL_OBJ_DELETE
	call_if 1, SouthernIsland_Interior_EventScript_242A5A
	end

SouthernIsland_Interior_EventScript_242A5A:: @ 8242A5A
	specialvar VAR_RESULT, sub_8138B80
	compare VAR_RESULT, 7
	goto_if 5, SouthernIsland_Interior_EventScript_27374E
	removeobject 2
	return

SouthernIsland_Interior_MapScript1_242A6E: @ 8242A6E
	compare VAR_0x40D5, 0
	call_if 1, SouthernIsland_Interior_EventScript_242A8A
	compare VAR_0x40D5, 0
	call_if 5, SouthernIsland_Interior_EventScript_242A95
	call SouthernIsland_Interior_EventScript_242AA0
	end

SouthernIsland_Interior_EventScript_242A8A:: @ 8242A8A
	setvar VAR_OBJ_GFX_ID_1, 188
	setvar VAR_TEMP_4, 408
	return

SouthernIsland_Interior_EventScript_242A95:: @ 8242A95
	setvar VAR_OBJ_GFX_ID_1, 187
	setvar VAR_TEMP_4, 407
	return

SouthernIsland_Interior_EventScript_242AA0:: @ 8242AA0
	checkplayergender
	compare VAR_RESULT, 0
	goto_eq SouthernIsland_Interior_EventScript_242AB8
	compare VAR_RESULT, 1
	goto_eq SouthernIsland_Interior_EventScript_242ABE
	end

SouthernIsland_Interior_EventScript_242AB8:: @ 8242AB8
	setvar VAR_OBJ_GFX_ID_0, 100
	return

SouthernIsland_Interior_EventScript_242ABE:: @ 8242ABE
	setvar VAR_OBJ_GFX_ID_0, 105
	return

SouthernIsland_Interior_EventScript_242AC4:: @ 8242AC4
	lockall
	setvar VAR_0x8008, 12
	goto SouthernIsland_Interior_EventScript_242AD0
	end

SouthernIsland_Interior_EventScript_242AD0:: @ 8242AD0
	checkflag FLAG_0x002
	goto_eq SouthernIsland_Interior_EventScript_242B9A
	checkflag FLAG_0x1C8
	goto_eq SouthernIsland_Interior_EventScript_242B9A
	checkflag FLAG_0x1C9
	goto_eq SouthernIsland_Interior_EventScript_242B9A
	checkflag FLAG_SYS_HAS_EON_TICKET
	goto_if 0, SouthernIsland_Interior_EventScript_242B9A
	setflag FLAG_0x0CE
	setflag FLAG_0x002
	special SpawnScriptFieldObject
	applymovement 127, SouthernIsland_Interior_Movement_242BCA
	waitmovement 0
	delay 50
	waitse
	playmoncry VAR_TEMP_4, 0
	delay 30
	waitmoncry
	addobject 2
	delay 30
	applymovement 127, SouthernIsland_Interior_Movement_242BCE
	applymovement 2, SouthernIsland_Interior_Movement_242BDA
	waitmovement 0
	delay 50
	special RemoveScriptFieldObject
	setvar VAR_LAST_TALKED, 2
	compare VAR_0x40D5, 0
	call_if 1, SouthernIsland_Interior_EventScript_242BA4
	compare VAR_0x40D5, 0
	call_if 5, SouthernIsland_Interior_EventScript_242BB7
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLatiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, sub_8138B80
	compare VAR_RESULT, 1
	goto_eq SouthernIsland_Interior_EventScript_242B81
	compare VAR_RESULT, 4
	goto_eq SouthernIsland_Interior_EventScript_242B8F
	compare VAR_RESULT, 5
	goto_eq SouthernIsland_Interior_EventScript_242B8F
	setflag FLAG_0x1C9
	releaseall
	end

SouthernIsland_Interior_EventScript_242B81:: @ 8242B81
	setflag FLAG_0x1C8
	copyvar VAR_0x8004, VAR_TEMP_4
	goto SouthernIsland_Interior_EventScript_273776
	end

SouthernIsland_Interior_EventScript_242B8F:: @ 8242B8F
	copyvar VAR_0x8004, VAR_TEMP_4
	goto SouthernIsland_Interior_EventScript_273776
	end

SouthernIsland_Interior_EventScript_242B9A:: @ 8242B9A
	msgbox SouthernIsland_Interior_Text_2A6AA1, 4
	releaseall
	end

SouthernIsland_Interior_EventScript_242BA4:: @ 8242BA4
	setvar VAR_0x8004, 408
	setvar VAR_0x8005, 50
	setvar VAR_0x8006, 191
	special CreateObedientEnemyMon
	return

SouthernIsland_Interior_EventScript_242BB7:: @ 8242BB7
	setvar VAR_0x8004, 407
	setvar VAR_0x8005, 50
	setvar VAR_0x8006, 191
	special CreateObedientEnemyMon
	return

SouthernIsland_Interior_Movement_242BCA: @ 8242BCA
	step_up
	step_up
	step_up
	step_end

SouthernIsland_Interior_Movement_242BCE: @ 8242BCE
	step_14
	step_14
	step_14
	step_14
	step_14
	step_14
	step_14
	step_down
	step_down
	step_down
	step_26
	step_end

SouthernIsland_Interior_Movement_242BDA: @ 8242BDA
	step_down
	step_down
	step_down
	step_down
	step_down
	step_14
	step_14
	step_down
	step_down
	step_down
	step_down
	step_end

