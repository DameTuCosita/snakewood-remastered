SlateportCity_MapScripts:: @ 81DCC61
	map_script 3, SlateportCity_MapScript1_1DCC6C
	map_script 2, SlateportCity_MapScript2_1DCD12
	.byte 0

SlateportCity_MapScript1_1DCC6C: @ 81DCC6C
	setvar VAR_0x40AA, 0
	call SlateportCity_EventScript_1DCC8D
	compare VAR_0x4058, 1
	call_if 1, SlateportCity_EventScript_1DCC99
	compare VAR_0x40D2, 1
	call_if 1, SlateportCity_EventScript_1DCCE7
	end

SlateportCity_EventScript_1DCC8D:: @ 81DCC8D
	setflag FLAG_VISITED_SLATEPORT_CITY
	setvar VAR_0x4086, 0
	setflag FLAG_0x323
	return

SlateportCity_EventScript_1DCC99:: @ 81DCC99
	setobjectxyperm 11, 28, 13
	setobjectxyperm 7, 25, 13
	setobjectxyperm 3, 25, 14
	setobjectxyperm 6, 27, 16
	setobjectxyperm 8, 28, 16
	setobjectxyperm 1, 29, 16
	setobjectxyperm 2, 31, 14
	setobjectmovementtype 11, 8
	setobjectmovementtype 7, 18
	setobjectmovementtype 3, 16
	setobjectmovementtype 6, 7
	setobjectmovementtype 8, 7
	setobjectmovementtype 1, 7
	setobjectmovementtype 2, 9
	return

SlateportCity_EventScript_1DCCE7:: @ 81DCCE7
	setflag FLAG_SPECIAL_FLAG_0x4000
	getplayerxy VAR_0x8004, VAR_0x8005
	compare VAR_0x8004, 30
	goto_eq SlateportCity_EventScript_1DCD06
	setobjectxyperm 35, 23, 27
	setobjectmovementtype 35, 10
	return

SlateportCity_EventScript_1DCD06:: @ 81DCD06
	setobjectxyperm 35, 22, 27
	setobjectmovementtype 35, 10
	return

SlateportCity_MapScript2_1DCD12: @ 81DCD12
	map_script_2 VAR_0x40D2, 1, SlateportCity_EventScript_1DCD1C
	.2byte 0

SlateportCity_EventScript_1DCD1C:: @ 81DCD1C
	lockall
	addobject 35
	applymovement 255, SlateportCity_Movement_1DCDA8
	applymovement 35, SlateportCity_Movement_1DCDAC
	waitmovement 0
	msgbox SlateportCity_Text_1DF032, 4
	closemessage
	applymovement 35, SlateportCity_Movement_2725A4
	waitmovement 0
	delay 60
	msgbox SlateportCity_Text_1DF0FE, 4
	applymovement 35, SlateportCity_Movement_2725A8
	waitmovement 0
	msgbox SlateportCity_Text_1DF12B, 4
	closemessage
	delay 30
	playfanfare MUS_ME_TORE_EYE
	msgbox SlateportCity_Text_1DF1A6, 4
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_0x0D7
	msgbox SlateportCity_Text_1DF1D3, 4
	closemessage
	applymovement 35, SlateportCity_Movement_1DCDB4
	waitmovement 0
	removeobject 35
	setobjectxyperm 35, 10, 12
	setobjectmovementtype 35, 8
	clearflag FLAG_SPECIAL_FLAG_0x4000
	setvar VAR_0x40D2, 2
	addvar VAR_0x40D1, 1
	releaseall
	end

SlateportCity_Movement_1DCDA8: @ 81DCDA8
	step_14
	step_13
	step_27
	step_end

SlateportCity_Movement_1DCDAC: @ 81DCDAC
	step_right
	step_right
	step_right
	step_right
	step_right
	step_right
	step_right
	step_end

SlateportCity_Movement_1DCDB4: @ 81DCDB4
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_end

SlateportCity_EventScript_1DCDBD:: @ 81DCDBD
	lock
	faceplayer
	message SlateportCity_Text_1DD64A
	waitmessage
	pokemart SlateportCity_Pokemart_1DCDD4
	msgbox gUnknown_08272A3F, 4
	release
	end

SlateportCity_Pokemart_1DCDD4: @ 81DCDD4
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CARBOS
	.2byte ITEM_ZINC
	.2byte ITEM_CALCIUM
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE
	release
	end

SlateportCity_EventScript_1DCDE4:: @ 81DCDE4
	lock
	faceplayer
	bufferleadmonspeciesname 0
	msgbox SlateportCity_Text_1DD68A, 4
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
	compare VAR_RESULT, 1
	call_if 1, SlateportCity_EventScript_1DCE38
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
	compare VAR_RESULT, 0
	call_if 1, SlateportCity_EventScript_1DCE2E
	msgbox SlateportCity_Text_1DD697, 4
	playfanfare MUS_FANFA4
	message SlateportCity_Text_1DD6E3
	waitfanfare
	msgbox SlateportCity_Text_1DD702, 4
	special GiveLeadMonEffortRibbon
	release
	end

SlateportCity_EventScript_1DCE2E:: @ 81DCE2E
	msgbox SlateportCity_Text_1DD722, 4
	release
	end

SlateportCity_EventScript_1DCE38:: @ 81DCE38
	msgbox SlateportCity_Text_1DD77B, 4
	release
	end

SlateportCity_EventScript_1DCE42:: @ 81DCE42
	lock
	faceplayer
	compare VAR_0x4058, 1
	call_if 1, SlateportCity_EventScript_1DCE59
	msgbox SlateportCity_Text_1DD81A, 4
	release
	end

SlateportCity_EventScript_1DCE59:: @ 81DCE59
	msgbox SlateportCity_Text_1DE3E2, 4
	release
	end

