# 1 "data/maps/MauvilleCity_House1/scripts.pory"

# 2 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_MapScripts::
# 3 "data/maps/MauvilleCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_House1/scripts.pory"

# 5 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_RockSmashDude::
# 6 "data/maps/MauvilleCity_House1/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, MauvilleCity_House1_EventScript_ReceivedRockSmash
# 9 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ImRockSmashDudeTakeThis, MSGBOX_DEFAULT
# 10 "data/maps/MauvilleCity_House1/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 11 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 12 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY
# 13 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ExplainRockSmash, MSGBOX_DEFAULT
# 14 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 15 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 16 "data/maps/MauvilleCity_House1/scripts.pory"

# 17 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_ReceivedRockSmash::
# 18 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock, MSGBOX_DEFAULT
# 19 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 20 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 21 "data/maps/MauvilleCity_House1/scripts.pory"

# 22 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ImRockSmashDudeTakeThis:
# 23 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!\p"
# 24 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I hear people call me the ROCK SMASH\n"
# 25 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "GUY, but I find that sort of degrading.\p"
# 26 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I think I deserve a bit more respect,\n"
# 27 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "like maybe the ROCK SMASH DUDE.\p"
# 28 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!\p"
# 29 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Anyways, your POKéMON look pretty\n"
# 30 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "strong.\p"
# 31 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I like that!\n"
# 32 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Here, take this HIDDEN MACHINE!$"
# 33 "data/maps/MauvilleCity_House1/scripts.pory"

# 34 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ExplainRockSmash:
# 35 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "That HM contains ROCK SMASH.\p"
# 36 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "If you come across large boulders\n"
# 37 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "that block your path…\p"
# 38 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Well, use that HM move and smash\n"
# 39 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "them right out of your way!\p"
# 40 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Yes, sir! Smash rocks aside, I say!\n"
# 41 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!$"
# 42 "data/maps/MauvilleCity_House1/scripts.pory"

# 43 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock:
# 44 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Oh, yes, if you smash a rock, a POKéMON\n"
# 45 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "could come flying out of hiding.\p"
# 46 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!$"

coincase::
# 52 "data/maps/MauvilleCity_House1/scripts.pory"
	lockall
# 53 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 54 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_set FLAG_UNUSED_0x2BB, coincase_1
# 62 "data/maps/MauvilleCity_House1/scripts.pory"
	giveitem ITEM_COIN_CASE, 1
# 63 "data/maps/MauvilleCity_House1/scripts.pory"
	closemessage
# 64 "data/maps/MauvilleCity_House1/scripts.pory"
	showcoinsbox 10, 3
# 65 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
# 66 "data/maps/MauvilleCity_House1/scripts.pory"
	addcoins 9999
# 67 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 68 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
# 69 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 70 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_SCREAM_TAIL, 10, 3
# 71 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_SCREAM_TAIL, 10, 0
# 72 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_UNUSED_0x2BB
# 73 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 74 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 75 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 76 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
# 77 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 78 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_1, coincase_Text_2, coincase_Text_3, coincase_Text_4
# 79 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq coincase_4
# 100 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq coincase_5
# 121 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq coincase_6
# 141 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq coincase_7
	return

coincase_1:
# 55 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox coincase_Text_0, MSGBOX_DEFAULT
# 56 "data/maps/MauvilleCity_House1/scripts.pory"
	closemessage
# 57 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

coincase_4:
# 80 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 81 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox coincase_Text_5, MSGBOX_DEFAULT
# 82 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 83 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 84 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq coincase_12
# 94 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox coincase_Text_9, MSGBOX_DEFAULT
# 95 "data/maps/MauvilleCity_House1/scripts.pory"
	closemessage
# 96 "data/maps/MauvilleCity_House1/scripts.pory"
	releaseall
	end

coincase_5:
# 101 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 102 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox coincase_Text_10, MSGBOX_DEFAULT
# 103 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 104 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 105 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq coincase_15
# 115 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox coincase_Text_12, MSGBOX_DEFAULT
# 116 "data/maps/MauvilleCity_House1/scripts.pory"
	closemessage
# 117 "data/maps/MauvilleCity_House1/scripts.pory"
	releaseall
	end

coincase_6:
# 122 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 123 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox coincase_Text_13, MSGBOX_DEFAULT
# 124 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 125 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 126 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq coincase_18
# 135 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox coincase_Text_15, MSGBOX_DEFAULT
# 136 "data/maps/MauvilleCity_House1/scripts.pory"
	closemessage
# 137 "data/maps/MauvilleCity_House1/scripts.pory"
	releaseall
	end

coincase_7:
# 142 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_PIKACHU, 10, 3
# 143 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox coincase_Text_16, MSGBOX_DEFAULT
# 144 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 145 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 146 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq coincase_21
# 155 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox coincase_Text_18, MSGBOX_DEFAULT
# 156 "data/maps/MauvilleCity_House1/scripts.pory"
	closemessage
# 157 "data/maps/MauvilleCity_House1/scripts.pory"
	releaseall
	end

coincase_12:
# 85 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_CHARMANDER, CRY_MODE_NORMAL
# 86 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 87 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_CHARMANDER, 10, 0
# 88 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox coincase_Text_8, MSGBOX_DEFAULT
# 89 "data/maps/MauvilleCity_House1/scripts.pory"
	closemessage
# 90 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

coincase_15:
# 106 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_BULBASAUR, CRY_MODE_NORMAL
# 107 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 108 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_BULBASAUR, 10, 0
# 109 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox coincase_Text_11, MSGBOX_DEFAULT
# 110 "data/maps/MauvilleCity_House1/scripts.pory"
	closemessage
# 111 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

coincase_18:
# 127 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_SQUIRTLE, CRY_MODE_NORMAL
# 128 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 129 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox coincase_Text_14, MSGBOX_DEFAULT
# 130 "data/maps/MauvilleCity_House1/scripts.pory"
	closemessage
# 131 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

coincase_21:
# 147 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 148 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 149 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox coincase_Text_17, MSGBOX_DEFAULT
# 150 "data/maps/MauvilleCity_House1/scripts.pory"
	closemessage
# 151 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end


PokemonCoinShop::
# 167 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonCoinShop_RegionMenu
	return


PokemonCoinShop_RegionMenu::
# 172 "data/maps/MauvilleCity_House1/scripts.pory"
	lockall
# 173 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 174 "data/maps/MauvilleCity_House1/scripts.pory"
	showcoinsbox 16, 3
# 176 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_RegionMenu_Text_0, MSGBOX_DEFAULT
# 177 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, PokemonCoinShop_RegionMenu_Text_1, PokemonCoinShop_RegionMenu_Text_2, PokemonCoinShop_RegionMenu_Text_3
# 180 "data/maps/MauvilleCity_House1/scripts.pory"
	switch VAR_RESULT
# 181 "data/maps/MauvilleCity_House1/scripts.pory"
	case 127, PokemonCoinShop_RegionMenu_2
# 186 "data/maps/MauvilleCity_House1/scripts.pory"
	case 0, PokemonCoinShop_RegionMenu_3
# 189 "data/maps/MauvilleCity_House1/scripts.pory"
	case 1, PokemonCoinShop_RegionMenu_4
# 192 "data/maps/MauvilleCity_House1/scripts.pory"
	case 2, PokemonCoinShop_RegionMenu_5
	return

PokemonCoinShop_RegionMenu_2:
# 182 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_RegionMenu_Text_4, MSGBOX_DEFAULT
# 183 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 184 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_RegionMenu_3:
# 187 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 188 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonCoinShop_Kanto
	return

PokemonCoinShop_RegionMenu_4:
# 190 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 191 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonCoinShop_Johto
	return

PokemonCoinShop_RegionMenu_5:
# 193 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 194 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonCoinShop_Hoenn
	return


PokemonCoinShop_Kanto::
# 200 "data/maps/MauvilleCity_House1/scripts.pory"
	lockall
# 201 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 202 "data/maps/MauvilleCity_House1/scripts.pory"
	showcoinsbox 16, 3
# 204 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_0, MSGBOX_DEFAULT
# 205 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_1, coincase_Text_2, coincase_Text_3, coincase_Text_4, PokemonCoinShop_Kanto_Text_1
# 208 "data/maps/MauvilleCity_House1/scripts.pory"
	switch VAR_RESULT
# 209 "data/maps/MauvilleCity_House1/scripts.pory"
	case 127, PokemonCoinShop_Kanto_2
# 214 "data/maps/MauvilleCity_House1/scripts.pory"
	case 4, PokemonCoinShop_Kanto_3
# 218 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCoinShop_Kanto_6
# 252 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokemonCoinShop_Kanto_9
# 286 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokemonCoinShop_Kanto_16
# 320 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokemonCoinShop_Kanto_25
	return

PokemonCoinShop_Kanto_2:
# 210 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_RegionMenu_Text_4, MSGBOX_DEFAULT
# 211 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 212 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Kanto_3:
# 215 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 216 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonCoinShop_RegionMenu
	return

PokemonCoinShop_Kanto_6:
# 220 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 221 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 500
	goto_if_ge PokemonCoinShop_Kanto_12
# 246 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_6, MSGBOX_DEFAULT
PokemonCoinShop_Kanto_11:
# 248 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 249 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Kanto_9:
# 254 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 255 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 500
	goto_if_ge PokemonCoinShop_Kanto_19
# 280 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_6, MSGBOX_DEFAULT
PokemonCoinShop_Kanto_18:
# 282 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 283 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Kanto_12:
# 222 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 223 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonCoinShop_Kanto_23
# 229 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 4, 3
# 230 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_3, MSGBOX_DEFAULT
# 231 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 232 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 233 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCoinShop_Kanto_34
# 242 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_5, MSGBOX_DEFAULT
# 243 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Kanto_11

PokemonCoinShop_Kanto_16:
# 288 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 289 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 500
	goto_if_ge PokemonCoinShop_Kanto_28
# 314 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_6, MSGBOX_DEFAULT
PokemonCoinShop_Kanto_27:
# 316 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 317 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Kanto_19:
# 256 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 257 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonCoinShop_Kanto_32
# 263 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 4, 3
# 264 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_8, MSGBOX_DEFAULT
# 265 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 266 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 267 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCoinShop_Kanto_44
# 276 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 277 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Kanto_18

PokemonCoinShop_Kanto_23:
# 224 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_2, MSGBOX_DEFAULT
# 225 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 226 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Kanto_25:
# 322 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 323 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 500
	goto_if_ge PokemonCoinShop_Kanto_38
# 348 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_6, MSGBOX_DEFAULT
PokemonCoinShop_Kanto_37:
# 350 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 351 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Kanto_28:
# 290 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 291 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonCoinShop_Kanto_42
# 297 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 4, 3
# 298 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_11, MSGBOX_DEFAULT
# 299 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 300 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 301 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCoinShop_Kanto_50
# 310 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 311 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Kanto_27

PokemonCoinShop_Kanto_32:
# 258 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 259 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 260 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Kanto_34:
# 234 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 500
# 235 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 236 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_CHARMANDER, 50, ITEM_NONE
# 237 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_CHARMANDER, CRY_MODE_NORMAL
# 238 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 239 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_4, MSGBOX_DEFAULT
# 240 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Kanto_11

PokemonCoinShop_Kanto_38:
# 324 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 325 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonCoinShop_Kanto_48
# 331 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_PIKACHU, 4, 3
# 332 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_13, MSGBOX_DEFAULT
# 333 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 334 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 335 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCoinShop_Kanto_53
# 344 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 345 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Kanto_37

PokemonCoinShop_Kanto_42:
# 292 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 293 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 294 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Kanto_44:
# 268 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 500
# 269 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 270 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_BULBASAUR, 50, ITEM_NONE
# 271 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_BULBASAUR, CRY_MODE_NORMAL
# 272 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 273 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_9, MSGBOX_DEFAULT
# 274 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Kanto_18

PokemonCoinShop_Kanto_48:
# 326 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 327 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 328 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Kanto_50:
# 302 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 500
# 303 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 304 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_SQUIRTLE, 50, ITEM_NONE
# 305 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_SQUIRTLE, CRY_MODE_NORMAL
# 306 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 307 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_12, MSGBOX_DEFAULT
# 308 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Kanto_27

PokemonCoinShop_Kanto_53:
# 336 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 500
# 337 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 338 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_PIKACHU, 50, ITEM_NONE
# 339 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 340 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 341 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_14, MSGBOX_DEFAULT
# 342 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Kanto_37


PokemonCoinShop_Johto::
# 359 "data/maps/MauvilleCity_House1/scripts.pory"
	lockall
# 360 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 361 "data/maps/MauvilleCity_House1/scripts.pory"
	showcoinsbox 16, 3
# 363 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_0, MSGBOX_DEFAULT
# 364 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, PokemonCoinShop_Johto_Text_1, PokemonCoinShop_Johto_Text_2, PokemonCoinShop_Johto_Text_3, PokemonCoinShop_Johto_Text_4, PokemonCoinShop_Kanto_Text_1
# 367 "data/maps/MauvilleCity_House1/scripts.pory"
	switch VAR_RESULT
# 368 "data/maps/MauvilleCity_House1/scripts.pory"
	case 127, PokemonCoinShop_Johto_2
# 373 "data/maps/MauvilleCity_House1/scripts.pory"
	case 4, PokemonCoinShop_Johto_3
# 377 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCoinShop_Johto_6
# 411 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokemonCoinShop_Johto_9
# 445 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokemonCoinShop_Johto_16
# 479 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokemonCoinShop_Johto_25
	return

PokemonCoinShop_Johto_2:
# 369 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_RegionMenu_Text_4, MSGBOX_DEFAULT
# 370 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 371 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Johto_3:
# 374 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 375 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonCoinShop_RegionMenu
	return

PokemonCoinShop_Johto_6:
# 379 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 380 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 500
	goto_if_ge PokemonCoinShop_Johto_12
# 405 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_9, MSGBOX_DEFAULT
PokemonCoinShop_Johto_11:
# 407 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 408 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Johto_9:
# 413 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 414 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 500
	goto_if_ge PokemonCoinShop_Johto_19
