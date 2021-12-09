#include<iostream>
#include<cstring>
#include<string>

using namespace std;
unsigned int num;
unsigned int level = 0;
unsigned int selected_job = 0;

unsigned int menu_flag = 0;
unsigned int dead_flag = 0;
unsigned int victory_flag = 0;

unsigned int my_hp = 0;
unsigned int my_mp = 0;
unsigned int enemy_hp = 0;
unsigned int enemy_count;

unsigned int this_round = 0;
unsigned int this_round_round = 0;


string job[3] = { "전사","마법사","도적" };
string selecting_job;

class Character
{
protected:
	unsigned int my_hp;
	unsigned int my_mp;
	unsigned int armor;
	unsigned int damage;
	unsigned int skill;
public:
	
	virtual int get_damage() = 0;
	virtual int get_skill() = 0;
	virtual int get_armor() = 0;
	virtual int get_my_hp() = 0;
	virtual int get_my_mp() = 0;
	virtual int set_my_hp() = 0;
	virtual int set_my_mp() = 0;
	virtual void spell_skill() = 0;
	virtual void normal_attack() = 0;
};

class Warrior :public Character
{
protected:

public:
	Warrior()
	{
		this->my_hp = 150;
		this->my_mp = 60;
		this->armor=10;
		this->damage=13;
		this->skill=15;
	}
	void spell_skill()
	{

	}
	void normal_attack()
	{

	}
};

class Magician :public Character
{

protected:

public:
	Magician()
	{
		this->my_hp = 120;
		this->my_mp = 80;
		this->armor = 7;
		this->damage = 10;
		this->skill = 30;
	}
	void spell_skill()
	{
	}
	void normal_attack()
	{

	}


};

class Thief :public Character
{
protected:

public:
	Thief()
	{
		this->my_hp = 120;
		this->my_mp = 60;
		this->armor = 7;
		this->damage = 16;
		this->skill = damage*1.5;
	}
	void spell_skill()
	{

	}
	void normal_attack()
	{

	}
};

class Enemy :public Character
{
protected:

public:
	Enemy()
	{
		this->my_hp = 40;
		this->my_mp = 0;
		this->armor = 5;
		this->damage = 15;
		this->skill = 0;
	}
	void normal_attack()
	{

	}
};



void select_job();
void select_level();
void show_menu();
void play_game();


int main()
{
	cout << "Dungeon Adventure!" << endl;

	while (1)
	{
		show_menu();
		if (menu_flag != 0)
		{
			break;
		}
	}
	enemy_count = level + 2;
	play_game();
	return 0;
}


void select_job()
{
	cout << endl;
	cout << "[직업 선택]" << endl;
	cout << "1. 전사 2. 마법사 3. 도적" << endl;
	while (1)
	{
		cout << "선택: ";
		cin >> num;
		if (num == 1)
		{
			cout << "직업 전사 선택" << endl;
			break;
		}
		else if (num == 2)
		{
			cout << "직업 마법사 선택" << endl;
			break;
		}
		else if (num == 3)
		{
			cout << "직업 도적 선택" << endl;
			break;
		}
		else
		{
			cout << "없는 직업입니다 다시 입력해주세요!" << endl;
		}
	}
	selected_job = num;
	cout << endl;
	return;
}

void select_level()
{
	cout << endl;
	cout << "[난이도 선택]" << endl;
	cout << "1. 쉬움 2. 보통 3. 어려움" << endl;
	while (1)
	{
		cout << "선택: ";
		cin >> num;
		cout << endl;
		if (num == 1)
		{
			cout << "난이도 쉬움 선택" << endl;
			break;
		}
		else if (num == 2)
		{
			cout << "난이도 보통 선택" << endl;
			break;
		}
		else if (num == 3)
		{
			cout << "난이도 어려움 선택" << endl;
			break;
		}
		else
		{
			cout << "없는 난이도입니다 다시 입력해주세요!" << endl;
		}
	}
	level = num;
	cout << endl;
	return;

}

void show_menu()
{
	cout << endl;
	cout << "------Menu------" << endl;
	cout << "1. 난이도 설정하기" << endl;
	cout << "2. 직업 선택하기" << endl;
	cout << "3. 게임하기" << endl;

	while (1)
	{
		cout << "선택: ";
		cin >> num;
		cout << endl;
		if (num == 1)
		{
			select_level();
			break;
		}
		else if (num == 2)
		{
			select_job();
			break;
		}
		else if (num == 3)
		{
			if (num == 3 && selected_job != 0 && level != 0)
			{
				menu_flag = 1;
				cout << "게임을 시작합니다!" << endl;
				return;
			}
			else
			{
				cout << "모든 설정이 다 설정되지 않았습니다. 다 설정하고 오세요~" << endl;
				break;
			}
		}
		else
		{
			cout << "없는 메뉴입니다 다시 입력해주세요!" << endl;
		}
	}
	return;
}

void play_game()
{
	for (int i = 0; i < enemy_count; i++)
	{
		this_round++;
		while (1)
		{
			if (my_hp <= 0)
			{
				cout << "당신은 패배하였습니다ㅜ" << endl;
				dead_flag = 1;
				return;
			}
			if (enemy_hp <= 0)
			{
				cout << "적을 처치 했습니다." << endl;
				break;
			}

			cout << "<ROUND " << this_round << " - " << this_round_round << endl;
			cout << "당신 : HP(" << my_hp << ")" << "   " << "MP(" << my_mp << ")" << endl;
			cout << "상대 : HP(" << my_hp << ")" << endl;
			cout << "1. 일반공격  2. 스킬사용" << endl;

			while (1)
			{
				cout << "선택: ";
				cin >> num;
				cout << endl;
				if ((num == 1) || (num == 2))break;
				else
				{
					cout << "잘못된 공격 방법입니다. 다시 입력해주세요!" << endl;
				}
			}
			if (num == 1)
			{
				normal_attack();
				this_round_round++;
			}
			else if (num == 2)
			{
				spell_skill();
				this_round_round++;
			}
		}
	}
	cout << "당신은 승리하셨습니다!" << endl;
	return;
}