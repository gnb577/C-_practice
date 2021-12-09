#include<iostream>
#include<cstring>
#include<string>

using namespace std;

class Character
{
protected:
	int my_hp;
	int my_mp;
	int armor;
	int damage;
	double skill;
public:
	Character()
	{
		my_hp = 0;
		my_mp = 0;
		armor = 0;
		damage = 0;
		skill = 0;
	}
	virtual int get_damage() = 0;
	virtual double get_skill() = 0;
	virtual int get_armor() = 0;
	virtual int get_my_hp() = 0;
	virtual int get_my_mp() = 0;
	virtual void set_my_hp(int hp) = 0;
	virtual void set_my_mp(int mp) = 0;
};

class CharacterManager
{
	Character* enemies;
	Character* me;
	int enemy_count=0;
	int num=0;
	int level = 0;
	int selected_job = 0;
	int menu_flag = 0;
	int dead_flag = 0;
	int victory_flag = 0;

	int my_hp = 0;
    int my_mp = 0;

	int this_round = 0;
	int this_round_round = 0;

	public:
		void select_job();
		void select_level();
		void show_menu();
		void set_menu_flag()
		{
			menu_flag = 1;
		}
		int get_menu_flag()
		{
			return menu_flag;
		}
		void make_enemies();
		void make_character();
		void normal_attack();
		void spell_skill();
		void enemy_attack();
		void play_game();
		
};

class Warrior :public Character
{
protected:

public:
	Warrior()
	{
		this->my_hp = 150;
		this->my_mp = 60;
		this->armor = 10;
		this->damage = 13;
		this->skill = 15;
	}
	int get_damage()
	{
		return damage;
	}
	double get_skill()
	{
		return skill;
	}
	int get_armor()
	{
		return armor;
	}
	int get_my_hp()
	{
		return my_hp;
	}
	int get_my_mp()
	{
		return my_mp;
	}
	void set_my_hp(int hp)
	{
		my_hp = my_hp - hp;
	}
	void set_my_mp(int mp)
	{
		my_mp = my_mp - mp;
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
	int get_damage()
	{
		return damage;
	}
	double get_skill()
	{
		return skill;
	}
	int get_armor()
	{
		return armor;
	}
	int get_my_hp()
	{
		return my_hp;
	}
	int get_my_mp()
	{
		return my_mp;
	}
	void set_my_hp(int hp)
	{
		my_hp = my_hp - hp;
	}
	void set_my_mp(int mp)
	{
		my_mp = my_mp - mp;
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
		this->skill = damage * 1.5;
	}
	int get_damage()
	{
		return damage;
	}
	double get_skill()
	{
		return skill;
	}
	int get_armor()
	{
		return armor;
	}
	int get_my_hp()
	{
		return my_hp;
	}
	int get_my_mp()
	{
		return my_mp;
	}
	void set_my_hp(int hp)
	{
		my_hp = my_hp - hp;
	}
	void set_my_mp(int mp)
	{
		my_mp = my_mp - mp;
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
	int get_damage()
	{
		return damage;
	}
	
	double get_skill()
	{
		return skill;
	}
	
	int get_armor()
	{
		return armor;
	}
	int get_my_hp()
	{
		return my_hp;
	}
	int get_my_mp()
	{
		return my_mp;
	}
	void set_my_hp(int hp)
	{
		my_hp = my_hp - hp;
	}
	void set_my_mp(int mp)
	{
		my_mp = my_mp - mp;
	}
};



int main()
{
	cout << "Dungeon Adventure!" << endl;
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


void CharacterManager:: select_job()
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

void CharacterManager::select_level()
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
void CharacterManager::show_menu()
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
				set_menu_flag();
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
void CharacterManager::make_character()
{
	if (selected_job == 1)
	{
		Character* Job = new Warrior();
		me = Job;
	}
	else if (selected_job == 2)
	{
		Character* Job = new Magician();
		me = Job;
	}
	else if (selected_job == 3)
	{
		Character* Job = new Thief();
		me = Job;
	}
	else
	{
		cout << "make_character error" << endl;
	}
}
void CharacterManager::make_enemies()
{
	enemy_count = level + 2;
	enemies = new Enemy[enemy_count];
}
void  CharacterManager::normal_attack()
{
	int my_damage = me->get_damage(); //13
	int enemy_armor = enemies[this_round - 1].get_armor();//5
	int lose_hp = my_damage - enemy_armor;//8
	enemies[this_round - 1].set_my_hp(lose_hp);//150-8
	cout << "����� ��뿡�� " << lose_hp << "�� ���ظ� �������ϴ�." << endl;
}
void  CharacterManager::enemy_attack()
{
	int enemy_damage = enemies[this_round - 1].get_damage();//
	int my_armor = me->get_armor();
	int lose_hp = enemy_damage - my_armor;
	me->set_my_hp(lose_hp);
	cout << "����� ���κ��� " << lose_hp << "�� ���ظ� �Ծ����ϴ�." << endl;
}
void  CharacterManager::spell_skill()
{
	double my_skill_damage = me->get_skill();//15
	int enemy_armor = enemies[this_round - 1].get_armor();//5
	int lose_hp = (int)my_skill_damage - enemy_armor;//10
	enemies[this_round - 1].set_my_hp(lose_hp);
	me->set_my_mp(10);//60-10
	cout << "����� ��뿡�� " << lose_hp << "�� ���ظ� �������ϴ�." << endl;
}

void CharacterManager::play_game()
{
	for (int i = 0; i < enemy_count; i++)
	{
		this_round++;
		this_round_round = 1;
		while (1)
		{
			if (me->get_my_hp() <= 0)
			{
				cout << "����� �й��Ͽ����ϴ٤�" << endl;
				dead_flag = 1;
				return;
			}
			if (enemies[i].get_my_hp() <= 0)
			{
				cout << "���� óġ �߽��ϴ�." << endl;
				cout << endl;
				break;
			}

			cout << "<ROUND " << this_round << " - " << this_round_round<< ">" << endl;
			cout << "��� : HP(" << me->get_my_hp() << ")" << "   " << "MP(" << me->get_my_mp() << ")" << endl;
			cout << "��� : HP(" << enemies[i].get_my_hp() << ")" << endl;
			cout << "1. �Ϲݰ���  2. ��ų���" << endl;

			while (1)
			{
				cout << "����: ";
				cin >> num;
				cin.ignore();
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
				enemy_attack();
				this_round_round++;
			}
			if (num == 2)
			{
				if (me->get_my_mp() < 10)
				{
					cout << "MP�� �����մϴ�. ��ų ��뿡 �����߽��ϴ�." << endl;
					cout << endl;
					cout << "����� ��뿡�� 0�� ���ظ� �������ϴ�." << endl;
					enemy_attack();
				}
				else
				{
					spell_skill();
					enemy_attack();
					this_round_round++;
				}
			}
		}
	}
	cout << "����� �¸��ϼ̽��ϴ�!" << endl;
	return;
}