SlateportCity_EventScript_1DCE63:: @ 81DCE63
	lock
	faceplayer
	compare VAR_0x4058, 1
	call_if 1, SlateportCity_EventScript_1DCE7A
	msgbox SlateportCity_Text_1DD8A6, 4
	release
	end

SlateportCity_EventScript_1DCE7A:: @ 81DCE7A
	msgbox SlateportCity_Text_1DE28E, 4
	release
	end

SlateportCity_EventScript_1DCE84:: @ 81DCE84
	lock
	faceplayer
	compare VAR_0x4058, 1
	call_if 1, SlateportCity_EventScript_1DCEA4
	checkflag FLAG_0x060
	goto_eq SlateportCity_EventScript_1DCEAE
	msgbox SlateportCity_Text_1DD93D, 4
	release
	end

SlateportCity_EventScript_1DCEA4:: @ 81DCEA4
	msgbox SlateportCity_Text_1DE30C, 4
	release
	end

SlateportCity_EventScript_1DCEAE:: @ 81DCEAE
	msgbox SlateportCity_Text_1DD999, 4
	release
	end

SlateportCity_EventScript_1DCEB8:: @ 81DCEB8
	lock
	faceplayer
	compare VAR_0x4058, 1
	call_if 1, SlateportCity_EventScript_1DCECF
	msgbox SlateportCity_Text_1DDA34, 4
	release
	end

SlateportCity_EventScript_1DCECF:: @ 81DCECF
	msgbox SlateportCity_Text_1DE376, 4
	release
	end

SlateportCity_EventScript_1DCED9:: @ 81DCED9
	compare VAR_0x4058, 1
	goto_eq SlateportCity_EventScript_1DCEED
	msgbox SlateportCity_Text_1DDA9A, 2
	end

SlateportCity_EventScript_1DCEED:: @ 81DCEED
	msgbox SlateportCity_Text_1DE43D, 3
	end

SlateportCity_EventScript_1DCEF6:: @ 81DCEF6
	lock
	faceplayer
	compare VAR_0x4058, 1
	call_if 1, SlateportCity_EventScript_1DCF0D
	msgbox SlateportCity_Text_1DDB21, 4
	release
	end

SlateportCity_EventScript_1DCF0D:: @ 81DCF0D
	msgbox SlateportCity_Text_1DE460, 4
	release
	end

SlateportCity_EventScript_1DCF17:: @ 81DCF17
	lock
	faceplayer
	checkflag FLAG_0x094
	goto_eq SlateportCity_EventScript_1DCF2C
	msgbox SlateportCity_Text_1DDBAC, 4
	release
	end

SlateportCity_EventScript_1DCF2C:: @ 81DCF2C
	msgbox SlateportCity_Text_1DDBD5, 4
	release
	end

SlateportCity_EventScript_1DCF36:: @ 81DCF36
	msgbox SlateportCity_Text_1DE8BC, 3
	end

SlateportCity_EventScript_1DCF3F:: @ 81DCF3F
	lockall
	checkflag FLAG_SYS_GAME_CLEAR
	goto_eq SlateportCity_EventScript_1DCF66
	checkflag FLAG_BADGE07_GET
	goto_eq SlateportCity_EventScript_1DCF5C
	msgbox SlateportCity_Text_1DE8F8, 4
	releaseall
	end

SlateportCity_EventScript_1DCF5C:: @ 81DCF5C
	msgbox SlateportCity_Text_1DE940, 4
	releaseall
	end

SlateportCity_EventScript_1DCF66:: @ 81DCF66
	msgbox SlateportCity_Text_1DE9AA, 4
	releaseall
	end

SlateportCity_EventScript_1DCF70:: @ 81DCF70
	msgbox SlateportCity_Text_1DEA0B, 3
	end

SlateportCity_EventScript_1DCF79:: @ 81DCF79
	msgbox SlateportCity_Text_1DEA3B, 3
	end

SlateportCity_EventScript_1DCF82:: @ 81DCF82
	msgbox SlateportCity_Text_1DEA6F, 3
	end

SlateportCity_EventScript_1DCF8B:: @ 81DCF8B
	msgbox SlateportCity_Text_1DEAAF, 3
	end

SlateportCity_EventScript_1DCF94:: @ 81DCF94
	lockall
	checkflag FLAG_SYS_GAME_CLEAR
	goto_eq SlateportCity_EventScript_1DCFA8
	msgbox SlateportCity_Text_1DEAE3, 4
	releaseall
	end

SlateportCity_EventScript_1DCFA8:: @ 81DCFA8
	msgbox SlateportCity_Text_1DEB5A, 4
	releaseall
	end

SlateportCity_EventScript_1DCFB2:: @ 81DCFB2
	msgbox SlateportCity_Text_1DEBA0, 3
	end

SlateportCity_EventScript_1DCFBB:: @ 81DCFBB
	lock
	faceplayer
	compare VAR_0x4058, 1
	call_if 1, SlateportCity_EventScript_1DCFD2
	msgbox SlateportCity_Text_1DE10E, 4
	release
	end

SlateportCity_EventScript_1DCFD2:: @ 81DCFD2
	msgbox SlateportCity_Text_1DE10E, 4
	release
	end

SlateportCity_EventScript_1DCFDC:: @ 81DCFDC
	msgbox SlateportCity_Text_1DE16C, 2
	end

SlateportCity_EventScript_1DCFE5:: @ 81DCFE5
	msgbox SlateportCity_Text_1DDFF7, 2
	end

SlateportCity_EventScript_1DCFEE:: @ 81DCFEE
	msgbox SlateportCity_Text_1DE04B, 2
	end

SlateportCity_EventScript_1DCFF7:: @ 81DCFF7
	msgbox SlateportCity_Text_1DE0D2, 2
	end

SlateportCity_EventScript_1DD000:: @ 81DD000
	msgbox SlateportCity_Text_1DE1EC, 2
	end