# 439 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_9, MSGBOX_DEFAULT
PokemonCoinShop_Johto_18:
# 441 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 442 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Johto_12:
# 381 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 382 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonCoinShop_Johto_23
# 388 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 4, 3
# 389 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_6, MSGBOX_DEFAULT
# 390 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 391 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 392 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCoinShop_Johto_34
# 401 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_8, MSGBOX_DEFAULT
# 402 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Johto_11

PokemonCoinShop_Johto_16:
# 447 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 448 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 500
	goto_if_ge PokemonCoinShop_Johto_28
# 473 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_9, MSGBOX_DEFAULT
PokemonCoinShop_Johto_27:
# 475 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 476 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Johto_19:
# 415 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 416 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonCoinShop_Johto_32
# 422 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 4, 3
# 423 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_10, MSGBOX_DEFAULT
# 424 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 425 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 426 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCoinShop_Johto_44
# 435 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_8, MSGBOX_DEFAULT
# 436 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Johto_18

PokemonCoinShop_Johto_23:
# 383 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_5, MSGBOX_DEFAULT
# 384 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 385 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Johto_25:
# 481 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 482 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 500
	goto_if_ge PokemonCoinShop_Johto_38
# 507 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_9, MSGBOX_DEFAULT
PokemonCoinShop_Johto_37:
# 509 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 510 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Johto_28:
# 449 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 450 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonCoinShop_Johto_42
# 456 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_TOTODILE, 4, 3
# 457 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_12, MSGBOX_DEFAULT
# 458 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 459 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 460 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCoinShop_Johto_50
# 469 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_8, MSGBOX_DEFAULT
# 470 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Johto_27

PokemonCoinShop_Johto_32:
# 417 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_5, MSGBOX_DEFAULT
# 418 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 419 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Johto_34:
# 393 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 500
# 394 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 395 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_CHIKORITA, 50, ITEM_NONE
# 396 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 397 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 398 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_7, MSGBOX_DEFAULT
# 399 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Johto_11

PokemonCoinShop_Johto_38:
# 483 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 484 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonCoinShop_Johto_48
# 490 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_MARILL, 4, 3
# 491 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_14, MSGBOX_DEFAULT
# 492 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 493 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 494 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCoinShop_Johto_53
# 503 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_8, MSGBOX_DEFAULT
# 504 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Johto_37

PokemonCoinShop_Johto_42:
# 451 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_5, MSGBOX_DEFAULT
# 452 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 453 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Johto_44:
# 427 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 500
# 428 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 429 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 50, ITEM_NONE
# 430 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 431 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 432 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_11, MSGBOX_DEFAULT
# 433 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Johto_18

PokemonCoinShop_Johto_48:
# 485 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_5, MSGBOX_DEFAULT
# 486 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 487 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Johto_50:
# 461 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 500
# 462 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 463 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_TOTODILE, 50, ITEM_NONE
# 464 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_TOTODILE, CRY_MODE_NORMAL
# 465 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 466 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_13, MSGBOX_DEFAULT
# 467 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Johto_27

PokemonCoinShop_Johto_53:
# 495 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 500
# 496 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 497 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_MARILL, 50, ITEM_NONE
# 498 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_MARILL, CRY_MODE_NORMAL
# 499 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 500 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_15, MSGBOX_DEFAULT
# 501 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Johto_37


PokemonCoinShop_Hoenn::
# 518 "data/maps/MauvilleCity_House1/scripts.pory"
	lockall
# 519 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 520 "data/maps/MauvilleCity_House1/scripts.pory"
	showcoinsbox 16, 3
# 522 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Hoenn_Text_0, MSGBOX_DEFAULT
# 523 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, PokemonCoinShop_Hoenn_Text_1, PokemonCoinShop_Hoenn_Text_2, PokemonCoinShop_Hoenn_Text_3, PokemonCoinShop_Hoenn_Text_4, PokemonCoinShop_Kanto_Text_1
# 526 "data/maps/MauvilleCity_House1/scripts.pory"
	switch VAR_RESULT
# 527 "data/maps/MauvilleCity_House1/scripts.pory"
	case 127, PokemonCoinShop_Hoenn_2
# 532 "data/maps/MauvilleCity_House1/scripts.pory"
	case 4, PokemonCoinShop_Hoenn_3
# 536 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCoinShop_Hoenn_6
# 570 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokemonCoinShop_Hoenn_9
# 604 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokemonCoinShop_Hoenn_16
# 638 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokemonCoinShop_Hoenn_25
	return

PokemonCoinShop_Hoenn_2:
# 528 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_RegionMenu_Text_4, MSGBOX_DEFAULT
# 529 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 530 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Hoenn_3:
# 533 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 534 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonCoinShop_RegionMenu
	return

PokemonCoinShop_Hoenn_6:
# 538 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 539 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 500
	goto_if_ge PokemonCoinShop_Hoenn_12
# 564 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_9, MSGBOX_DEFAULT
PokemonCoinShop_Hoenn_11:
# 566 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 567 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Hoenn_9:
# 572 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 573 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 500
	goto_if_ge PokemonCoinShop_Hoenn_19
# 598 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_9, MSGBOX_DEFAULT
PokemonCoinShop_Hoenn_18:
# 600 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 601 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Hoenn_12:
# 540 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 541 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonCoinShop_Hoenn_23
# 547 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_TREECKO, 4, 3
# 548 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Hoenn_Text_5, MSGBOX_DEFAULT
# 549 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 550 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 551 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCoinShop_Hoenn_34
# 560 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_8, MSGBOX_DEFAULT
# 561 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Hoenn_11

PokemonCoinShop_Hoenn_16:
# 606 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 607 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 500
	goto_if_ge PokemonCoinShop_Hoenn_28
# 632 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_9, MSGBOX_DEFAULT
PokemonCoinShop_Hoenn_27:
# 634 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 635 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Hoenn_19:
# 574 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 575 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonCoinShop_Hoenn_32
# 581 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_TORCHIC, 4, 3
# 582 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Hoenn_Text_7, MSGBOX_DEFAULT
# 583 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 584 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 585 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCoinShop_Hoenn_44
# 594 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_8, MSGBOX_DEFAULT
# 595 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Hoenn_18

PokemonCoinShop_Hoenn_23:
# 542 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_5, MSGBOX_DEFAULT
# 543 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 544 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Hoenn_25:
# 640 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 641 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 500
	goto_if_ge PokemonCoinShop_Hoenn_38
# 666 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_9, MSGBOX_DEFAULT
PokemonCoinShop_Hoenn_37:
# 668 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 669 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Hoenn_28:
# 608 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 609 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonCoinShop_Hoenn_42
# 615 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_MUDKIP, 4, 3
# 616 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Hoenn_Text_9, MSGBOX_DEFAULT
# 617 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 618 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 619 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCoinShop_Hoenn_50
# 628 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_8, MSGBOX_DEFAULT
# 629 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Hoenn_27

PokemonCoinShop_Hoenn_32:
# 576 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_5, MSGBOX_DEFAULT
# 577 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 578 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Hoenn_34:
# 552 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 500
# 553 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 554 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_TREECKO, 50, ITEM_NONE
# 555 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_TREECKO, CRY_MODE_NORMAL
# 556 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 557 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Hoenn_Text_6, MSGBOX_DEFAULT
# 558 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Hoenn_11

PokemonCoinShop_Hoenn_38:
# 642 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 643 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonCoinShop_Hoenn_48
# 649 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_RALTS, 4, 3
# 650 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Hoenn_Text_11, MSGBOX_DEFAULT
# 651 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 652 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 653 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCoinShop_Hoenn_53
# 662 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_8, MSGBOX_DEFAULT
# 663 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Hoenn_37

PokemonCoinShop_Hoenn_42:
# 610 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_5, MSGBOX_DEFAULT
# 611 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 612 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Hoenn_44:
# 586 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 500
# 587 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 588 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_TORCHIC, 50, ITEM_NONE
# 589 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_NORMAL
# 590 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 591 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Hoenn_Text_8, MSGBOX_DEFAULT
# 592 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Hoenn_18

PokemonCoinShop_Hoenn_48:
# 644 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_5, MSGBOX_DEFAULT
# 645 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 646 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonCoinShop_Hoenn_50:
# 620 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 500
# 621 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 622 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_MUDKIP, 50, ITEM_NONE
# 623 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_MUDKIP, CRY_MODE_NORMAL
# 624 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 625 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Hoenn_Text_10, MSGBOX_DEFAULT
# 626 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Hoenn_27

PokemonCoinShop_Hoenn_53:
# 654 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 500
# 655 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 656 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_RALTS, 50, ITEM_NONE
# 657 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 658 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 659 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Hoenn_Text_12, MSGBOX_DEFAULT
# 660 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonCoinShop_Hoenn_37


PokemonLegendShop::
# 678 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonLegendShop_RegionMenu
	return


PokemonLegendShop_RegionMenu::
# 683 "data/maps/MauvilleCity_House1/scripts.pory"
	lockall
# 684 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 685 "data/maps/MauvilleCity_House1/scripts.pory"
	showcoinsbox 16, 3
# 687 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_RegionMenu_Text_0, MSGBOX_DEFAULT
# 688 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, PokemonLegendShop_RegionMenu_Text_1, PokemonLegendShop_RegionMenu_Text_2, PokemonLegendShop_RegionMenu_Text_3
# 691 "data/maps/MauvilleCity_House1/scripts.pory"
	switch VAR_RESULT
# 692 "data/maps/MauvilleCity_House1/scripts.pory"
	case 127, PokemonLegendShop_RegionMenu_2
# 697 "data/maps/MauvilleCity_House1/scripts.pory"
	case 0, PokemonLegendShop_RegionMenu_3
# 700 "data/maps/MauvilleCity_House1/scripts.pory"
	case 1, PokemonLegendShop_RegionMenu_4
# 703 "data/maps/MauvilleCity_House1/scripts.pory"
	case 2, PokemonLegendShop_RegionMenu_5
	return

PokemonLegendShop_RegionMenu_2:
# 693 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_RegionMenu_Text_4, MSGBOX_DEFAULT
# 694 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 695 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_RegionMenu_3:
# 698 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 699 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonLegendShop_Kanto
	return

PokemonLegendShop_RegionMenu_4:
# 701 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 702 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonLegendShop_Johto
	return

PokemonLegendShop_RegionMenu_5:
# 704 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 705 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonLegendShop_Hoenn
	return


PokemonLegendShop_Kanto::
# 711 "data/maps/MauvilleCity_House1/scripts.pory"
	lockall
# 712 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 713 "data/maps/MauvilleCity_House1/scripts.pory"
	showcoinsbox 16, 3
# 715 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_0, MSGBOX_DEFAULT
# 716 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PokemonLegendShop_Kanto_Text_1, PokemonLegendShop_Kanto_Text_2, PokemonLegendShop_Kanto_Text_3, PokemonLegendShop_Kanto_Text_4, PokemonLegendShop_Kanto_Text_5, PokemonCoinShop_Kanto_Text_1
# 719 "data/maps/MauvilleCity_House1/scripts.pory"
	switch VAR_RESULT
# 720 "data/maps/MauvilleCity_House1/scripts.pory"
	case 127, PokemonLegendShop_Kanto_2
# 725 "data/maps/MauvilleCity_House1/scripts.pory"
	case 5, PokemonLegendShop_Kanto_3
# 729 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonLegendShop_Kanto_6
# 763 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokemonLegendShop_Kanto_9
# 797 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokemonLegendShop_Kanto_16
# 831 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokemonLegendShop_Kanto_26
# 865 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokemonLegendShop_Kanto_38
	return

PokemonLegendShop_Kanto_2:
# 721 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_RegionMenu_Text_4, MSGBOX_DEFAULT
# 722 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 723 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Kanto_3:
# 726 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 727 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonLegendShop_RegionMenu
	return

PokemonLegendShop_Kanto_6:
# 731 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 732 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 2000
	goto_if_ge PokemonLegendShop_Kanto_12
# 757 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_8, MSGBOX_DEFAULT
PokemonLegendShop_Kanto_11:
# 759 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 760 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Kanto_9:
# 765 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 766 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 2500
	goto_if_ge PokemonLegendShop_Kanto_19
# 791 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_11, MSGBOX_DEFAULT
PokemonLegendShop_Kanto_18:
# 793 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 794 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Kanto_12:
# 733 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 734 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonLegendShop_Kanto_23
# 740 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_MEWTWO, 4, 3
# 741 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_6, MSGBOX_DEFAULT
# 742 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 743 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 744 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonLegendShop_Kanto_35
# 753 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_5, MSGBOX_DEFAULT
# 754 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Kanto_11

PokemonLegendShop_Kanto_16:
# 799 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 800 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 1000
	goto_if_ge PokemonLegendShop_Kanto_29
# 825 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_14, MSGBOX_DEFAULT
PokemonLegendShop_Kanto_28:
# 827 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 828 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Kanto_19:
# 767 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 768 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonLegendShop_Kanto_33
# 774 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_MEW, 4, 3
# 775 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_9, MSGBOX_DEFAULT
# 776 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 777 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 778 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonLegendShop_Kanto_47
# 787 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 788 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Kanto_18

PokemonLegendShop_Kanto_23:
# 735 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_2, MSGBOX_DEFAULT
# 736 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 737 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Kanto_26:
# 833 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 834 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 800
	goto_if_ge PokemonLegendShop_Kanto_41
# 859 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_17, MSGBOX_DEFAULT
PokemonLegendShop_Kanto_40:
# 861 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 862 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Kanto_29:
# 801 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 802 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonLegendShop_Kanto_45
# 808 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_DRAGONITE, 4, 3
# 809 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_12, MSGBOX_DEFAULT
# 810 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 811 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 812 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonLegendShop_Kanto_57
# 821 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 822 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Kanto_28

PokemonLegendShop_Kanto_33:
# 769 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 770 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 771 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Kanto_35:
# 745 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 2000
# 746 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 747 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_MEWTWO, 50, ITEM_NONE
# 748 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_NORMAL
# 749 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 750 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_7, MSGBOX_DEFAULT
# 751 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Kanto_11

