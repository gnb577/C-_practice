#pragma once

#include"CharacterManager.h"
using namespace std;

int main()
{
	cout
		<< "Dungeon Adventure!" << endl;
	CharacterManager D;
	while (1)
	{
		D.show_menu();
		if (D.get_menu_flag() != 0)
		{
			break;
		}
	}
	D.make_enemies();
	D.make_character();
	D.play_game();
	return 0;
}