SlateportCity_EventScript_1DD009:: @ 81DD009
	lock
	faceplayer
	msgbox SlateportCity_Text_1DDC4F, 4
	closemessage
	applymovement 5, SlateportCity_Movement_2725A2
	waitmovement 0
	release
	end

SlateportCity_EventScript_1DD020:: @ 81DD020
	lock
	faceplayer
	msgbox SlateportCity_Text_1DDC8A, 4
	closemessage
	applymovement 18, SlateportCity_Movement_2725A2
	waitmovement 0
	release
	end

SlateportCity_EventScript_1DD037:: @ 81DD037
	lock
	faceplayer
	msgbox SlateportCity_Text_1DDCD5, 4
	closemessage
	applymovement 19, SlateportCity_Movement_2725A2
	waitmovement 0
	release
	end

SlateportCity_EventScript_1DD04E:: @ 81DD04E
	lock
	faceplayer
	msgbox SlateportCity_Text_1DDD18, 4
	closemessage
	applymovement 26, SlateportCity_Movement_2725A2
	waitmovement 0
	release
	end

SlateportCity_EventScript_1DD065:: @ 81DD065
	lock
	faceplayer
	msgbox SlateportCity_Text_1DDD7D, 4
	closemessage
	applymovement 27, SlateportCity_Movement_2725A2
	waitmovement 0
	release
	end

SlateportCity_EventScript_1DD07C:: @ 81DD07C
	lock
	faceplayer
	msgbox SlateportCity_Text_1DDDC0, 4
	closemessage
	applymovement 28, SlateportCity_Movement_2725A2
	waitmovement 0
	release
	end

SlateportCity_EventScript_1DD093:: @ 81DD093
	lock
	faceplayer
	msgbox SlateportCity_Text_1DDDDF, 4
	closemessage
	applymovement 29, SlateportCity_Movement_2725A2
	waitmovement 0
	release
	end

SlateportCity_EventScript_1DD0AA:: @ 81DD0AA
	lock
	faceplayer
	msgbox SlateportCity_Text_1DDE2F, 4
	closemessage
	applymovement 30, SlateportCity_Movement_2725A2
	waitmovement 0
	release
	end

SlateportCity_EventScript_1DD0C1:: @ 81DD0C1
	lock
	faceplayer
	playse SE_PIN
	applymovement 31, SlateportCity_Movement_272598
	waitmovement 0
	applymovement 31, SlateportCity_Movement_27259A
	waitmovement 0
	msgbox SlateportCity_Text_1DDE6E, 4
	closemessage
	applymovement 31, SlateportCity_Movement_2725A2
	waitmovement 0
	applymovement 31, SlateportCity_Movement_1DD147
	waitmovement 0
	applymovement 31, SlateportCity_Movement_27259E
	waitmovement 0
	msgbox SlateportCity_Text_1DDE86, 4
	closemessage
	applymovement 31, SlateportCity_Movement_2725A2
	waitmovement 0
	applymovement 31, SlateportCity_Movement_1DD147
	waitmovement 0
	msgbox SlateportCity_Text_1DDEB8, 4
	closemessage
	applymovement 31, SlateportCity_Movement_27259E
	waitmovement 0
	applymovement 31, SlateportCity_Movement_1DD147
	waitmovement 0
	applymovement 31, SlateportCity_Movement_2725A2
	waitmovement 0
	release
	end

SlateportCity_Movement_1DD147: @ 81DD147
	step_14
	step_14
	step_end

SlateportCity_EventScript_1DD14A:: @ 81DD14A
	msgbox SlateportCity_Text_1DDF32, 3
	end

SlateportCity_EventScript_1DD153:: @ 81DD153
	lock
	faceplayer
	msgbox SlateportCity_Text_1DDF8D, 4
	closemessage
	applymovement 33, SlateportCity_Movement_2725A2
	waitmovement 0
	release
	end

SlateportCity_EventScript_1DD16A:: @ 81DD16A
	lock
	faceplayer
	message gUnknown_08272A21
	waitmessage
	pokemartdecoration SlateportCity_PokemartDecor_1DD184
	msgbox gUnknown_08272A3F, 4
	release
	end

	.align 2
SlateportCity_PokemartDecor_1DD184: @ 81DD184
	.2byte 95
	.2byte 78
	.2byte 96
	.2byte 0
	release
	end

SlateportCity_EventScript_1DD18E:: @ 81DD18E
	msgbox gUnknown_08272E30, 4
	release
	end

SlateportCity_EventScript_1DD198:: @ 81DD198
	lock
	faceplayer
	checkflag FLAG_0x060
	goto_if 0, SlateportCity_EventScript_1DD18E
	message gUnknown_08272A21
	waitmessage
	pokemartdecoration SlateportCity_PokemartDecor_1DD1B8
	msgbox gUnknown_08272A3F, 4
	release
	end

SlateportCity_PokemartDecor_1DD1B8: @ 81DD1B8
	.2byte 25
	.2byte 27
	.2byte 26
	.2byte 28
	.2byte 29
	.2byte 30
	.2byte 51
	.2byte 52
	.2byte 53
	.2byte 54
	.2byte 55
	.2byte 56
	.2byte 57
	.2byte 58
	.2byte 0
	release
	end

SlateportCity_EventScript_1DD1D8:: @ 81DD1D8
	lock
	faceplayer
	message gUnknown_08272A21
	waitmessage
	pokemart SlateportCity_Pokemart_1DD1F0
	msgbox gUnknown_08272A3F, 4
	release
	end

	.align 2
SlateportCity_Pokemart_1DD1F0: @ 81DD1F0
	.2byte ITEM_TM10
	.2byte ITEM_TM43
	.2byte ITEM_NONE
	release
	end