PokemonLegendShop_Kanto_38:
# 867 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 868 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 800
	goto_if_ge PokemonLegendShop_Kanto_51
# 893 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_17, MSGBOX_DEFAULT
PokemonLegendShop_Kanto_50:
# 895 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 896 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Kanto_41:
# 835 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 836 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonLegendShop_Kanto_55
# 842 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_GENGAR, 4, 3
# 843 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_15, MSGBOX_DEFAULT
# 844 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 845 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 846 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonLegendShop_Kanto_63
# 855 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 856 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Kanto_40

PokemonLegendShop_Kanto_45:
# 803 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 804 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 805 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Kanto_47:
# 779 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 2500
# 780 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 781 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_MEW, 50, ITEM_NONE
# 782 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_NORMAL
# 783 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 784 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_10, MSGBOX_DEFAULT
# 785 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Kanto_18

PokemonLegendShop_Kanto_51:
# 869 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 870 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonLegendShop_Kanto_61
# 876 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_SNORLAX, 4, 3
# 877 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_18, MSGBOX_DEFAULT
# 878 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 879 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 880 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonLegendShop_Kanto_66
# 889 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 890 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Kanto_50

PokemonLegendShop_Kanto_55:
# 837 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 838 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 839 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Kanto_57:
# 813 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 1000
# 814 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 815 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_DRAGONITE, 50, ITEM_NONE
# 816 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_DRAGONITE, CRY_MODE_NORMAL
# 817 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 818 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_13, MSGBOX_DEFAULT
# 819 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Kanto_28

PokemonLegendShop_Kanto_61:
# 871 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 872 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 873 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Kanto_63:
# 847 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 800
# 848 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 849 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_GENGAR, 50, ITEM_NONE
# 850 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_GENGAR, CRY_MODE_NORMAL
# 851 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 852 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_16, MSGBOX_DEFAULT
# 853 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Kanto_40

PokemonLegendShop_Kanto_66:
# 881 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 800
# 882 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 883 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_SNORLAX, 50, ITEM_NONE
# 884 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_SNORLAX, CRY_MODE_NORMAL
# 885 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 886 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_19, MSGBOX_DEFAULT
# 887 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Kanto_50


PokemonLegendShop_Johto::
# 904 "data/maps/MauvilleCity_House1/scripts.pory"
	lockall
# 905 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 906 "data/maps/MauvilleCity_House1/scripts.pory"
	showcoinsbox 16, 3
# 908 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Johto_Text_0, MSGBOX_DEFAULT
# 909 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PokemonLegendShop_Johto_Text_1, PokemonLegendShop_Johto_Text_2, PokemonLegendShop_Johto_Text_3, PokemonLegendShop_Johto_Text_4, PokemonLegendShop_Johto_Text_5, PokemonCoinShop_Kanto_Text_1
# 912 "data/maps/MauvilleCity_House1/scripts.pory"
	switch VAR_RESULT
# 913 "data/maps/MauvilleCity_House1/scripts.pory"
	case 127, PokemonLegendShop_Johto_2
# 918 "data/maps/MauvilleCity_House1/scripts.pory"
	case 5, PokemonLegendShop_Johto_3
# 922 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonLegendShop_Johto_6
# 956 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokemonLegendShop_Johto_9
# 990 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokemonLegendShop_Johto_16
# 1024 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokemonLegendShop_Johto_26
# 1058 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokemonLegendShop_Johto_38
	return

PokemonLegendShop_Johto_2:
# 914 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_RegionMenu_Text_4, MSGBOX_DEFAULT
# 915 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 916 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Johto_3:
# 919 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 920 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonLegendShop_RegionMenu
	return

PokemonLegendShop_Johto_6:
# 924 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 925 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 2000
	goto_if_ge PokemonLegendShop_Johto_12
# 950 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Johto_Text_8, MSGBOX_DEFAULT
PokemonLegendShop_Johto_11:
# 952 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 953 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Johto_9:
# 958 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 959 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 2000
	goto_if_ge PokemonLegendShop_Johto_19
# 984 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Johto_Text_8, MSGBOX_DEFAULT
PokemonLegendShop_Johto_18:
# 986 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 987 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Johto_12:
# 926 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 927 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonLegendShop_Johto_23
# 933 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_LUGIA, 4, 3
# 934 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Johto_Text_6, MSGBOX_DEFAULT
# 935 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 936 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 937 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonLegendShop_Johto_35
# 946 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_8, MSGBOX_DEFAULT
# 947 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Johto_11

PokemonLegendShop_Johto_16:
# 992 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 993 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 1500
	goto_if_ge PokemonLegendShop_Johto_29
# 1018 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Johto_Text_13, MSGBOX_DEFAULT
PokemonLegendShop_Johto_28:
# 1020 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1021 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Johto_19:
# 960 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 961 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonLegendShop_Johto_33
# 967 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_HO_OH, 4, 3
# 968 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Johto_Text_9, MSGBOX_DEFAULT
# 969 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 970 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 971 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonLegendShop_Johto_47
# 980 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_8, MSGBOX_DEFAULT
# 981 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Johto_18

PokemonLegendShop_Johto_23:
# 928 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_5, MSGBOX_DEFAULT
# 929 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 930 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Johto_26:
# 1026 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1027 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 1200
	goto_if_ge PokemonLegendShop_Johto_41
# 1052 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Johto_Text_16, MSGBOX_DEFAULT
PokemonLegendShop_Johto_40:
# 1054 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1055 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Johto_29:
# 994 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 995 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonLegendShop_Johto_45
# 1001 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_SUICUNE, 4, 3
# 1002 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Johto_Text_11, MSGBOX_DEFAULT
# 1003 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1004 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1005 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonLegendShop_Johto_57
# 1014 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_8, MSGBOX_DEFAULT
# 1015 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Johto_28

PokemonLegendShop_Johto_33:
# 962 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_5, MSGBOX_DEFAULT
# 963 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 964 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Johto_35:
# 938 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 2000
# 939 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 940 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_LUGIA, 50, ITEM_NONE
# 941 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_NORMAL
# 942 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 943 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Johto_Text_7, MSGBOX_DEFAULT
# 944 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Johto_11

PokemonLegendShop_Johto_38:
# 1060 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1061 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 1000
	goto_if_ge PokemonLegendShop_Johto_51
# 1086 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Johto_Text_19, MSGBOX_DEFAULT
PokemonLegendShop_Johto_50:
# 1088 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1089 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Johto_41:
# 1028 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1029 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonLegendShop_Johto_55
# 1035 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_TYRANITAR, 4, 3
# 1036 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Johto_Text_14, MSGBOX_DEFAULT
# 1037 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1038 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1039 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonLegendShop_Johto_63
# 1048 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_8, MSGBOX_DEFAULT
# 1049 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Johto_40

PokemonLegendShop_Johto_45:
# 996 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_5, MSGBOX_DEFAULT
# 997 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 998 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Johto_47:
# 972 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 2000
# 973 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 974 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_HO_OH, 50, ITEM_NONE
# 975 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_NORMAL
# 976 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 977 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Johto_Text_10, MSGBOX_DEFAULT
# 978 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Johto_18

PokemonLegendShop_Johto_51:
# 1062 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1063 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonLegendShop_Johto_61
# 1069 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_BLISSEY, 4, 3
# 1070 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Johto_Text_17, MSGBOX_DEFAULT
# 1071 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1072 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1073 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonLegendShop_Johto_66
# 1082 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_8, MSGBOX_DEFAULT
# 1083 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Johto_50

PokemonLegendShop_Johto_55:
# 1030 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_5, MSGBOX_DEFAULT
# 1031 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1032 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Johto_57:
# 1006 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 1500
# 1007 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1008 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_SUICUNE, 50, ITEM_NONE
# 1009 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
# 1010 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1011 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Johto_Text_12, MSGBOX_DEFAULT
# 1012 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Johto_28

PokemonLegendShop_Johto_61:
# 1064 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_5, MSGBOX_DEFAULT
# 1065 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1066 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Johto_63:
# 1040 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 1200
# 1041 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1042 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_TYRANITAR, 50, ITEM_NONE
# 1043 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_TYRANITAR, CRY_MODE_NORMAL
# 1044 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1045 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Johto_Text_15, MSGBOX_DEFAULT
# 1046 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Johto_40

PokemonLegendShop_Johto_66:
# 1074 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 1000
# 1075 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1076 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_BLISSEY, 50, ITEM_NONE
# 1077 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 1078 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1079 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Johto_Text_18, MSGBOX_DEFAULT
# 1080 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Johto_50


PokemonLegendShop_Hoenn::
# 1097 "data/maps/MauvilleCity_House1/scripts.pory"
	lockall
# 1098 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 1099 "data/maps/MauvilleCity_House1/scripts.pory"
	showcoinsbox 16, 3
# 1101 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Hoenn_Text_0, MSGBOX_DEFAULT
# 1102 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PokemonLegendShop_Hoenn_Text_1, PokemonLegendShop_Hoenn_Text_2, PokemonLegendShop_Hoenn_Text_3, PokemonLegendShop_Hoenn_Text_4, PokemonLegendShop_Hoenn_Text_5, PokemonCoinShop_Kanto_Text_1
# 1105 "data/maps/MauvilleCity_House1/scripts.pory"
	switch VAR_RESULT
# 1106 "data/maps/MauvilleCity_House1/scripts.pory"
	case 127, PokemonLegendShop_Hoenn_2
# 1111 "data/maps/MauvilleCity_House1/scripts.pory"
	case 5, PokemonLegendShop_Hoenn_3
# 1115 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonLegendShop_Hoenn_6
# 1149 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokemonLegendShop_Hoenn_9
# 1183 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokemonLegendShop_Hoenn_16
# 1217 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokemonLegendShop_Hoenn_26
# 1251 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokemonLegendShop_Hoenn_38
	return

PokemonLegendShop_Hoenn_2:
# 1107 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_RegionMenu_Text_4, MSGBOX_DEFAULT
# 1108 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1109 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Hoenn_3:
# 1112 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1113 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonLegendShop_RegionMenu
	return

PokemonLegendShop_Hoenn_6:
# 1117 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1118 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 2500
	goto_if_ge PokemonLegendShop_Hoenn_12
# 1143 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Hoenn_Text_8, MSGBOX_DEFAULT
PokemonLegendShop_Hoenn_11:
# 1145 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1146 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Hoenn_9:
# 1151 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1152 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 2000
	goto_if_ge PokemonLegendShop_Hoenn_19
# 1177 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Johto_Text_8, MSGBOX_DEFAULT
PokemonLegendShop_Hoenn_18:
# 1179 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1180 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Hoenn_12:
# 1119 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1120 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonLegendShop_Hoenn_23
# 1126 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_RAYQUAZA, 4, 3
# 1127 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Hoenn_Text_6, MSGBOX_DEFAULT
# 1128 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1129 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1130 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonLegendShop_Hoenn_35
# 1139 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_8, MSGBOX_DEFAULT
# 1140 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Hoenn_11

PokemonLegendShop_Hoenn_16:
# 1185 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1186 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 2000
	goto_if_ge PokemonLegendShop_Hoenn_29
# 1211 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Johto_Text_8, MSGBOX_DEFAULT
PokemonLegendShop_Hoenn_28:
# 1213 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1214 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Hoenn_19:
# 1153 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1154 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonLegendShop_Hoenn_33
# 1160 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_GROUDON, 4, 3
# 1161 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Hoenn_Text_9, MSGBOX_DEFAULT
# 1162 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1163 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1164 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonLegendShop_Hoenn_47
# 1173 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_8, MSGBOX_DEFAULT
# 1174 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Hoenn_18

PokemonLegendShop_Hoenn_23:
# 1121 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_5, MSGBOX_DEFAULT
# 1122 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1123 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Hoenn_26:
# 1219 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1220 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 1500
	goto_if_ge PokemonLegendShop_Hoenn_41
# 1245 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Johto_Text_13, MSGBOX_DEFAULT
PokemonLegendShop_Hoenn_40:
# 1247 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1248 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Hoenn_29:
# 1187 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1188 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonLegendShop_Hoenn_45
# 1194 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_KYOGRE, 4, 3
# 1195 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Hoenn_Text_11, MSGBOX_DEFAULT
# 1196 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1197 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1198 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonLegendShop_Hoenn_57
# 1207 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_8, MSGBOX_DEFAULT
# 1208 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Hoenn_28

PokemonLegendShop_Hoenn_33:
# 1155 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_5, MSGBOX_DEFAULT
# 1156 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1157 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Hoenn_35:
# 1131 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 2500
# 1132 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1133 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_RAYQUAZA, 50, ITEM_NONE
# 1134 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_NORMAL
# 1135 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1136 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Hoenn_Text_7, MSGBOX_DEFAULT
# 1137 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Hoenn_11

PokemonLegendShop_Hoenn_38:
# 1253 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1254 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 1500
	goto_if_ge PokemonLegendShop_Hoenn_51
# 1279 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Johto_Text_13, MSGBOX_DEFAULT
PokemonLegendShop_Hoenn_50:
# 1281 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1282 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Hoenn_41:
# 1221 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1222 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonLegendShop_Hoenn_55
# 1228 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_METAGROSS, 4, 3
# 1229 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Hoenn_Text_13, MSGBOX_DEFAULT
# 1230 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1231 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1232 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonLegendShop_Hoenn_63
# 1241 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_8, MSGBOX_DEFAULT
# 1242 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Hoenn_40

PokemonLegendShop_Hoenn_45:
# 1189 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_5, MSGBOX_DEFAULT
# 1190 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1191 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Hoenn_47:
# 1165 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 2000
# 1166 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1167 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_GROUDON, 50, ITEM_NONE
# 1168 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_NORMAL
# 1169 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1170 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Hoenn_Text_10, MSGBOX_DEFAULT
# 1171 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Hoenn_18

PokemonLegendShop_Hoenn_51:
# 1255 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1256 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonLegendShop_Hoenn_61
# 1262 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_SALAMENCE, 4, 3
# 1263 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Hoenn_Text_15, MSGBOX_DEFAULT
# 1264 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1265 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1266 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonLegendShop_Hoenn_66
# 1275 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_8, MSGBOX_DEFAULT
# 1276 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Hoenn_50

