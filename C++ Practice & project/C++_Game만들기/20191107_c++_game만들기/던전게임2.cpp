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


string job[3] = { "����","������","����" };
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
	cout << "[���� ����]" << endl;
	cout << "1. ���� 2. ������ 3. ����" << endl;
	while (1)
	{
		cout << "����: ";
		cin >> num;
		if (num == 1)
		{
			cout << "���� ���� ����" << endl;
			break;
		}
		else if (num == 2)
		{
			cout << "���� ������ ����" << endl;
			break;
		}
		else if (num == 3)
		{
			cout << "���� ���� ����" << endl;
			break;
		}
		else
		{
			cout << "���� �����Դϴ� �ٽ� �Է����ּ���!" << endl;
		}
	}
	selected_job = num;
	cout << endl;
	return;
}

void select_level()
{
	cout << endl;
	cout << "[���̵� ����]" << endl;
	cout << "1. ���� 2. ���� 3. �����" << endl;
	while (1)
	{
		cout << "����: ";
		cin >> num;
		cout << endl;
		if (num == 1)
		{
			cout << "���̵� ���� ����" << endl;
			break;
		}
		else if (num == 2)
		{
			cout << "���̵� ���� ����" << endl;
			break;
		}
		else if (num == 3)
		{
			cout << "���̵� ����� ����" << endl;
			break;
		}
		else
		{
			cout << "���� ���̵��Դϴ� �ٽ� �Է����ּ���!" << endl;
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
	cout << "1. ���̵� �����ϱ�" << endl;
	cout << "2. ���� �����ϱ�" << endl;
	cout << "3. �����ϱ�" << endl;

	while (1)
	{
		cout << "����: ";
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
				cout << "������ �����մϴ�!" << endl;
				return;
			}
			else
			{
				cout << "��� ������ �� �������� �ʾҽ��ϴ�. �� �����ϰ� ������~" << endl;
				break;
			}
		}
		else
		{
			cout << "���� �޴��Դϴ� �ٽ� �Է����ּ���!" << endl;
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
				cout << "����� �й��Ͽ����ϴ٤�" << endl;
				dead_flag = 1;
				return;
			}
			if (enemy_hp <= 0)
			{
				cout << "���� óġ �߽��ϴ�." << endl;
				break;
			}

			cout << "<ROUND " << this_round << " - " << this_round_round << endl;
			cout << "��� : HP(" << my_hp << ")" << "   " << "MP(" << my_mp << ")" << endl;
			cout << "��� : HP(" << my_hp << ")" << endl;
			cout << "1. �Ϲݰ���  2. ��ų���" << endl;

			while (1)
			{
				cout << "����: ";
				cin >> num;
				cout << endl;
				if ((num == 1) || (num == 2))break;
				else
				{
					cout << "�߸��� ���� ����Դϴ�. �ٽ� �Է����ּ���!" << endl;
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
	cout << "����� �¸��ϼ̽��ϴ�!" << endl;
	return;
}