SlateportCity_EventScript_1DD1F8:: @ 81DD1F8
	lockall
	msgbox SlateportCity_Text_1DE502, 4
	msgbox SlateportCity_Text_1DE54A, 4
	closemessage
	applymovement 10, SlateportCity_Movement_2725A8
	waitmovement 0
	delay 10
	applymovement 9, SlateportCity_Movement_2725AA
	waitmovement 0
	delay 25
	applymovement 11, SlateportCity_Movement_1DD33C
	applymovement 255, SlateportCity_Movement_1DD34A
	applymovement 10, SlateportCity_Movement_1DD319
	applymovement 9, SlateportCity_Movement_1DD326
	waitmovement 0
	removeobject 10
	removeobject 9
	msgbox SlateportCity_Text_1DE5F7, 4
	applymovement 11, SlateportCity_Movement_2725A6
	waitmovement 0
	msgbox SlateportCity_Text_1DE64F, 4
	playbgm MUS_AQA_0, 0
	msgbox SlateportCity_Text_1DE724, 4
	applymovement 6, SlateportCity_Movement_2725A4
	applymovement 1, SlateportCity_Movement_2725A4
	applymovement 7, SlateportCity_Movement_1DD309
	applymovement 3, SlateportCity_Movement_272596
	applymovement 2, SlateportCity_Movement_1DD311
	waitmovement 0
	applymovement 11, SlateportCity_Movement_2725AA
	waitmovement 0
	msgbox SlateportCity_Text_1DE7F7, 4
	playse SE_PIN
	applymovement 11, SlateportCity_Movement_272598
	waitmovement 0
	applymovement 11, SlateportCity_Movement_27259A
	waitmovement 0
	applymovement 11, SlateportCity_Movement_2725A6
	waitmovement 0
	msgbox SlateportCity_Text_1DE860, 4
	msgbox SlateportCity_Text_1DE8A0, 4
	closemessage
	applymovement 11, SlateportCity_Movement_1DD337
	applymovement 255, SlateportCity_Movement_1DD344
	waitmovement 0
	removeobject 11
	clearflag FLAG_0x349
	clearflag FLAG_0x350
	clearflag FLAG_0x34D
	clearflag FLAG_0x34E
	setvar VAR_0x4058, 2
	warp SLATEPORT_CITY_HARBOR, 255, 11, 14
	waitstate
	releaseall
	end

SlateportCity_Movement_1DD309: @ 81DD309
	step_14
	step_14
	step_57
	step_28
	step_14
	step_14
	step_27
	step_end

SlateportCity_Movement_1DD311: @ 81DD311
	step_57
	step_26
	step_14
	step_25
	step_14
	step_14
	step_27
	step_end

SlateportCity_Movement_1DD319: @ 81DD319
	step_14
	step_left
	step_left
	step_down
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_end

SlateportCity_Movement_1DD326: @ 81DD326
	step_down
	step_left
	step_left
	step_left
	step_down
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_end

SlateportCity_Movement_1DD334: @ 81DD334
	step_down
	step_26
	step_end

SlateportCity_Movement_1DD337: @ 81DD337
	step_right
	step_up
	step_up
	step_54
	step_end

SlateportCity_Movement_1DD33C: @ 81DD33C
	step_14
	step_14
	step_14
	step_14
	step_14
	step_down
	step_left
	step_end

SlateportCity_Movement_1DD344: @ 81DD344
	step_28
	step_14
	step_14
	step_right
	step_up
	step_end

SlateportCity_Movement_1DD34A: @ 81DD34A
	step_14
	step_14
	step_14
	step_14
	step_14
	step_14
	step_14
	step_25
	step_end

SlateportCity_EventScript_1DD353:: @ 81DD353
	msgbox SlateportCity_Text_1DE491, 3
	end

SlateportCity_EventScript_1DD35C:: @ 81DD35C
	msgbox SlateportCity_Text_1DE4C4, 3
	end

SlateportCity_EventScript_1DD365:: @ 81DD365
	msgbox SlateportCity_Text_1DD7AD, 2
	end

SlateportCity_EventScript_1DD36E:: @ 81DD36E
	lock
	faceplayer
	checkflag FLAG_0x151
	goto_eq SlateportCity_EventScript_1DD39A
	msgbox SlateportCity_Text_1DEBCE, 4
	giveitem_std ITEM_POWDER_JAR
	setflag FLAG_0x151
	msgbox SlateportCity_Text_1DED27, 4
	release
	end

SlateportCity_EventScript_1DD39A:: @ 81DD39A
	setvar VAR_0x8004, 1
	specialvar VAR_RESULT, sub_80246D4
	compare VAR_RESULT, 0
	goto_eq SlateportCity_EventScript_1DD3C0
	msgbox SlateportCity_Text_1DEE40, 4
	special sub_80248B0
	goto SlateportCity_EventScript_1DD3CA
	end

SlateportCity_EventScript_1DD3C0:: @ 81DD3C0
	msgbox SlateportCity_Text_1DED27, 4
	release
	end

SlateportCity_EventScript_1DD3CA:: @ 81DD3CA
	message SlateportCity_Text_1DEE67
	waitmessage
	setvar VAR_0x8004, 7
	special sub_813A128
	waitstate
	switch VAR_RESULT
	case 0, SlateportCity_EventScript_1DD46E
	case 1, SlateportCity_EventScript_1DD482
	case 2, SlateportCity_EventScript_1DD496
	case 3, SlateportCity_EventScript_1DD4AA
	case 4, SlateportCity_EventScript_1DD4BE
	case 5, SlateportCity_EventScript_1DD4D2
	case 6, SlateportCity_EventScript_1DD4E6
	case 7, SlateportCity_EventScript_1DD4FA
	case 8, SlateportCity_EventScript_1DD50E
	case 9, SlateportCity_EventScript_1DD522
	case 10, SlateportCity_EventScript_1DD536
	case 11, SlateportCity_EventScript_1DD54A
	case 127, SlateportCity_EventScript_1DD54A
	end