PokemonLegendShop_Hoenn_55:
# 1223 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_5, MSGBOX_DEFAULT
# 1224 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1225 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Hoenn_57:
# 1199 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 2000
# 1200 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1201 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_KYOGRE, 50, ITEM_NONE
# 1202 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_NORMAL
# 1203 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1204 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Hoenn_Text_12, MSGBOX_DEFAULT
# 1205 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Hoenn_28

PokemonLegendShop_Hoenn_61:
# 1257 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Johto_Text_5, MSGBOX_DEFAULT
# 1258 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1259 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonLegendShop_Hoenn_63:
# 1233 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 1500
# 1234 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1235 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_METAGROSS, 50, ITEM_NONE
# 1236 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_METAGROSS, CRY_MODE_NORMAL
# 1237 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1238 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Hoenn_Text_14, MSGBOX_DEFAULT
# 1239 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Hoenn_40

PokemonLegendShop_Hoenn_66:
# 1267 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 1500
# 1268 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1269 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_SALAMENCE, 50, ITEM_NONE
# 1270 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_SALAMENCE, CRY_MODE_NORMAL
# 1271 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1272 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Hoenn_Text_16, MSGBOX_DEFAULT
# 1273 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonLegendShop_Hoenn_50


PokemonRegionalShop::
# 1293 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonRegionalShop_RegionMenu
	return


PokemonRegionalShop_RegionMenu::
# 1298 "data/maps/MauvilleCity_House1/scripts.pory"
	lockall
# 1299 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 1300 "data/maps/MauvilleCity_House1/scripts.pory"
	showcoinsbox 16, 3
# 1302 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_RegionMenu_Text_0, MSGBOX_DEFAULT
# 1303 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, PokemonRegionalShop_RegionMenu_Text_1, PokemonRegionalShop_RegionMenu_Text_2, PokemonRegionalShop_RegionMenu_Text_3
# 1306 "data/maps/MauvilleCity_House1/scripts.pory"
	switch VAR_RESULT
# 1307 "data/maps/MauvilleCity_House1/scripts.pory"
	case 127, PokemonRegionalShop_RegionMenu_2
# 1312 "data/maps/MauvilleCity_House1/scripts.pory"
	case 0, PokemonRegionalShop_RegionMenu_3
# 1315 "data/maps/MauvilleCity_House1/scripts.pory"
	case 1, PokemonRegionalShop_RegionMenu_4
# 1318 "data/maps/MauvilleCity_House1/scripts.pory"
	case 2, PokemonRegionalShop_RegionMenu_5
	return

PokemonRegionalShop_RegionMenu_2:
# 1308 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_RegionMenu_Text_4, MSGBOX_DEFAULT
# 1309 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1310 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_RegionMenu_3:
# 1313 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1314 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonRegionalShop_Galar
	return

PokemonRegionalShop_RegionMenu_4:
# 1316 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1317 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonRegionalShop_Hisui
	return

PokemonRegionalShop_RegionMenu_5:
# 1319 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1320 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonRegionalShop_Alola
	return


PokemonRegionalShop_Galar::
# 1326 "data/maps/MauvilleCity_House1/scripts.pory"
	lockall
# 1327 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 1328 "data/maps/MauvilleCity_House1/scripts.pory"
	showcoinsbox 16, 3
# 1330 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Galar_Text_0, MSGBOX_DEFAULT
# 1331 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PokemonRegionalShop_Galar_Text_1, PokemonRegionalShop_Galar_Text_2, PokemonRegionalShop_Galar_Text_3, PokemonRegionalShop_Galar_Text_4, PokemonRegionalShop_Galar_Text_5, PokemonCoinShop_Kanto_Text_1
# 1335 "data/maps/MauvilleCity_House1/scripts.pory"
	switch VAR_RESULT
# 1336 "data/maps/MauvilleCity_House1/scripts.pory"
	case 127, PokemonRegionalShop_Galar_2
# 1341 "data/maps/MauvilleCity_House1/scripts.pory"
	case 5, PokemonRegionalShop_Galar_3
# 1345 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonRegionalShop_Galar_6
# 1379 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokemonRegionalShop_Galar_9
# 1413 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokemonRegionalShop_Galar_16
# 1447 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokemonRegionalShop_Galar_26
# 1481 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokemonRegionalShop_Galar_38
	return

PokemonRegionalShop_Galar_2:
# 1337 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_RegionMenu_Text_4, MSGBOX_DEFAULT
# 1338 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1339 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Galar_3:
# 1342 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1343 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonRegionalShop_RegionMenu
	return

PokemonRegionalShop_Galar_6:
# 1347 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1348 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 800
	goto_if_ge PokemonRegionalShop_Galar_12
# 1373 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_17, MSGBOX_DEFAULT
PokemonRegionalShop_Galar_11:
# 1375 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1376 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Galar_9:
# 1381 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1382 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 800
	goto_if_ge PokemonRegionalShop_Galar_19
# 1407 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_17, MSGBOX_DEFAULT
PokemonRegionalShop_Galar_18:
# 1409 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1410 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Galar_12:
# 1349 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1350 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonRegionalShop_Galar_23
# 1356 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_RILLABOOM, 4, 3
# 1357 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Galar_Text_6, MSGBOX_DEFAULT
# 1358 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1359 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1360 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonRegionalShop_Galar_35
# 1369 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_5, MSGBOX_DEFAULT
# 1370 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Galar_11

PokemonRegionalShop_Galar_16:
# 1415 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1416 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 800
	goto_if_ge PokemonRegionalShop_Galar_29
# 1441 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_17, MSGBOX_DEFAULT
PokemonRegionalShop_Galar_28:
# 1443 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1444 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Galar_19:
# 1383 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1384 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonRegionalShop_Galar_33
# 1390 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_CINDERACE, 4, 3
# 1391 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Galar_Text_8, MSGBOX_DEFAULT
# 1392 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1393 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1394 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonRegionalShop_Galar_47
# 1403 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 1404 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Galar_18

PokemonRegionalShop_Galar_23:
# 1351 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_2, MSGBOX_DEFAULT
# 1352 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1353 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Galar_26:
# 1449 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1450 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 1200
	goto_if_ge PokemonRegionalShop_Galar_41
# 1475 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Galar_Text_14, MSGBOX_DEFAULT
PokemonRegionalShop_Galar_40:
# 1477 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1478 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Galar_29:
# 1417 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1418 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonRegionalShop_Galar_45
# 1424 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_INTELEON, 4, 3
# 1425 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Galar_Text_10, MSGBOX_DEFAULT
# 1426 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1427 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1428 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonRegionalShop_Galar_57
# 1437 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 1438 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Galar_28

PokemonRegionalShop_Galar_33:
# 1385 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 1386 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1387 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Galar_35:
# 1361 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 800
# 1362 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1363 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_RILLABOOM, 50, ITEM_NONE
# 1364 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_RILLABOOM, CRY_MODE_NORMAL
# 1365 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1366 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Galar_Text_7, MSGBOX_DEFAULT
# 1367 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Galar_11

PokemonRegionalShop_Galar_38:
# 1483 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1484 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 600
	goto_if_ge PokemonRegionalShop_Galar_51
# 1509 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Galar_Text_17, MSGBOX_DEFAULT
PokemonRegionalShop_Galar_50:
# 1511 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1512 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Galar_41:
# 1451 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1452 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonRegionalShop_Galar_55
# 1458 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_DRAGAPULT, 4, 3
# 1459 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Galar_Text_12, MSGBOX_DEFAULT
# 1460 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1461 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1462 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonRegionalShop_Galar_63
# 1471 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 1472 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Galar_40

PokemonRegionalShop_Galar_45:
# 1419 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 1420 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1421 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Galar_47:
# 1395 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 800
# 1396 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1397 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_CINDERACE, 50, ITEM_NONE
# 1398 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_CINDERACE, CRY_MODE_NORMAL
# 1399 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1400 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Galar_Text_9, MSGBOX_DEFAULT
# 1401 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Galar_18

PokemonRegionalShop_Galar_51:
# 1485 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1486 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonRegionalShop_Galar_61
# 1492 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_TOXTRICITY_AMPED, 4, 3
# 1493 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Galar_Text_15, MSGBOX_DEFAULT
# 1494 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1495 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1496 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonRegionalShop_Galar_66
# 1505 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 1506 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Galar_50

PokemonRegionalShop_Galar_55:
# 1453 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 1454 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1455 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Galar_57:
# 1429 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 800
# 1430 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1431 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_INTELEON, 50, ITEM_NONE
# 1432 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1433 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1434 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Galar_Text_11, MSGBOX_DEFAULT
# 1435 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Galar_28

PokemonRegionalShop_Galar_61:
# 1487 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 1488 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1489 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Galar_63:
# 1463 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 1200
# 1464 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1465 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_DRAGAPULT, 50, ITEM_NONE
# 1466 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_DRAGAPULT, CRY_MODE_NORMAL
# 1467 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1468 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Galar_Text_13, MSGBOX_DEFAULT
# 1469 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Galar_40

PokemonRegionalShop_Galar_66:
# 1497 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 600
# 1498 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1499 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_TOXTRICITY_AMPED, 50, ITEM_NONE
# 1500 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_TOXTRICITY_AMPED, CRY_MODE_NORMAL
# 1501 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1502 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Galar_Text_16, MSGBOX_DEFAULT
# 1503 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Galar_50


PokemonRegionalShop_Hisui::
# 1520 "data/maps/MauvilleCity_House1/scripts.pory"
	lockall
# 1521 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 1522 "data/maps/MauvilleCity_House1/scripts.pory"
	showcoinsbox 16, 3
# 1524 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Hisui_Text_0, MSGBOX_DEFAULT
# 1525 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PokemonRegionalShop_Hisui_Text_1, PokemonRegionalShop_Hisui_Text_2, PokemonRegionalShop_Hisui_Text_3, PokemonRegionalShop_Hisui_Text_4, PokemonRegionalShop_Hisui_Text_5, PokemonCoinShop_Kanto_Text_1
# 1529 "data/maps/MauvilleCity_House1/scripts.pory"
	switch VAR_RESULT
# 1530 "data/maps/MauvilleCity_House1/scripts.pory"
	case 127, PokemonRegionalShop_Hisui_2
# 1535 "data/maps/MauvilleCity_House1/scripts.pory"
	case 5, PokemonRegionalShop_Hisui_3
# 1539 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonRegionalShop_Hisui_6
# 1573 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokemonRegionalShop_Hisui_9
# 1607 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokemonRegionalShop_Hisui_16
# 1641 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokemonRegionalShop_Hisui_26
# 1675 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokemonRegionalShop_Hisui_38
	return

PokemonRegionalShop_Hisui_2:
# 1531 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_RegionMenu_Text_4, MSGBOX_DEFAULT
# 1532 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1533 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Hisui_3:
# 1536 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1537 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonRegionalShop_RegionMenu
	return

PokemonRegionalShop_Hisui_6:
# 1541 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1542 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 1000
	goto_if_ge PokemonRegionalShop_Hisui_12
# 1567 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_14, MSGBOX_DEFAULT
PokemonRegionalShop_Hisui_11:
# 1569 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1570 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Hisui_9:
# 1575 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1576 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 1000
	goto_if_ge PokemonRegionalShop_Hisui_19
# 1601 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_14, MSGBOX_DEFAULT
PokemonRegionalShop_Hisui_18:
# 1603 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1604 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Hisui_12:
# 1543 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1544 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonRegionalShop_Hisui_23
# 1550 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_TYPHLOSION_HISUI, 4, 3
# 1551 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Hisui_Text_6, MSGBOX_DEFAULT
# 1552 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1553 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1554 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonRegionalShop_Hisui_35
# 1563 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 1564 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Hisui_11

PokemonRegionalShop_Hisui_16:
# 1609 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1610 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 1000
	goto_if_ge PokemonRegionalShop_Hisui_29
# 1635 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_14, MSGBOX_DEFAULT
PokemonRegionalShop_Hisui_28:
# 1637 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1638 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Hisui_19:
# 1577 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1578 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonRegionalShop_Hisui_33
# 1584 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_SAMUROTT_HISUI, 4, 3
# 1585 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Hisui_Text_8, MSGBOX_DEFAULT
# 1586 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1587 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1588 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonRegionalShop_Hisui_47
# 1597 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 1598 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Hisui_18

PokemonRegionalShop_Hisui_23:
# 1545 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 1546 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1547 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Hisui_26:
# 1643 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1644 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 1200
	goto_if_ge PokemonRegionalShop_Hisui_41
# 1669 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Galar_Text_14, MSGBOX_DEFAULT
PokemonRegionalShop_Hisui_40:
# 1671 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1672 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Hisui_29:
# 1611 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1612 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonRegionalShop_Hisui_45
# 1618 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_DECIDUEYE_HISUI, 4, 3
# 1619 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Hisui_Text_10, MSGBOX_DEFAULT
# 1620 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1621 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1622 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonRegionalShop_Hisui_57
# 1631 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 1632 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Hisui_28

PokemonRegionalShop_Hisui_33:
# 1579 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 1580 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1581 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Hisui_35:
# 1555 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 1000
# 1556 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1557 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_TYPHLOSION_HISUI, 50, ITEM_NONE
# 1558 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_TYPHLOSION_HISUI, CRY_MODE_NORMAL
# 1559 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1560 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Hisui_Text_7, MSGBOX_DEFAULT
# 1561 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Hisui_11

PokemonRegionalShop_Hisui_38:
# 1677 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1678 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 800
	goto_if_ge PokemonRegionalShop_Hisui_51
# 1703 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_17, MSGBOX_DEFAULT
PokemonRegionalShop_Hisui_50:
# 1705 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1706 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Hisui_41:
# 1645 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1646 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonRegionalShop_Hisui_55
# 1652 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_URSALUNA, 4, 3
# 1653 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Hisui_Text_12, MSGBOX_DEFAULT
# 1654 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1655 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1656 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonRegionalShop_Hisui_63
# 1665 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 1666 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Hisui_40

