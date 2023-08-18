PalletTown_MapScripts::
	.byte 0

PalletTown_EventScript_OaksLabSign::
	lockall
	msgbox PalletTown_Text_OakPokemonResearchLab
	releaseall
	end

PalletTown_EventScript_PlayersHouseSign::
	msgbox PalletTown_Text_PlayersHouse, MSGBOX_SIGN
	end

PalletTown_EventScript_RivalsHouseSign::
	msgbox PalletTown_Text_RivalsHouse, MSGBOX_SIGN
	end

PalletTown_EventScript_TownSign::
	msgbox PalletTown_Text_TownSign, MSGBOX_SIGN
	end

PalletTown_EventScript_TrainerTips::
	lockall
	msgbox PalletTown_Text_PressStartToOpenMenu, MSGBOX_SIGN
	releaseall
	end

@ TEXT: Sign in Front of Player's House
PalletTown_Text_PlayersHouse::
    .string "{PLAYER}'s house$"

@ TEXT: Sign in Front of Rival's House
PalletTown_Text_RivalsHouse::
    .string "{RIVAL}'s house$"

@ TEXT: Pallet Town Sign on Fence Near Flowers
PalletTown_Text_TownSign::
    .string "PALLET TOWN\n"
    .string "Shades of your journey await!$"

@ TEXT: Pallet Town Trainer Tips Sign
PalletTown_Text_PressStartToOpenMenu::
	.string "TRAINER TIPS\p"
	.string "Press START to open the MENU!$"

@ TEXT: Sign in Front of Professor Oak's Lab
PalletTown_Text_OakPokemonResearchLab::
    .string "OAK POKéMON RESEARCH LAB$"