SlateportCity_EventScript_1DD46E:: @ 81DD46E
	bufferitemname 0, ITEM_ENERGY_POWDER
	setvar VAR_0x8008, 30
	setvar VAR_0x8009, 50
	goto SlateportCity_EventScript_1DD557
	end

SlateportCity_EventScript_1DD482:: @ 81DD482
	bufferitemname 0, ITEM_ENERGY_ROOT
	setvar VAR_0x8008, 31
	setvar VAR_0x8009, 80
	goto SlateportCity_EventScript_1DD557
	end

SlateportCity_EventScript_1DD496:: @ 81DD496
	bufferitemname 0, ITEM_HEAL_POWDER
	setvar VAR_0x8008, 32
	setvar VAR_0x8009, 50
	goto SlateportCity_EventScript_1DD557
	end

SlateportCity_EventScript_1DD4AA:: @ 81DD4AA
	bufferitemname 0, ITEM_REVIVAL_HERB
	setvar VAR_0x8008, 33
	setvar VAR_0x8009, 300
	goto SlateportCity_EventScript_1DD557
	end

SlateportCity_EventScript_1DD4BE:: @ 81DD4BE
	bufferitemname 0, ITEM_PROTEIN
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_1DD557
	end

SlateportCity_EventScript_1DD4D2:: @ 81DD4D2
	bufferitemname 0, ITEM_IRON
	setvar VAR_0x8008, 65
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_1DD557
	end

SlateportCity_EventScript_1DD4E6:: @ 81DD4E6
	bufferitemname 0, ITEM_CARBOS
	setvar VAR_0x8008, 66
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_1DD557
	end

SlateportCity_EventScript_1DD4FA:: @ 81DD4FA
	bufferitemname 0, ITEM_CALCIUM
	setvar VAR_0x8008, 67
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_1DD557
	end

SlateportCity_EventScript_1DD50E:: @ 81DD50E
	bufferitemname 0, ITEM_ZINC
	setvar VAR_0x8008, 70
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_1DD557
	end

SlateportCity_EventScript_1DD522:: @ 81DD522
	bufferitemname 0, ITEM_HP_UP
	setvar VAR_0x8008, 63
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_1DD557
	end

SlateportCity_EventScript_1DD536:: @ 81DD536
	bufferitemname 0, ITEM_PP_UP
	setvar VAR_0x8008, 69
	setvar VAR_0x8009, 3000
	goto SlateportCity_EventScript_1DD557
	end

SlateportCity_EventScript_1DD54A:: @ 81DD54A
	msgbox SlateportCity_Text_1DEFBC, 4
	special sub_8024918
	release
	end

SlateportCity_EventScript_1DD557:: @ 81DD557
	msgbox SlateportCity_Text_1DEE90, 5
	compare VAR_RESULT, 0
	goto_eq SlateportCity_EventScript_1DD3CA
	copyvar VAR_0x8004, VAR_0x8009
	specialvar VAR_RESULT, sub_80246D4
	compare VAR_RESULT, 0
	goto_eq SlateportCity_EventScript_1DD5CE
	giveitem_std VAR_0x8008
	compare VAR_RESULT, 0
	goto_eq SlateportCity_EventScript_1DD5C1
	copyvar VAR_0x8004, VAR_0x8009
	special sub_802477C
	special sub_802488C
	msgbox SlateportCity_Text_1DEEF7, 5
	compare VAR_RESULT, 1
	goto_eq SlateportCity_EventScript_1DD3CA
	msgbox SlateportCity_Text_1DEF79, 4
	special sub_8024918
	release
	end

SlateportCity_EventScript_1DD5C1:: @ 81DD5C1
	msgbox gUnknown_08272A89, 4
	special sub_8024918
	release
	end

SlateportCity_EventScript_1DD5CE:: @ 81DD5CE
	msgbox SlateportCity_Text_1DEEC9, 4
	goto SlateportCity_EventScript_1DD3CA
	end

SlateportCity_EventScript_1DD5DC:: @ 81DD5DC
	lockall
	applymovement 255, SlateportCity_Movement_2725B2
	waitmovement 0
	opendoor 10, 12
	waitdooranim
	addobject 35
	applymovement 255, SlateportCity_Movement_1DD630
	applymovement 35, SlateportCity_Movement_1DD637
	waitmovement 0
	closedoor 10, 12
	waitdooranim
	msgbox SlateportCity_Text_1DF28C, 4
	closemessage
	applymovement 255, SlateportCity_Movement_1DD634
	applymovement 35, SlateportCity_Movement_1DD63A
	waitmovement 0
	removeobject 35
	addvar VAR_0x40D1, 1
	setvar VAR_0x40D2, 3
	releaseall
	end

SlateportCity_Movement_1DD630: @ 81DD630
	step_40
	step_down
	step_41
	step_end

SlateportCity_Movement_1DD634: @ 81DD634
	step_14
	step_28
	step_end

SlateportCity_Movement_1DD637: @ 81DD637
	step_13
	step_down
	step_end

SlateportCity_Movement_1DD63A: @ 81DD63A
	step_right
	step_right
	step_right
	step_right
	step_right
	step_right
	step_right
	step_right
	step_end

SlateportCity_EventScript_1DD643:: @ 81DD643
	lockall
	special sub_80224D0
	waitstate
	releaseall
	end

SlateportCity_Text_1DD64A: @ 81DD64A
	.string "I’m the ENERGY GURU! I’ll go for it and\n"
	.string "sell you what you need!$"

SlateportCity_Text_1DD68A: @ 81DD68A
	.string "Oh?\n"
	.string "Your {STR_VAR_1}…$"