PokemonRegionalShop_Hisui_45:
# 1613 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 1614 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1615 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Hisui_47:
# 1589 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 1000
# 1590 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1591 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_SAMUROTT_HISUI, 50, ITEM_NONE
# 1592 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_SAMUROTT_HISUI, CRY_MODE_NORMAL
# 1593 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1594 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Hisui_Text_9, MSGBOX_DEFAULT
# 1595 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Hisui_18

PokemonRegionalShop_Hisui_51:
# 1679 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1680 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonRegionalShop_Hisui_61
# 1686 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_WYRDEER, 4, 3
# 1687 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Hisui_Text_14, MSGBOX_DEFAULT
# 1688 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1689 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1690 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonRegionalShop_Hisui_66
# 1699 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 1700 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Hisui_50

PokemonRegionalShop_Hisui_55:
# 1647 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 1648 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1649 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Hisui_57:
# 1623 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 1000
# 1624 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1625 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_DECIDUEYE_HISUI, 50, ITEM_NONE
# 1626 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_DECIDUEYE_HISUI, CRY_MODE_NORMAL
# 1627 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1628 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Hisui_Text_11, MSGBOX_DEFAULT
# 1629 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Hisui_28

PokemonRegionalShop_Hisui_61:
# 1681 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 1682 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1683 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Hisui_63:
# 1657 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 1200
# 1658 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1659 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_URSALUNA, 50, ITEM_NONE
# 1660 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_URSALUNA, CRY_MODE_NORMAL
# 1661 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1662 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Hisui_Text_13, MSGBOX_DEFAULT
# 1663 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Hisui_40

PokemonRegionalShop_Hisui_66:
# 1691 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 800
# 1692 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1693 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_WYRDEER, 50, ITEM_NONE
# 1694 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_WYRDEER, CRY_MODE_NORMAL
# 1695 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1696 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Hisui_Text_15, MSGBOX_DEFAULT
# 1697 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Hisui_50


PokemonRegionalShop_Alola::
# 1714 "data/maps/MauvilleCity_House1/scripts.pory"
	lockall
# 1715 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 1716 "data/maps/MauvilleCity_House1/scripts.pory"
	showcoinsbox 16, 3
# 1718 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Alola_Text_0, MSGBOX_DEFAULT
# 1719 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PokemonRegionalShop_Alola_Text_1, PokemonRegionalShop_Alola_Text_2, PokemonRegionalShop_Alola_Text_3, PokemonRegionalShop_Alola_Text_4, PokemonRegionalShop_Alola_Text_5, PokemonCoinShop_Kanto_Text_1
# 1723 "data/maps/MauvilleCity_House1/scripts.pory"
	switch VAR_RESULT
# 1724 "data/maps/MauvilleCity_House1/scripts.pory"
	case 127, PokemonRegionalShop_Alola_2
# 1729 "data/maps/MauvilleCity_House1/scripts.pory"
	case 5, PokemonRegionalShop_Alola_3
# 1733 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonRegionalShop_Alola_6
# 1767 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokemonRegionalShop_Alola_9
# 1801 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokemonRegionalShop_Alola_16
# 1835 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokemonRegionalShop_Alola_26
# 1869 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokemonRegionalShop_Alola_38
	return

PokemonRegionalShop_Alola_2:
# 1725 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_RegionMenu_Text_4, MSGBOX_DEFAULT
# 1726 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1727 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Alola_3:
# 1730 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1731 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonRegionalShop_RegionMenu
	return

PokemonRegionalShop_Alola_6:
# 1735 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1736 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 800
	goto_if_ge PokemonRegionalShop_Alola_12
# 1761 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_17, MSGBOX_DEFAULT
PokemonRegionalShop_Alola_11:
# 1763 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1764 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Alola_9:
# 1769 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1770 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 800
	goto_if_ge PokemonRegionalShop_Alola_19
# 1795 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_17, MSGBOX_DEFAULT
PokemonRegionalShop_Alola_18:
# 1797 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1798 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Alola_12:
# 1737 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1738 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonRegionalShop_Alola_23
# 1744 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_DECIDUEYE, 4, 3
# 1745 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Alola_Text_6, MSGBOX_DEFAULT
# 1746 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1747 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1748 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonRegionalShop_Alola_35
# 1757 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 1758 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Alola_11

PokemonRegionalShop_Alola_16:
# 1803 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1804 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 800
	goto_if_ge PokemonRegionalShop_Alola_29
# 1829 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_17, MSGBOX_DEFAULT
PokemonRegionalShop_Alola_28:
# 1831 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1832 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Alola_19:
# 1771 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1772 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonRegionalShop_Alola_33
# 1778 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_INCINEROAR, 4, 3
# 1779 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Alola_Text_8, MSGBOX_DEFAULT
# 1780 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1781 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1782 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonRegionalShop_Alola_47
# 1791 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 1792 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Alola_18

PokemonRegionalShop_Alola_23:
# 1739 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 1740 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1741 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Alola_26:
# 1837 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1838 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 600
	goto_if_ge PokemonRegionalShop_Alola_41
# 1863 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Galar_Text_17, MSGBOX_DEFAULT
PokemonRegionalShop_Alola_40:
# 1865 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1866 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Alola_29:
# 1805 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1806 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonRegionalShop_Alola_45
# 1812 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_PRIMARINA, 4, 3
# 1813 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Alola_Text_10, MSGBOX_DEFAULT
# 1814 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1815 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1816 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonRegionalShop_Alola_57
# 1825 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 1826 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Alola_28

PokemonRegionalShop_Alola_33:
# 1773 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 1774 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1775 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Alola_35:
# 1749 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 800
# 1750 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1751 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_DECIDUEYE, 50, ITEM_NONE
# 1752 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_DECIDUEYE, CRY_MODE_NORMAL
# 1753 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1754 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Alola_Text_7, MSGBOX_DEFAULT
# 1755 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Alola_11

PokemonRegionalShop_Alola_38:
# 1871 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1872 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 1000
	goto_if_ge PokemonRegionalShop_Alola_51
# 1897 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_14, MSGBOX_DEFAULT
PokemonRegionalShop_Alola_50:
# 1899 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1900 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Alola_41:
# 1839 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1840 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonRegionalShop_Alola_55
# 1846 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_VIKAVOLT, 4, 3
# 1847 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Alola_Text_12, MSGBOX_DEFAULT
# 1848 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1849 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1850 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonRegionalShop_Alola_63
# 1859 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 1860 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Alola_40

PokemonRegionalShop_Alola_45:
# 1807 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 1808 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1809 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Alola_47:
# 1783 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 800
# 1784 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1785 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_INCINEROAR, 50, ITEM_NONE
# 1786 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_INCINEROAR, CRY_MODE_NORMAL
# 1787 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1788 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Alola_Text_9, MSGBOX_DEFAULT
# 1789 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Alola_18

PokemonRegionalShop_Alola_51:
# 1873 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1874 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonRegionalShop_Alola_61
# 1880 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_KOMMO_O, 4, 3
# 1881 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Alola_Text_14, MSGBOX_DEFAULT
# 1882 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1883 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1884 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonRegionalShop_Alola_66
# 1893 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 1894 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Alola_50

PokemonRegionalShop_Alola_55:
# 1841 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 1842 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1843 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Alola_57:
# 1817 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 800
# 1818 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1819 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_PRIMARINA, 50, ITEM_NONE
# 1820 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_PRIMARINA, CRY_MODE_NORMAL
# 1821 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1822 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Alola_Text_11, MSGBOX_DEFAULT
# 1823 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Alola_28

PokemonRegionalShop_Alola_61:
# 1875 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 1876 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1877 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonRegionalShop_Alola_63:
# 1851 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 600
# 1852 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1853 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_VIKAVOLT, 50, ITEM_NONE
# 1854 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_VIKAVOLT, CRY_MODE_NORMAL
# 1855 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1856 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Alola_Text_13, MSGBOX_DEFAULT
# 1857 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Alola_40

PokemonRegionalShop_Alola_66:
# 1885 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 1000
# 1886 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1887 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_KOMMO_O, 50, ITEM_NONE
# 1888 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_KOMMO_O, CRY_MODE_NORMAL
# 1889 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1890 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Alola_Text_15, MSGBOX_DEFAULT
# 1891 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonRegionalShop_Alola_50


PokemonVariantShop::
# 1910 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonVariantShop_RegionMenu
	return


PokemonVariantShop_RegionMenu::
# 1915 "data/maps/MauvilleCity_House1/scripts.pory"
	lockall
# 1916 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 1917 "data/maps/MauvilleCity_House1/scripts.pory"
	showcoinsbox 16, 3
# 1919 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_RegionMenu_Text_0, MSGBOX_DEFAULT
# 1920 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, PokemonVariantShop_RegionMenu_Text_1, PokemonVariantShop_RegionMenu_Text_2, PokemonVariantShop_RegionMenu_Text_3
# 1923 "data/maps/MauvilleCity_House1/scripts.pory"
	switch VAR_RESULT
# 1924 "data/maps/MauvilleCity_House1/scripts.pory"
	case 127, PokemonVariantShop_RegionMenu_2
# 1929 "data/maps/MauvilleCity_House1/scripts.pory"
	case 0, PokemonVariantShop_RegionMenu_3
# 1932 "data/maps/MauvilleCity_House1/scripts.pory"
	case 1, PokemonVariantShop_RegionMenu_4
# 1935 "data/maps/MauvilleCity_House1/scripts.pory"
	case 2, PokemonVariantShop_RegionMenu_5
	return

PokemonVariantShop_RegionMenu_2:
# 1925 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_RegionMenu_Text_4, MSGBOX_DEFAULT
# 1926 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1927 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_RegionMenu_3:
# 1930 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1931 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonVariantShop_Alola
	return

PokemonVariantShop_RegionMenu_4:
# 1933 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1934 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonVariantShop_Galar
	return

PokemonVariantShop_RegionMenu_5:
# 1936 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1937 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonVariantShop_Hisui
	return


PokemonVariantShop_Alola::
# 1943 "data/maps/MauvilleCity_House1/scripts.pory"
	lockall
# 1944 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 1945 "data/maps/MauvilleCity_House1/scripts.pory"
	showcoinsbox 16, 3
# 1947 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Alola_Text_0, MSGBOX_DEFAULT
# 1948 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PokemonVariantShop_Alola_Text_1, PokemonVariantShop_Alola_Text_2, PokemonVariantShop_Alola_Text_3, PokemonVariantShop_Alola_Text_4, PokemonVariantShop_Alola_Text_5, PokemonCoinShop_Kanto_Text_1
# 1952 "data/maps/MauvilleCity_House1/scripts.pory"
	switch VAR_RESULT
# 1953 "data/maps/MauvilleCity_House1/scripts.pory"
	case 127, PokemonVariantShop_Alola_2
# 1958 "data/maps/MauvilleCity_House1/scripts.pory"
	case 5, PokemonVariantShop_Alola_3
# 1962 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonVariantShop_Alola_6
# 1996 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokemonVariantShop_Alola_9
# 2030 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokemonVariantShop_Alola_16
# 2064 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokemonVariantShop_Alola_26
# 2098 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokemonVariantShop_Alola_38
	return

PokemonVariantShop_Alola_2:
# 1954 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_RegionMenu_Text_4, MSGBOX_DEFAULT
# 1955 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1956 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Alola_3:
# 1959 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1960 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonVariantShop_RegionMenu
	return

PokemonVariantShop_Alola_6:
# 1964 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1965 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 800
	goto_if_ge PokemonVariantShop_Alola_12
# 1990 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_17, MSGBOX_DEFAULT
PokemonVariantShop_Alola_11:
# 1992 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1993 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Alola_9:
# 1998 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 1999 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 1000
	goto_if_ge PokemonVariantShop_Alola_19
# 2024 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_14, MSGBOX_DEFAULT
PokemonVariantShop_Alola_18:
# 2026 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2027 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Alola_12:
# 1966 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 1967 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonVariantShop_Alola_23
# 1973 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_RAICHU_ALOLA, 4, 3
# 1974 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Alola_Text_6, MSGBOX_DEFAULT
# 1975 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 1976 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 1977 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonVariantShop_Alola_35
# 1986 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_5, MSGBOX_DEFAULT
# 1987 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Alola_11

PokemonVariantShop_Alola_16:
# 2032 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 2033 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 800
	goto_if_ge PokemonVariantShop_Alola_29
# 2058 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_17, MSGBOX_DEFAULT
PokemonVariantShop_Alola_28:
# 2060 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2061 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Alola_19:
# 2000 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 2001 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonVariantShop_Alola_33
# 2007 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_NINETALES_ALOLA, 4, 3
# 2008 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Alola_Text_8, MSGBOX_DEFAULT
# 2009 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 2010 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 2011 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonVariantShop_Alola_47
# 2020 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 2021 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Alola_18

PokemonVariantShop_Alola_23:
# 1968 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_2, MSGBOX_DEFAULT
# 1969 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 1970 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Alola_26:
# 2066 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 2067 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 700
	goto_if_ge PokemonVariantShop_Alola_41
# 2092 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Alola_Text_14, MSGBOX_DEFAULT
PokemonVariantShop_Alola_40:
# 2094 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2095 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Alola_29:
# 2034 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 2035 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonVariantShop_Alola_45
# 2041 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_MAROWAK_ALOLA, 4, 3
# 2042 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Alola_Text_10, MSGBOX_DEFAULT
# 2043 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 2044 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 2045 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonVariantShop_Alola_57
# 2054 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 2055 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Alola_28

PokemonVariantShop_Alola_33:
# 2002 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 2003 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2004 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Alola_35:
# 1978 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 800
# 1979 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 1980 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_RAICHU_ALOLA, 50, ITEM_NONE
# 1981 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_RAICHU_ALOLA, CRY_MODE_NORMAL
# 1982 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 1983 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Alola_Text_7, MSGBOX_DEFAULT
# 1984 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Alola_11

PokemonVariantShop_Alola_38:
# 2100 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 2101 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 700
	goto_if_ge PokemonVariantShop_Alola_51
