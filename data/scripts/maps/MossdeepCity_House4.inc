MossdeepCity_House4_MapScripts:: @ 8222DD7
	.byte 0

MossdeepCity_House4_EventScript_222DD8:: @ 8222DD8
	lock
	faceplayer
	checkflag FLAG_SYS_GAME_CLEAR
	goto_eq MossdeepCity_House4_EventScript_222DED
	msgbox MossdeepCity_House4_Text_222E31, 4
	release
	end

MossdeepCity_House4_EventScript_222DED:: @ 8222DED
	msgbox MossdeepCity_House4_Text_222E73, 4
	release
	end

MossdeepCity_House4_EventScript_222DF7:: @ 8222DF7
	lock
	faceplayer
	special sub_80E8BC8
	compare VAR_RESULT, 0
	goto_eq MossdeepCity_House4_EventScript_222E14
	special GetSecretBaseNearbyMapName
	msgbox MossdeepCity_House4_Text_222ECC, 4
	release
	end

MossdeepCity_House4_EventScript_222E14:: @ 8222E14
	msgbox MossdeepCity_House4_Text_222EF7, 4
	release
	end

MossdeepCity_House4_EventScript_222E1E:: @ 8222E1E
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, 0
	msgbox MossdeepCity_House4_Text_222F31, 4
	waitmoncry
	release
	end

MossdeepCity_House4_Text_222E31: @ 8222E31
	.string "My little brother says he likes to go\n"
	.string "find people’s SECRET BASES.$"

MossdeepCity_House4_Text_222E73: @ 8222E73
	.string "My little brother says he likes to\n"
	.string "visit people’s SECRET BASES and have\l"
	.string "POKéMON battles.$"

MossdeepCity_House4_Text_222ECC: @ 8222ECC
	.string "Was it you who made a SECRET BASE\n"
	.string "near {STR_VAR_1}?$"

MossdeepCity_House4_Text_222EF7: @ 8222EF7
	.string "You should make a SECRET BASE\n"
	.string "somewhere. I’ll go find it!$"

MossdeepCity_House4_Text_222F31: @ 8222F31
	.string "SKITTY: Miyaan?$"