SlateportCity_Text_1DD697: @ 81DD697
	.string "Went for it stupendously!\p"
	.string "As its reward, please give it this\n"
	.string "EFFORT RIBBON.$"

SlateportCity_Text_1DD6E3: @ 81DD6E3
	.string "{PLAYER} received the EFFORT RIBBON.$"

SlateportCity_Text_1DD702: @ 81DD702
	.string "{PLAYER} put the EFFORT RIBBON\n"
	.string "on {STR_VAR_1}.$"

SlateportCity_Text_1DD722: @ 81DD722
	.string "You have to go for it a little harder.\p"
	.string "If you do, I’ll give your POKéMON\n"
	.string "something nice.$"

SlateportCity_Text_1DD77B: @ 81DD77B
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
	.string "RIBBON looks good on it!$"

SlateportCity_Text_1DD7AD: @ 81DD7AD
	.string "The light of the lighthouse reaches\n"
	.string "dozens of miles away.\p"
	.string "I wonder if it doesn’t startle POKéMON\n"
	.string "in the sea.$"

SlateportCity_Text_1DD81A: @ 81DD81A
	.string "Ooh, look at this!\p"
	.string "The seaweed you can get around these\n"
	.string "parts is fresh and full of life.\p"
	.string "Why, it looks like it can even rear up\n"
	.string "and attack!$"

SlateportCity_Text_1DD8A6: @ 81DD8A6
	.string "Where the water is clean, the fruits\n"
	.string "of bountiful harvest gather.\p"
	.string "And where people gather, a market\n"
	.string "soon starts.\p"
	.string "That is how a town is born and grows.$"

SlateportCity_Text_1DD93D: @ 81DD93D
	.string "Shopping where you can breathe the\n"
	.string "scent of the ocean…\p"
	.string "SLATEPORT is such a wonderful place!$"

SlateportCity_Text_1DD999: @ 81DD999
	.string "If you put DOLLS or CUSHIONS on\n"
	.string "the floor, they’ll get dirty.\p"
	.string "I’m going to buy some BRICKS so my\n"
	.string "DOLLS and CUSHIONS won’t get dirty\l"
	.string "when I leave them out.$"

SlateportCity_Text_1DDA34: @ 81DDA34
	.string "Wroooar! I’m going to compete in\n"
	.string "the BATTLE TENT, too!\p"
	.string "But before that, I need to catch\n"
	.string "some POKéMON!$"

SlateportCity_Text_1DDA9A: @ 81DDA9A
	.string "Whew… I’m just bushed…\p"
	.string "I hiked over from MAUVILLE CITY.\n"
	.string "But, boy, this city’s huge.\p"
	.string "If I’d known this, I would’ve ridden\n"
	.string "my BIKE here.$"

SlateportCity_Text_1DDB21: @ 81DDB21
	.string "STERN, the fellow who built the\n"
	.string "MUSEUM, also happens to be the leader\l"
	.string "of an undersea exploration team.\p"
	.string "So, everyone calls him CAPT. STERN.$"

SlateportCity_Text_1DDBAC: @ 81DDBAC
	.string "What is that over there?\n"
	.string "That long line…$"

SlateportCity_Text_1DDBD5: @ 81DDBD5
	.string "When I was a child, I visited\n"
	.string "the MUSEUM often.\p"
	.string "I used to dream about the mysteries of\n"
	.string "the sea after seeing the exhibits.$"

SlateportCity_Text_1DDC4F: @ 81DDC4F
	.string "Hey, there! Quit pushing!\n"
	.string "This is the line, can’t you see?$"

SlateportCity_Text_1DDC8A: @ 81DDC8A
	.string "TEAM AQUA has a policy of\n"
	.string "assembling and dispersing at\l"
	.string "the operation site.$"

SlateportCity_Text_1DDCD5: @ 81DDCD5
	.string "Our BOSS is brilliant.\p"
	.string "What would he want to do with\n"
	.string "a MUSEUM now?$"

SlateportCity_Text_1DDD18: @ 81DDD18
	.string "What’s the new scheme, I wonder?\p"
	.string "Our BOSS is scary when he’s mad, so\n"
	.string "I’d better not screw things up…$"

SlateportCity_Text_1DDD7D: @ 81DDD7D
	.string "If there’s something we need in\n"
	.string "the MUSEUM, we should take it all!$"

SlateportCity_Text_1DDDC0: @ 81DDDC0
	.string "Hey, you there!\n"
	.string "Don’t butt in!$"

SlateportCity_Text_1DDDDF: @ 81DDDDF
	.string "A long line, huh?\p"
	.string "It reminds me of the times I lined up to\n"
	.string "buy smash-hit games…$"

SlateportCity_Text_1DDE2F: @ 81DDE2F
	.string "Why are we even lining up and paying?\n"
	.string "We should just march in!$"

SlateportCity_Text_1DDE6E: @ 81DDE6E
	.string "What?\n"
	.string "What do you want?$"

SlateportCity_Text_1DDE86: @ 81DDE86
	.string "You want to read this sign?\n"
	.string "I’ll read it for you!$"

SlateportCity_Text_1DDEB8: @ 81DDEB8
	.string "Let’s see…\p"
	.string "Um… I think it says something like\n"
	.string "“the life in the sea is endless.”\p"
	.string "Yup, I’m pretty sure that’s what\n"
	.string "it says.$"

SlateportCity_Text_1DDF32: @ 81DDF32
	.string "Grumble…\p"
	.string "I should’ve brought my Game Boy\n"
	.string "Advance so I wouldn’t get bored in line…\p"
	.string "Grumble…$"

SlateportCity_Text_1DDF8D: @ 81DDF8D
	.string "When this operation’s over, I’ll take\n"
	.string "you to a hot spring spa!\p"
	.string "That’s what our leader said.\n"
	.string "I can’t wait!$"