# 2126 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Alola_Text_14, MSGBOX_DEFAULT
PokemonVariantShop_Alola_50:
# 2128 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2129 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Alola_41:
# 2068 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 2069 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonVariantShop_Alola_55
# 2075 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_MUK_ALOLA, 4, 3
# 2076 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Alola_Text_12, MSGBOX_DEFAULT
# 2077 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 2078 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 2079 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonVariantShop_Alola_63
# 2088 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 2089 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Alola_40

PokemonVariantShop_Alola_45:
# 2036 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 2037 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2038 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Alola_47:
# 2012 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 1000
# 2013 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 2014 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_NINETALES_ALOLA, 50, ITEM_NONE
# 2015 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_NINETALES_ALOLA, CRY_MODE_NORMAL
# 2016 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 2017 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Alola_Text_9, MSGBOX_DEFAULT
# 2018 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Alola_18

PokemonVariantShop_Alola_51:
# 2102 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 2103 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonVariantShop_Alola_61
# 2109 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_EXEGGUTOR_ALOLA, 4, 3
# 2110 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Alola_Text_15, MSGBOX_DEFAULT
# 2111 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 2112 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 2113 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonVariantShop_Alola_66
# 2122 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 2123 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Alola_50

PokemonVariantShop_Alola_55:
# 2070 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 2071 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2072 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Alola_57:
# 2046 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 800
# 2047 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 2048 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_MAROWAK_ALOLA, 50, ITEM_NONE
# 2049 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_MAROWAK_ALOLA, CRY_MODE_NORMAL
# 2050 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 2051 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Alola_Text_11, MSGBOX_DEFAULT
# 2052 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Alola_28

PokemonVariantShop_Alola_61:
# 2104 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 2105 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2106 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Alola_63:
# 2080 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 700
# 2081 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 2082 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_MUK_ALOLA, 50, ITEM_NONE
# 2083 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_MUK_ALOLA, CRY_MODE_NORMAL
# 2084 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 2085 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Alola_Text_13, MSGBOX_DEFAULT
# 2086 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Alola_40

PokemonVariantShop_Alola_66:
# 2114 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 700
# 2115 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 2116 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_EXEGGUTOR_ALOLA, 50, ITEM_NONE
# 2117 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_EXEGGUTOR_ALOLA, CRY_MODE_NORMAL
# 2118 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 2119 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Alola_Text_16, MSGBOX_DEFAULT
# 2120 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Alola_50


PokemonVariantShop_Galar::
# 2137 "data/maps/MauvilleCity_House1/scripts.pory"
	lockall
# 2138 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 2139 "data/maps/MauvilleCity_House1/scripts.pory"
	showcoinsbox 16, 3
# 2141 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Galar_Text_0, MSGBOX_DEFAULT
# 2142 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PokemonVariantShop_Galar_Text_1, PokemonVariantShop_Galar_Text_2, PokemonVariantShop_Galar_Text_3, PokemonVariantShop_Galar_Text_4, PokemonVariantShop_Galar_Text_5, PokemonCoinShop_Kanto_Text_1
# 2146 "data/maps/MauvilleCity_House1/scripts.pory"
	switch VAR_RESULT
# 2147 "data/maps/MauvilleCity_House1/scripts.pory"
	case 127, PokemonVariantShop_Galar_2
# 2152 "data/maps/MauvilleCity_House1/scripts.pory"
	case 5, PokemonVariantShop_Galar_3
# 2156 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonVariantShop_Galar_6
# 2190 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokemonVariantShop_Galar_9
# 2224 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokemonVariantShop_Galar_16
# 2258 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokemonVariantShop_Galar_26
# 2292 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokemonVariantShop_Galar_38
	return

PokemonVariantShop_Galar_2:
# 2148 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_RegionMenu_Text_4, MSGBOX_DEFAULT
# 2149 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2150 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Galar_3:
# 2153 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2154 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonVariantShop_RegionMenu
	return

PokemonVariantShop_Galar_6:
# 2158 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 2159 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 800
	goto_if_ge PokemonVariantShop_Galar_12
# 2184 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_17, MSGBOX_DEFAULT
PokemonVariantShop_Galar_11:
# 2186 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2187 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Galar_9:
# 2192 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 2193 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 800
	goto_if_ge PokemonVariantShop_Galar_19
# 2218 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_17, MSGBOX_DEFAULT
PokemonVariantShop_Galar_18:
# 2220 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2221 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Galar_12:
# 2160 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 2161 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonVariantShop_Galar_23
# 2167 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_SLOWBRO_GALAR, 4, 3
# 2168 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Galar_Text_6, MSGBOX_DEFAULT
# 2169 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 2170 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 2171 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonVariantShop_Galar_35
# 2180 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 2181 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Galar_11

PokemonVariantShop_Galar_16:
# 2226 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 2227 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 700
	goto_if_ge PokemonVariantShop_Galar_29
# 2252 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Alola_Text_14, MSGBOX_DEFAULT
PokemonVariantShop_Galar_28:
# 2254 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2255 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Galar_19:
# 2194 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 2195 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonVariantShop_Galar_33
# 2201 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_RAPIDASH_GALAR, 4, 3
# 2202 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Galar_Text_8, MSGBOX_DEFAULT
# 2203 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 2204 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 2205 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonVariantShop_Galar_47
# 2214 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 2215 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Galar_18

PokemonVariantShop_Galar_23:
# 2162 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 2163 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2164 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Galar_26:
# 2260 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 2261 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 900
	goto_if_ge PokemonVariantShop_Galar_41
# 2286 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Galar_Text_14, MSGBOX_DEFAULT
PokemonVariantShop_Galar_40:
# 2288 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2289 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Galar_29:
# 2228 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 2229 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonVariantShop_Galar_45
# 2235 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_WEEZING_GALAR, 4, 3
# 2236 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Galar_Text_10, MSGBOX_DEFAULT
# 2237 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 2238 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 2239 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonVariantShop_Galar_57
# 2248 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 2249 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Galar_28

PokemonVariantShop_Galar_33:
# 2196 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 2197 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2198 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Galar_35:
# 2172 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 800
# 2173 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 2174 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_SLOWBRO_GALAR, 50, ITEM_NONE
# 2175 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_SLOWBRO_GALAR, CRY_MODE_NORMAL
# 2176 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 2177 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Galar_Text_7, MSGBOX_DEFAULT
# 2178 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Galar_11

PokemonVariantShop_Galar_38:
# 2294 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 2295 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 600
	goto_if_ge PokemonVariantShop_Galar_51
# 2320 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonRegionalShop_Galar_Text_17, MSGBOX_DEFAULT
PokemonVariantShop_Galar_50:
# 2322 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2323 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Galar_41:
# 2262 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 2263 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonVariantShop_Galar_55
# 2269 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_DARMANITAN_GALAR_STANDARD, 4, 3
# 2270 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Galar_Text_12, MSGBOX_DEFAULT
# 2271 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 2272 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 2273 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonVariantShop_Galar_63
# 2282 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 2283 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Galar_40

PokemonVariantShop_Galar_45:
# 2230 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 2231 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2232 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Galar_47:
# 2206 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 800
# 2207 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 2208 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_RAPIDASH_GALAR, 50, ITEM_NONE
# 2209 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_RAPIDASH_GALAR, CRY_MODE_NORMAL
# 2210 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 2211 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Galar_Text_9, MSGBOX_DEFAULT
# 2212 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Galar_18

PokemonVariantShop_Galar_51:
# 2296 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 2297 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonVariantShop_Galar_61
# 2303 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_CORSOLA_GALAR, 4, 3
# 2304 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Galar_Text_15, MSGBOX_DEFAULT
# 2305 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 2306 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 2307 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonVariantShop_Galar_66
# 2316 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 2317 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Galar_50

PokemonVariantShop_Galar_55:
# 2264 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 2265 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2266 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Galar_57:
# 2240 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 700
# 2241 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 2242 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_WEEZING_GALAR, 50, ITEM_NONE
# 2243 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_WEEZING_GALAR, CRY_MODE_NORMAL
# 2244 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 2245 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Galar_Text_11, MSGBOX_DEFAULT
# 2246 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Galar_28

PokemonVariantShop_Galar_61:
# 2298 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 2299 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2300 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Galar_63:
# 2274 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 900
# 2275 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 2276 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_DARMANITAN_GALAR_STANDARD, 50, ITEM_NONE
# 2277 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_DARMANITAN_GALAR_STANDARD, CRY_MODE_NORMAL
# 2278 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 2279 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Galar_Text_13, MSGBOX_DEFAULT
# 2280 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Galar_40

PokemonVariantShop_Galar_66:
# 2308 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 600
# 2309 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 2310 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_CORSOLA_GALAR, 50, ITEM_NONE
# 2311 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_CORSOLA_GALAR, CRY_MODE_NORMAL
# 2312 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 2313 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Galar_Text_16, MSGBOX_DEFAULT
# 2314 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Galar_50


PokemonVariantShop_Hisui::
# 2331 "data/maps/MauvilleCity_House1/scripts.pory"
	lockall
# 2332 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 2333 "data/maps/MauvilleCity_House1/scripts.pory"
	showcoinsbox 16, 3
# 2335 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Hisui_Text_0, MSGBOX_DEFAULT
# 2336 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PokemonVariantShop_Hisui_Text_1, PokemonVariantShop_Hisui_Text_2, PokemonVariantShop_Hisui_Text_3, PokemonVariantShop_Hisui_Text_4, PokemonVariantShop_Hisui_Text_5, PokemonCoinShop_Kanto_Text_1
# 2340 "data/maps/MauvilleCity_House1/scripts.pory"
	switch VAR_RESULT
# 2341 "data/maps/MauvilleCity_House1/scripts.pory"
	case 127, PokemonVariantShop_Hisui_2
# 2346 "data/maps/MauvilleCity_House1/scripts.pory"
	case 5, PokemonVariantShop_Hisui_3
# 2350 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonVariantShop_Hisui_6
# 2384 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokemonVariantShop_Hisui_9
# 2418 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokemonVariantShop_Hisui_16
# 2452 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokemonVariantShop_Hisui_26
# 2486 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokemonVariantShop_Hisui_38
	return

PokemonVariantShop_Hisui_2:
# 2342 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_RegionMenu_Text_4, MSGBOX_DEFAULT
# 2343 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2344 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Hisui_3:
# 2347 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2348 "data/maps/MauvilleCity_House1/scripts.pory"
	goto PokemonVariantShop_RegionMenu
	return

PokemonVariantShop_Hisui_6:
# 2352 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 2353 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 1000
	goto_if_ge PokemonVariantShop_Hisui_12
# 2378 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_14, MSGBOX_DEFAULT
PokemonVariantShop_Hisui_11:
# 2380 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2381 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Hisui_9:
# 2386 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 2387 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 1000
	goto_if_ge PokemonVariantShop_Hisui_19
# 2412 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_14, MSGBOX_DEFAULT
PokemonVariantShop_Hisui_18:
# 2414 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2415 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Hisui_12:
# 2354 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 2355 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonVariantShop_Hisui_23
# 2361 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_ARCANINE_HISUI, 4, 3
# 2362 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Hisui_Text_6, MSGBOX_DEFAULT
# 2363 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 2364 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 2365 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonVariantShop_Hisui_35
# 2374 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 2375 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Hisui_11

PokemonVariantShop_Hisui_16:
# 2420 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 2421 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 1100
	goto_if_ge PokemonVariantShop_Hisui_29
# 2446 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Hisui_Text_12, MSGBOX_DEFAULT
PokemonVariantShop_Hisui_28:
# 2448 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2449 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Hisui_19:
# 2388 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 2389 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonVariantShop_Hisui_33
# 2395 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_ZOROARK_HISUI, 4, 3
# 2396 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Hisui_Text_8, MSGBOX_DEFAULT
# 2397 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 2398 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 2399 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonVariantShop_Hisui_47
# 2408 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 2409 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Hisui_18

PokemonVariantShop_Hisui_23:
# 2356 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 2357 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2358 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Hisui_26:
# 2454 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 2455 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 900
	goto_if_ge PokemonVariantShop_Hisui_41
# 2480 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Galar_Text_14, MSGBOX_DEFAULT
PokemonVariantShop_Hisui_40:
# 2482 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2483 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Hisui_29:
# 2422 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 2423 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonVariantShop_Hisui_45
# 2429 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_GOODRA_HISUI, 4, 3
# 2430 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Hisui_Text_10, MSGBOX_DEFAULT
# 2431 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 2432 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 2433 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonVariantShop_Hisui_57
# 2442 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 2443 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Hisui_28

PokemonVariantShop_Hisui_33:
# 2390 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 2391 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2392 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Hisui_35:
# 2366 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 1000
# 2367 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 2368 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_ARCANINE_HISUI, 50, ITEM_NONE
# 2369 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_ARCANINE_HISUI, CRY_MODE_NORMAL
# 2370 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 2371 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Hisui_Text_7, MSGBOX_DEFAULT
# 2372 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Hisui_11

PokemonVariantShop_Hisui_38:
# 2488 "data/maps/MauvilleCity_House1/scripts.pory"
	checkcoins VAR_TEMP_0
# 2489 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_TEMP_0, 800
	goto_if_ge PokemonVariantShop_Hisui_51
# 2514 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonLegendShop_Kanto_Text_17, MSGBOX_DEFAULT
PokemonVariantShop_Hisui_50:
# 2516 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2517 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Hisui_41:
# 2456 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 2457 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonVariantShop_Hisui_55
# 2463 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_BRAVIARY_HISUI, 4, 3
# 2464 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Hisui_Text_13, MSGBOX_DEFAULT
# 2465 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 2466 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 2467 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonVariantShop_Hisui_63
# 2476 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 2477 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Hisui_40

PokemonVariantShop_Hisui_45:
# 2424 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 2425 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2426 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Hisui_47:
# 2400 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 1000
# 2401 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 2402 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_ZOROARK_HISUI, 50, ITEM_NONE
# 2403 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_ZOROARK_HISUI, CRY_MODE_NORMAL
# 2404 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 2405 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Hisui_Text_9, MSGBOX_DEFAULT
# 2406 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Hisui_18

