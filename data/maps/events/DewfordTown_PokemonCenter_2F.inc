DewfordTown_PokemonCenter_2F_MapObjects: @ 852DAA8
	object_event 1, MAP_OBJ_GFX_TEALA, 0, 0, 6, 2, 0, 8, 17, 0, 0, 0, DewfordTown_PokemonCenter_2F_EventScript_27375B, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_TEALA, 0, 0, 2, 2, 3, 8, 17, 0, 0, 0, DewfordTown_PokemonCenter_2F_EventScript_273761, 0, 0, 0
	object_event 3, MAP_OBJ_GFX_TEALA, 0, 0, 10, 2, 0, 8, 17, 0, 0, 0, DewfordTown_PokemonCenter_2F_EventScript_273767, 0, 0, 0
	object_event 4, MAP_OBJ_GFX_MYSTERY_GIFT_MAN, 0, 0, 1, 2, 0, 8, 17, 0, 0, 0, DewfordTown_PokemonCenter_2F_EventScript_276B03, 702, 0, 0

DewfordTown_PokemonCenter_2F_MapWarps: @ 852DB08
	warp_def 1, 6, 4, 2, DEWFORD_TOWN_POKEMON_CENTER_1F
	warp_def 5, 1, 3, 0, UNION_ROOM
	warp_def 9, 1, 3, 0, TRADE_CENTER

DewfordTown_PokemonCenter_2F_MapEvents:: @ 852DB20
	map_events DewfordTown_PokemonCenter_2F_MapObjects, DewfordTown_PokemonCenter_2F_MapWarps, 0x0, 0x0