SlateportCity_Text_1DDFF7: @ 81DDFF7
	.string "The sea is just so vast…\p"
	.string "Could the sea have been made by\n"
	.string "the tears shed by POKéMON?$"

SlateportCity_Text_1DE04B: @ 81DE04B
	.string "Do you know what they do with old\n"
	.string "ships that become too creaky to sail?\p"
	.string "They sink them in the sea so they\n"
	.string "become habitats for POKéMON.$"

SlateportCity_Text_1DE0D2: @ 81DE0D2
	.string "Whenever I visit here, I get carried\n"
	.string "away and buy too much.$"

SlateportCity_Text_1DE10E: @ 81DE10E
	.string "If you want to change your POKéMON’s\n"
	.string "nickname, you’ll have to get the NAME\l"
	.string "RATER to help you.$"

SlateportCity_Text_1DE16C: @ 81DE16C
	.string "Any POKéMON you get in a trade,\n"
	.string "you can’t change its nickname.\p"
	.string "The original TRAINER’s love for that\n"
	.string "POKéMON is in the nickname.$"

SlateportCity_Text_1DE1EC: @ 81DE1EC
	.string "Recently, a BATTLE TENT was built\n"
	.string "in SLATEPORT.\p"
	.string "GYMS are fun, but the BATTLE TENT’s\n"
	.string "awesome in its own way.\p"
	.string "You should go find tough POKéMON\n"
	.string "for the BATTLE TENT!$"

SlateportCity_Text_1DE28E: @ 81DE28E
	.string "I was hoping that it was a famous star\n"
	.string "so I could get an autograph.\p"
	.string "But who’s that being interviewed?\n"
	.string "Isn’t that CAPT. STERN?$"

SlateportCity_Text_1DE30C: @ 81DE30C
	.string "That lady interviewer is so cool\n"
	.string "and pretty.\p"
	.string "When I grow up, I’m going to be\n"
	.string "an international journalist!$"

SlateportCity_Text_1DE376: @ 81DE376
	.string "CAPT. STERN says they discovered\n"
	.string "something at the bottom of the sea.\p"
	.string "I wonder what it is?\n"
	.string "What could it be?$"

SlateportCity_Text_1DE3E2: @ 81DE3E2
	.string "What’s going on here?\p"
	.string "Did the good CAPTAIN come back with\n"
	.string "a big fish from the ocean floor?$"

SlateportCity_Text_1DE43D: @ 81DE43D
	.string "Hey! Are you watching?\n"
	.string "Am I on TV?$"

SlateportCity_Text_1DE460: @ 81DE460
	.string "A TV interview! Here!\n"
	.string "The CAPTAIN’s a celebrity!$"

SlateportCity_Text_1DE491: @ 81DE491
	.string "TY: Okay, CAPT. STERN, a big smile\n"
	.string "for the camera!$"

SlateportCity_Text_1DE4C4: @ 81DE4C4
	.string "GABBY: I see, I see. You’ve had a most\n"
	.string "invaluable experience…$"

SlateportCity_Text_1DE502: @ 81DE502
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
	.string "move ahead with our exploration.$"

SlateportCity_Text_1DE54A: @ 81DE54A
	.string "GABBY: That’s wonderful, CAPT. STERN!\n"
	.string "Thank you for taking the time from\l"
	.string "your busy schedule to talk to us.\p"
	.string "We hope we can interview you again\n"
	.string "with news of more discoveries!$"

SlateportCity_Text_1DE5F7: @ 81DE5F7
	.string "CAPT. STERN: Whew…\p"
	.string "That was my first time to be filmed for\n"
	.string "TV. That was nerve-wracking.$"

SlateportCity_Text_1DE64F: @ 81DE64F
	.string "Oh! {PLAYER}{KUN}!\n"
	.string "You’re looking great!\p"
	.string "We made a huge discovery on our last\n"
	.string "seafloor exploration.\p"
	.string "We found an underwater cavern on\n"
	.string "ROUTE 128.\p"
	.string "We think it’s the habitat of a POKéMON\n"
	.string "that’s said to have been long extinct.$"

SlateportCity_Text_1DE724: @ 81DE724
	.string "Fufufu…\n"
	.string "CAPT. STERN, I presume.\p"
	.string "We of TEAM AQUA will assume\n"
	.string "control of your submarine!\p"
	.string "Your objections are meaningless!\n"
	.string "We expect your total cooperation!\p"
	.string "Fufufu…\n"
	.string "Just watch and learn what TEAM\l"
	.string "AQUA has planned!$"

SlateportCity_Text_1DE7F7: @ 81DE7F7
	.string "CAPT. STERN: What was that all about?\p"
	.string "It sounded like someone using\n"
	.string "a megaphone…\p"
	.string "Where did it come from?$"

SlateportCity_Text_1DE860: @ 81DE860
	.string "It’s from the HARBOR!\p"
	.string "The submarine!\n"
	.string "They’re trying to take it!$"

SlateportCity_Text_1DE8A0: @ 81DE8A0
	.string "{PLAYER}{KUN}!\n"
	.string "Please, come with me!$"

SlateportCity_Text_1DE8BC: @ 81DE8BC
	.string "BATTLE TENT SLATEPORT SITE\n"
	.string "“Find it! The ultimate POKéMON!”$"

SlateportCity_Text_1DE8F8: @ 81DE8F8
	.string "STERN’S SHIPYARD\p"
	.string "“Wanted: A sailor capable of sailing\n"
	.string "in all currents.”$"

SlateportCity_Text_1DE940: @ 81DE940
	.string "STERN’S SHIPYARD\p"
	.string "“The ferry S.S. TIDAL nears\n"
	.string "completion for serving the ports of\l"
	.string "SLATEPORT and LILYCOVE.”$"

SlateportCity_Text_1DE9AA: @ 81DE9AA
	.string "STERN’S SHIPYARD\p"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
	.string "ferry S.S. TIDAL is handled at the\l"
	.string "HARBOR.”$"