PokemonVariantShop_Hisui_51:
# 2490 "data/maps/MauvilleCity_House1/scripts.pory"
	getpartysize
# 2491 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PokemonVariantShop_Hisui_61
# 2497 "data/maps/MauvilleCity_House1/scripts.pory"
	showmonpic SPECIES_LILLIGANT_HISUI, 4, 3
# 2498 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Hisui_Text_15, MSGBOX_DEFAULT
# 2499 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 2500 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultichoice 12, 6, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, coincase_Text_6, coincase_Text_7
# 2501 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonVariantShop_Hisui_66
# 2510 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_10, MSGBOX_DEFAULT
# 2511 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Hisui_50

PokemonVariantShop_Hisui_55:
# 2458 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 2459 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2460 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Hisui_57:
# 2434 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 1100
# 2435 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 2436 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_GOODRA_HISUI, 50, ITEM_NONE
# 2437 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_GOODRA_HISUI, CRY_MODE_NORMAL
# 2438 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 2439 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Hisui_Text_11, MSGBOX_DEFAULT
# 2440 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Hisui_28

PokemonVariantShop_Hisui_61:
# 2492 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonCoinShop_Kanto_Text_7, MSGBOX_DEFAULT
# 2493 "data/maps/MauvilleCity_House1/scripts.pory"
	hidecoinsbox 10, 3
# 2494 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

PokemonVariantShop_Hisui_63:
# 2468 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 900
# 2469 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 2470 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_BRAVIARY_HISUI, 50, ITEM_NONE
# 2471 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_BRAVIARY_HISUI, CRY_MODE_NORMAL
# 2472 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 2473 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Hisui_Text_14, MSGBOX_DEFAULT
# 2474 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Hisui_40

PokemonVariantShop_Hisui_66:
# 2502 "data/maps/MauvilleCity_House1/scripts.pory"
	removecoins 800
# 2503 "data/maps/MauvilleCity_House1/scripts.pory"
	updatecoinsbox 10, 3
# 2504 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_LILLIGANT_HISUI, 50, ITEM_NONE
# 2505 "data/maps/MauvilleCity_House1/scripts.pory"
	playmoncry SPECIES_LILLIGANT_HISUI, CRY_MODE_NORMAL
# 2506 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmoncry
# 2507 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox PokemonVariantShop_Hisui_Text_16, MSGBOX_DEFAULT
# 2508 "data/maps/MauvilleCity_House1/scripts.pory"
	waitbuttonpress
	goto PokemonVariantShop_Hisui_50


MauvilleCity_GameCorner_EventScript_ReactionGame::
# 2525 "data/maps/MauvilleCity_House1/scripts.pory"
	lockall
# 2526 "data/maps/MauvilleCity_House1/scripts.pory"
	checkitem ITEM_COIN_CASE
# 2527 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_ReactionGame_2
# 2532 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_ReactionGame_Text_1, MSGBOX_YESNO
# 2533 "data/maps/MauvilleCity_House1/scripts.pory"
	closemessage
# 2534 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_GameCorner_EventScript_ReactionGame_5
# 2538 "data/maps/MauvilleCity_House1/scripts.pory"
	callnative StartReactionGame
# 2539 "data/maps/MauvilleCity_House1/scripts.pory"
	waitstate
# 2540 "data/maps/MauvilleCity_House1/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_ReactionGame_2:
# 2528 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_ReactionGame_Text_0, MSGBOX_DEFAULT
# 2529 "data/maps/MauvilleCity_House1/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_ReactionGame_5:
# 2535 "data/maps/MauvilleCity_House1/scripts.pory"
	releaseall
	end


coincase_Text_0:
# 55 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You already have a coinbox.$"

coincase_Text_1:
# 78 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Charmander$"

coincase_Text_2:
# 78 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Bulbasaur$"

coincase_Text_3:
# 78 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Squirtle$"

coincase_Text_4:
# 78 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Pikachu$"

coincase_Text_5:
# 81 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like the fire Pokemon,\n"
	.string "Charmander?$"

coincase_Text_6:
# 83 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Yes$"

coincase_Text_7:
# 83 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "No$"

coincase_Text_8:
# 88 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Received Charmander!$"

coincase_Text_9:
# 94 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Oh, you don't want Charmander?$"

coincase_Text_10:
# 102 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like the grass Pokemon,\n"
	.string "Bulbasaur?$"

coincase_Text_11:
# 109 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Received Bulbasaur!$"

coincase_Text_12:
# 115 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Oh, you don't want Bulbasaur?$"

coincase_Text_13:
# 123 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like the water Pokemon,\n"
	.string "Squirtle?$"

coincase_Text_14:
# 129 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Received Squirtle!$"

coincase_Text_15:
# 135 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Oh, you don't want Squirtle?$"

coincase_Text_16:
# 143 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like the electric Pokemon,\n"
	.string "Pikachu?$"

coincase_Text_17:
# 149 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Received Pikachu!$"

coincase_Text_18:
# 155 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Oh, you don't want Pikachu?$"

PokemonCoinShop_RegionMenu_Text_0:
# 176 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Welcome to the Pokémon Coin Shop!\n"
	.string "Which region's Pokémon would you like to\l"
	.string "see?$"

PokemonCoinShop_RegionMenu_Text_1:
# 178 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Kanto$"

PokemonCoinShop_RegionMenu_Text_2:
# 178 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Johto$"

PokemonCoinShop_RegionMenu_Text_3:
# 178 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hoenn$"

PokemonCoinShop_RegionMenu_Text_4:
# 182 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Come back anytime!$"

PokemonCoinShop_Kanto_Text_0:
# 204 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Here are some Kanto Pokémon!$"

PokemonCoinShop_Kanto_Text_1:
# 206 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Back$"

PokemonCoinShop_Kanto_Text_2:
# 224 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Your party is full!\n"
	.string "Come back after making space.$"

PokemonCoinShop_Kanto_Text_3:
# 230 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Charmander for\n"
	.string "500 coins?$"

PokemonCoinShop_Kanto_Text_4:
# 239 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Charmander!$"

PokemonCoinShop_Kanto_Text_5:
# 242 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Changed your mind? Come back if you do.$"

PokemonCoinShop_Kanto_Text_6:
# 246 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You need 500 coins!$"

PokemonCoinShop_Kanto_Text_7:
# 258 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Your party is full!$"

PokemonCoinShop_Kanto_Text_8:
# 264 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Bulbasaur for 500\n"
	.string "coins?$"

PokemonCoinShop_Kanto_Text_9:
# 273 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Bulbasaur!$"

PokemonCoinShop_Kanto_Text_10:
# 276 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Changed your mind?$"

PokemonCoinShop_Kanto_Text_11:
# 298 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Squirtle for 500\n"
	.string "coins?$"

PokemonCoinShop_Kanto_Text_12:
# 307 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Squirtle!$"

PokemonCoinShop_Kanto_Text_13:
# 332 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Pikachu for 500\n"
	.string "coins?$"

PokemonCoinShop_Kanto_Text_14:
# 341 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Pikachu!$"

PokemonCoinShop_Johto_Text_0:
# 363 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Here are some Johto Pokémon!$"

PokemonCoinShop_Johto_Text_1:
# 365 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Chikorita$"

PokemonCoinShop_Johto_Text_2:
# 365 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Cyndaquil$"

PokemonCoinShop_Johto_Text_3:
# 365 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Totodile$"

PokemonCoinShop_Johto_Text_4:
# 365 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Marill$"

PokemonCoinShop_Johto_Text_5:
# 383 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Party full!$"

PokemonCoinShop_Johto_Text_6:
# 389 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Chikorita for 500\n"
	.string "coins?$"

PokemonCoinShop_Johto_Text_7:
# 398 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Chikorita!$"

PokemonCoinShop_Johto_Text_8:
# 401 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Maybe next time.$"

PokemonCoinShop_Johto_Text_9:
# 405 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Need 500 coins!$"

PokemonCoinShop_Johto_Text_10:
# 423 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Cyndaquil for 500\n"
	.string "coins?$"

PokemonCoinShop_Johto_Text_11:
# 432 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Cyndaquil!$"

PokemonCoinShop_Johto_Text_12:
# 457 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Totodile for 500\n"
	.string "coins?$"

PokemonCoinShop_Johto_Text_13:
# 466 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Totodile!$"

PokemonCoinShop_Johto_Text_14:
# 491 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Marill for 500\n"
	.string "coins?$"

PokemonCoinShop_Johto_Text_15:
# 500 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Marill!$"

PokemonCoinShop_Hoenn_Text_0:
# 522 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Here are some Hoenn Pokémon!$"

PokemonCoinShop_Hoenn_Text_1:
# 524 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Treecko$"

PokemonCoinShop_Hoenn_Text_2:
# 524 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Torchic$"

PokemonCoinShop_Hoenn_Text_3:
# 524 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Mudkip$"

PokemonCoinShop_Hoenn_Text_4:
# 524 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Ralts$"

PokemonCoinShop_Hoenn_Text_5:
# 548 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Treecko for 500\n"
	.string "coins?$"

PokemonCoinShop_Hoenn_Text_6:
# 557 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Treecko!$"

PokemonCoinShop_Hoenn_Text_7:
# 582 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Torchic for 500\n"
	.string "coins?$"

PokemonCoinShop_Hoenn_Text_8:
# 591 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Torchic!$"

PokemonCoinShop_Hoenn_Text_9:
# 616 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Mudkip for 500\n"
	.string "coins?$"

PokemonCoinShop_Hoenn_Text_10:
# 625 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Mudkip!$"

PokemonCoinShop_Hoenn_Text_11:
# 650 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Ralts for 500\n"
	.string "coins?$"

PokemonCoinShop_Hoenn_Text_12:
# 659 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Ralts!$"

PokemonLegendShop_RegionMenu_Text_0:
# 687 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Welcome to the Legendary Pokémon Shop!\n"
	.string "These rare Pokémon require more coins.\n"
	.string "Which region would you like to browse?$"

PokemonLegendShop_RegionMenu_Text_1:
# 689 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Kanto Legends$"

PokemonLegendShop_RegionMenu_Text_2:
# 689 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Johto Legends$"

PokemonLegendShop_RegionMenu_Text_3:
# 689 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hoenn Legends$"

PokemonLegendShop_Kanto_Text_0:
# 715 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Kanto Legendary & Competitive\n"
	.string "Pokémon!$"

PokemonLegendShop_Kanto_Text_1:
# 717 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Mewtwo (2000)$"

PokemonLegendShop_Kanto_Text_2:
# 717 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Mew (2500)$"

PokemonLegendShop_Kanto_Text_3:
# 717 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Dragonite (1000)$"

PokemonLegendShop_Kanto_Text_4:
# 717 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Gengar (800)$"

PokemonLegendShop_Kanto_Text_5:
# 717 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Snorlax (800)$"

PokemonLegendShop_Kanto_Text_6:
# 741 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Mewtwo for 2000\n"
	.string "coins?$"

PokemonLegendShop_Kanto_Text_7:
# 750 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Mewtwo!$"

PokemonLegendShop_Kanto_Text_8:
# 757 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You need 2000 coins!$"

PokemonLegendShop_Kanto_Text_9:
# 775 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Mew for 2500\n"
	.string "coins?$"

PokemonLegendShop_Kanto_Text_10:
# 784 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Mew!$"

PokemonLegendShop_Kanto_Text_11:
# 791 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You need 2500 coins!$"

PokemonLegendShop_Kanto_Text_12:
# 809 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Dragonite for\n"
	.string "1000 coins?$"

PokemonLegendShop_Kanto_Text_13:
# 818 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Dragonite!$"

PokemonLegendShop_Kanto_Text_14:
# 825 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You need 1000 coins!$"

PokemonLegendShop_Kanto_Text_15:
# 843 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Gengar for 800\n"
	.string "coins?$"

PokemonLegendShop_Kanto_Text_16:
# 852 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Gengar!$"

PokemonLegendShop_Kanto_Text_17:
# 859 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You need 800 coins!$"

PokemonLegendShop_Kanto_Text_18:
# 877 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Snorlax for 800\n"
	.string "coins?$"

PokemonLegendShop_Kanto_Text_19:
# 886 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Snorlax!$"

PokemonLegendShop_Johto_Text_0:
# 908 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Johto Legendary & Competitive\n"
	.string "Pokémon!$"

PokemonLegendShop_Johto_Text_1:
# 910 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Lugia (2000)$"

PokemonLegendShop_Johto_Text_2:
# 910 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Ho-Oh (2000)$"

PokemonLegendShop_Johto_Text_3:
# 910 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Suicune (1500)$"

PokemonLegendShop_Johto_Text_4:
# 910 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Tyranitar (1200)$"

PokemonLegendShop_Johto_Text_5:
# 910 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Blissey (1000)$"

PokemonLegendShop_Johto_Text_6:
# 934 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Lugia for 2000\n"
	.string "coins?$"

PokemonLegendShop_Johto_Text_7:
# 943 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Lugia!$"

PokemonLegendShop_Johto_Text_8:
# 950 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Need 2000 coins!$"

PokemonLegendShop_Johto_Text_9:
# 968 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Ho-Oh for 2000\n"
	.string "coins?$"

PokemonLegendShop_Johto_Text_10:
# 977 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Ho-Oh!$"

PokemonLegendShop_Johto_Text_11:
# 1002 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Suicune for 1500\n"
	.string "coins?$"

PokemonLegendShop_Johto_Text_12:
# 1011 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Suicune!$"

PokemonLegendShop_Johto_Text_13:
# 1018 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Need 1500 coins!$"

PokemonLegendShop_Johto_Text_14:
# 1036 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Tyranitar for 1200\n"
	.string "coins?$"

PokemonLegendShop_Johto_Text_15:
# 1045 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Tyranitar!$"

PokemonLegendShop_Johto_Text_16:
# 1052 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Need 1200 coins!$"

PokemonLegendShop_Johto_Text_17:
# 1070 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Blissey for 1000\n"
	.string "coins?$"

PokemonLegendShop_Johto_Text_18:
# 1079 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Blissey!$"

PokemonLegendShop_Johto_Text_19:
# 1086 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Need 1000 coins!$"

PokemonLegendShop_Hoenn_Text_0:
# 1101 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hoenn Legendary & Competitive\n"
	.string "Pokémon!$"

PokemonLegendShop_Hoenn_Text_1:
# 1103 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Rayquaza (2500)$"

PokemonLegendShop_Hoenn_Text_2:
# 1103 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Groudon (2000)$"

PokemonLegendShop_Hoenn_Text_3:
# 1103 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Kyogre (2000)$"

PokemonLegendShop_Hoenn_Text_4:
# 1103 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Metagross (1500)$"

PokemonLegendShop_Hoenn_Text_5:
# 1103 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Salamence (1500)$"

PokemonLegendShop_Hoenn_Text_6:
# 1127 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Rayquaza for 2500\n"
	.string "coins?$"

PokemonLegendShop_Hoenn_Text_7:
# 1136 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Rayquaza!$"

PokemonLegendShop_Hoenn_Text_8:
# 1143 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Need 2500 coins!$"

PokemonLegendShop_Hoenn_Text_9:
# 1161 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Groudon for 2000\n"
	.string "coins?$"

PokemonLegendShop_Hoenn_Text_10:
# 1170 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Groudon!$"

PokemonLegendShop_Hoenn_Text_11:
# 1195 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Kyogre for 2000\n"
	.string "coins?$"

PokemonLegendShop_Hoenn_Text_12:
# 1204 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Kyogre!$"

PokemonLegendShop_Hoenn_Text_13:
# 1229 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Metagross for\n"
	.string "1500 coins?$"

PokemonLegendShop_Hoenn_Text_14:
# 1238 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Metagross!$"

PokemonLegendShop_Hoenn_Text_15:
# 1263 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Salamence for\n"
	.string "1500 coins?$"

PokemonLegendShop_Hoenn_Text_16:
# 1272 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Salamence!$"

PokemonRegionalShop_RegionMenu_Text_0:
# 1302 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Welcome to the Regional Pokémon Shop!\n"
	.string "These Pokémon come from distant\l"
	.string "regions.\n"
	.string "Which region would you like to browse?$"

PokemonRegionalShop_RegionMenu_Text_1:
# 1304 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Galar$"

PokemonRegionalShop_RegionMenu_Text_2:
# 1304 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hisui$"

PokemonRegionalShop_RegionMenu_Text_3:
# 1304 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Alola$"

PokemonRegionalShop_Galar_Text_0:
# 1330 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Galar Region Pokémon!$"

PokemonRegionalShop_Galar_Text_1:
# 1332 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Rillaboom (800)$"

PokemonRegionalShop_Galar_Text_2:
# 1332 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Cinderace (800)$"

PokemonRegionalShop_Galar_Text_3:
# 1332 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Inteleon (800)$"

PokemonRegionalShop_Galar_Text_4:
# 1333 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Dragapult (1200)$"

PokemonRegionalShop_Galar_Text_5:
# 1333 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Toxtricity (600)$"

PokemonRegionalShop_Galar_Text_6:
# 1357 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Rillaboom for 800\n"
	.string "coins?$"

PokemonRegionalShop_Galar_Text_7:
# 1366 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Rillaboom!$"

PokemonRegionalShop_Galar_Text_8:
# 1391 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Cinderace for 800\n"
	.string "coins?$"

PokemonRegionalShop_Galar_Text_9:
# 1400 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Cinderace!$"

PokemonRegionalShop_Galar_Text_10:
# 1425 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Inteleon for 800\n"
	.string "coins?$"

PokemonRegionalShop_Galar_Text_11:
# 1434 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Inteleon!$"

PokemonRegionalShop_Galar_Text_12:
# 1459 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Dragapult for\n"
	.string "1200 coins?$"

PokemonRegionalShop_Galar_Text_13:
# 1468 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Dragapult!$"

PokemonRegionalShop_Galar_Text_14:
# 1475 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You need 1200 coins!$"

PokemonRegionalShop_Galar_Text_15:
# 1493 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Toxtricity for 600\n"
	.string "coins?$"

PokemonRegionalShop_Galar_Text_16:
# 1502 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Toxtricity!$"

PokemonRegionalShop_Galar_Text_17:
# 1509 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You need 600 coins!$"

PokemonRegionalShop_Hisui_Text_0:
# 1524 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hisui Region Pokémon!$"

PokemonRegionalShop_Hisui_Text_1:
# 1526 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hisui Typhlosion (1000)$"

PokemonRegionalShop_Hisui_Text_2:
# 1526 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hisui Samurott (1000)$"

PokemonRegionalShop_Hisui_Text_3:
# 1526 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hisui Decidueye (1000)$"

PokemonRegionalShop_Hisui_Text_4:
# 1527 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Ursaluna (1200)$"

PokemonRegionalShop_Hisui_Text_5:
# 1527 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Wyrdeer (800)$"

PokemonRegionalShop_Hisui_Text_6:
# 1551 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Hisui Typhlosion\n"
	.string "for 1000 coins?$"

PokemonRegionalShop_Hisui_Text_7:
# 1560 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Hisui Typhlosion!$"

PokemonRegionalShop_Hisui_Text_8:
# 1585 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Hisui Samurott for\n"
	.string "1000 coins?$"

PokemonRegionalShop_Hisui_Text_9:
# 1594 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Hisui Samurott!$"

PokemonRegionalShop_Hisui_Text_10:
# 1619 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Hisui Decidueye\n"
	.string "for 1000 coins?$"

PokemonRegionalShop_Hisui_Text_11:
# 1628 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Hisui Decidueye!$"

PokemonRegionalShop_Hisui_Text_12:
# 1653 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Ursaluna for 1200\n"
	.string "coins?$"

PokemonRegionalShop_Hisui_Text_13:
# 1662 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Ursaluna!$"

PokemonRegionalShop_Hisui_Text_14:
# 1687 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Wyrdeer for 800\n"
	.string "coins?$"

PokemonRegionalShop_Hisui_Text_15:
# 1696 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Wyrdeer!$"

PokemonRegionalShop_Alola_Text_0:
# 1718 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Alola Region Pokémon!$"

PokemonRegionalShop_Alola_Text_1:
# 1720 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Decidueye (800)$"

PokemonRegionalShop_Alola_Text_2:
# 1720 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Incineroar (800)$"

PokemonRegionalShop_Alola_Text_3:
# 1720 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Primarina (800)$"

PokemonRegionalShop_Alola_Text_4:
# 1721 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Vikavolt (600)$"

PokemonRegionalShop_Alola_Text_5:
# 1721 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Kommo-o (1000)$"

PokemonRegionalShop_Alola_Text_6:
# 1745 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Decidueye for 800\n"
	.string "coins?$"

PokemonRegionalShop_Alola_Text_7:
# 1754 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Decidueye!$"

PokemonRegionalShop_Alola_Text_8:
# 1779 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Incineroar for 800\n"
	.string "coins?$"

PokemonRegionalShop_Alola_Text_9:
# 1788 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Incineroar!$"

PokemonRegionalShop_Alola_Text_10:
# 1813 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Primarina for 800\n"
	.string "coins?$"

PokemonRegionalShop_Alola_Text_11:
# 1822 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Primarina!$"

PokemonRegionalShop_Alola_Text_12:
# 1847 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Vikavolt for 600\n"
	.string "coins?$"

PokemonRegionalShop_Alola_Text_13:
# 1856 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Vikavolt!$"

PokemonRegionalShop_Alola_Text_14:
# 1881 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Kommo-o for 1000\n"
	.string "coins?$"

PokemonRegionalShop_Alola_Text_15:
# 1890 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Kommo-o!$"

PokemonVariantShop_RegionMenu_Text_0:
# 1919 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Welcome to the Regional Variant Shop!\n"
	.string "These Pokémon have unique forms from\l"
	.string "different regions.\n"
	.string "Which region's variants would you like\l"
	.string "to browse?$"

PokemonVariantShop_RegionMenu_Text_1:
# 1921 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Alolan Forms$"

PokemonVariantShop_RegionMenu_Text_2:
# 1921 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Galarian Forms$"

PokemonVariantShop_RegionMenu_Text_3:
# 1921 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hisuian Forms$"

PokemonVariantShop_Alola_Text_0:
# 1947 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Alolan Form Pokémon!$"

PokemonVariantShop_Alola_Text_1:
# 1949 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Alolan Raichu (800)$"

PokemonVariantShop_Alola_Text_2:
# 1949 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Alolan Ninetales (1000)$"

PokemonVariantShop_Alola_Text_3:
# 1949 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Alolan Marowak (800)$"

PokemonVariantShop_Alola_Text_4:
# 1950 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Alolan Muk (700)$"

PokemonVariantShop_Alola_Text_5:
# 1950 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Alolan Exeggutor (700)$"

PokemonVariantShop_Alola_Text_6:
# 1974 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Alolan Raichu for\n"
	.string "800 coins?$"

PokemonVariantShop_Alola_Text_7:
# 1983 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Alolan Raichu!$"

PokemonVariantShop_Alola_Text_8:
# 2008 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Alolan Ninetales\n"
	.string "for 1000 coins?$"

PokemonVariantShop_Alola_Text_9:
# 2017 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Alolan Ninetales!$"

PokemonVariantShop_Alola_Text_10:
# 2042 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Alolan Marowak for\n"
	.string "800 coins?$"

PokemonVariantShop_Alola_Text_11:
# 2051 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Alolan Marowak!$"

PokemonVariantShop_Alola_Text_12:
# 2076 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Alolan Muk for 700\n"
	.string "coins?$"

PokemonVariantShop_Alola_Text_13:
# 2085 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Alolan Muk!$"

PokemonVariantShop_Alola_Text_14:
# 2092 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You need 700 coins!$"

PokemonVariantShop_Alola_Text_15:
# 2110 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Alolan Exeggutor\n"
	.string "for 700 coins?$"

PokemonVariantShop_Alola_Text_16:
# 2119 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Alolan Exeggutor!$"

PokemonVariantShop_Galar_Text_0:
# 2141 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Galarian Form Pokémon!$"

PokemonVariantShop_Galar_Text_1:
# 2143 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Galarian Slowbro (800)$"

PokemonVariantShop_Galar_Text_2:
# 2143 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Galarian Rapidash (800)$"

PokemonVariantShop_Galar_Text_3:
# 2143 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Galarian Weezing (700)$"

PokemonVariantShop_Galar_Text_4:
# 2144 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Galarian Darmanitan (900)$"

PokemonVariantShop_Galar_Text_5:
# 2144 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Galarian Corsola (600)$"

PokemonVariantShop_Galar_Text_6:
# 2168 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Galarian Slowbro\n"
	.string "for 800 coins?$"

PokemonVariantShop_Galar_Text_7:
# 2177 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Galarian Slowbro!$"

PokemonVariantShop_Galar_Text_8:
# 2202 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Galarian Rapidash\n"
	.string "for 800 coins?$"

PokemonVariantShop_Galar_Text_9:
# 2211 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Galarian Rapidash!$"

PokemonVariantShop_Galar_Text_10:
# 2236 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Galarian Weezing\n"
	.string "for 700 coins?$"

PokemonVariantShop_Galar_Text_11:
# 2245 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Galarian Weezing!$"

PokemonVariantShop_Galar_Text_12:
# 2270 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Galarian\n"
	.string "Darmanitan for 900 coins?$"

PokemonVariantShop_Galar_Text_13:
# 2279 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Galarian Darmanitan!$"

PokemonVariantShop_Galar_Text_14:
# 2286 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You need 900 coins!$"

PokemonVariantShop_Galar_Text_15:
# 2304 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Galarian Corsola\n"
	.string "for 600 coins?$"

PokemonVariantShop_Galar_Text_16:
# 2313 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Galarian Corsola!$"

PokemonVariantShop_Hisui_Text_0:
# 2335 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hisuian Form Pokémon!$"

PokemonVariantShop_Hisui_Text_1:
# 2337 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hisuian Arcanine (1000)$"

PokemonVariantShop_Hisui_Text_2:
# 2337 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hisuian Zoroark (1000)$"

PokemonVariantShop_Hisui_Text_3:
# 2337 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hisuian Goodra (1100)$"

PokemonVariantShop_Hisui_Text_4:
# 2338 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hisuian Braviary (900)$"

PokemonVariantShop_Hisui_Text_5:
# 2338 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hisuian Lilligant (800)$"

PokemonVariantShop_Hisui_Text_6:
# 2362 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Hisuian Arcanine\n"
	.string "for 1000 coins?$"

PokemonVariantShop_Hisui_Text_7:
# 2371 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Hisuian Arcanine!$"

PokemonVariantShop_Hisui_Text_8:
# 2396 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Hisuian Zoroark\n"
	.string "for 1000 coins?$"

PokemonVariantShop_Hisui_Text_9:
# 2405 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Hisuian Zoroark!$"

PokemonVariantShop_Hisui_Text_10:
# 2430 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Hisuian Goodra for\n"
	.string "1100 coins?$"

PokemonVariantShop_Hisui_Text_11:
# 2439 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Hisuian Goodra!$"

PokemonVariantShop_Hisui_Text_12:
# 2446 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You need 1100 coins!$"

PokemonVariantShop_Hisui_Text_13:
# 2464 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Hisuian Braviary\n"
	.string "for 900 coins?$"

PokemonVariantShop_Hisui_Text_14:
# 2473 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Hisuian Braviary!$"

PokemonVariantShop_Hisui_Text_15:
# 2498 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Would you like to buy Hisuian Lilligant\n"
	.string "for 800 coins?$"

PokemonVariantShop_Hisui_Text_16:
# 2507 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You received Hisuian Lilligant!$"

MauvilleCity_GameCorner_EventScript_ReactionGame_Text_0:
# 2528 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You can't play if you don't have a COIN CASE.$"

MauvilleCity_GameCorner_EventScript_ReactionGame_Text_1:
# 2532 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "It's a REACTION GAME!\nWant to test your reflexes?$"