SlateportCity_Text_1DEA0B: @ 81DEA0B
	.string "POKéMON FAN CLUB\n"
	.string "“Calling all fans of POKéMON!”$"

SlateportCity_Text_1DEA3B: @ 81DEA3B
	.string "“The endless sea sustains\n"
	.string "all life.”\p"
	.string "OCEANIC MUSEUM$"

SlateportCity_Text_1DEA6F: @ 81DEA6F
	.string "SLATEPORT CITY\p"
	.string "“The port where people and POKéMON\n"
	.string "cross paths.”$"

SlateportCity_Text_1DEAAF: @ 81DEAAF
	.string "SLATEPORT MARKET\n"
	.string "“Unique items found nowhere else!”$"

SlateportCity_Text_1DEAE3: @ 81DEAE3
	.string "SLATEPORT HARBOR\p"
	.string "“The ferry S.S. TIDAL is under\n"
	.string "construction in the SHIPYARD.\p"
	.string "“Service is scheduled to begin\n"
	.string "shortly.”$"

SlateportCity_Text_1DEB5A: @ 81DEB5A
	.string "SLATEPORT HARBOR\p"
	.string "“Enjoy a delightful cruise on\n"
	.string "the ferry S.S. TIDAL.”$"

SlateportCity_Text_1DEBA0: @ 81DEBA0
	.string "NAME RATER’S HOUSE\n"
	.string "“POKéMON nicknames rated.”$"

SlateportCity_Text_1DEBCE: @ 81DEBCE
	.string "If a wild POKéMON gets hurt, it heals\n"
	.string "itself by chewing on BERRIES.\p"
	.string "Did you know that?\p"
	.string "Somebody saw that and got the idea\n"
	.string "of making medicine from BERRIES.\p"
	.string "Did you know that?\p"
	.string "To turn BERRIES into medicine,\n"
	.string "they must be crushed into powder.\p"
	.string "Did you know that?\p"
	.string "You seem to have an interest\n"
	.string "in BERRIES!\p"
	.string "I’ve got something good for someone\n"
	.string "like you.$"

SlateportCity_Text_1DED27: @ 81DED27
	.string "I recently had machines installed at\n"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
	.string "The BERRY CRUSH machines are at\n"
	.string "the DIRECT CORNER upstairs.\p"
	.string "Did you know?\p"
	.string "Could you make BERRY POWDER for\n"
	.string "me using those machines?\p"
	.string "I can make you all sorts of medicine\n"
	.string "if you bring me lots of BERRY POWDER.$"

SlateportCity_Text_1DEE40: @ 81DEE40
	.string "Have you brought me some\n"
	.string "BERRY POWDER?$"

SlateportCity_Text_1DEE67: @ 81DEE67
	.string "What would you like to exchange\n"
	.string "it with?$"

SlateportCity_Text_1DEE90: @ 81DEE90
	.string "Okay, you want to exchange your\n"
	.string "BERRY POWDER for one {STR_VAR_1}?$"

SlateportCity_Text_1DEEC9: @ 81DEEC9
	.string "Oh, dear. You don’t have enough\n"
	.string "BERRY POWDER.$"

SlateportCity_Text_1DEEF7: @ 81DEEF7
	.string "This is fine BERRY POWDER.\n"
	.string "It will make excellent medicine.\p"
	.string "Would you like to trade more of your\n"
	.string "BERRY POWDER for something else?$"

SlateportCity_Text_1DEF79: @ 81DEF79
	.string "Okay! When you get some more\n"
	.string "BERRY POWDER, bring it to me, please!$"

SlateportCity_Text_1DEFBC: @ 81DEFBC
	.string "Come back if you’d like to trade your\n"
	.string "BERRY POWDER for some medicine.\p"
	.string "I’m always running a bazaar here.\p"
	.string "Did you know?$"

SlateportCity_Text_1DF032: @ 81DF032
	.string "SCOTT: Huh?\n"
	.string "I’m sure I met you somewhere before.\p"
	.string "Have I introduced myself to you?\n"
	.string "If not, my name’s SCOTT.\p"
	.string "I just saw TEAM AQUA run away from\n"
	.string "here like they were stung.\p"
	.string "Let me guess--you drove them away?$"

SlateportCity_Text_1DF0FE: @ 81DF0FE
	.string "SCOTT: Hmm…\n"
	.string "Maybe, just maybe, this TRAINER…$"

SlateportCity_Text_1DF12B: @ 81DF12B
	.string "SCOTT: All right! I think you’re going\n"
	.string "to become a good friend.\p"
	.string "So, let’s register each other in our\n"
	.string "POKéNAVS.\p"
	.string "… … … … … …$"

SlateportCity_Text_1DF1A6: @ 81DF1A6
	.string "Registered this SCOTT person\n"
	.string "in the POKéNAV.$"

SlateportCity_Text_1DF1D3: @ 81DF1D3
	.string "SCOTT: What I’d like to do is tag along\n"
	.string "with you, but I do want to keep an eye\l"
	.string "on the talents of other people, too.\p"
	.string "So, I’ll be off to roam other towns\n"
	.string "a bit more.\p"
	.string "Be seeing you, {PLAYER}{KUN}!$"

SlateportCity_Text_1DF28C: @ 81DF28C
	.string "SCOTT: Oh, hey!\n"
	.string "If it isn’t {PLAYER}{KUN}!\p"
	.string "{PLAYER}{KUN}, let me guess--you’re going\n"
	.string "to take the BATTLE TENT challenge?\p"
	.string "Yeah! That’s a good idea!\n"
	.string "That’s a really great idea!\p"
	.string "After all, a tough TRAINER is\n"
	.string "the perfect fit for the BATTLE TENT!\p"
	.string "Give it your best effort!$"

