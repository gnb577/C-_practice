#pragma once

#include"CharacterManager.h"
void CharacterManager::select_job() 
{
	cout << endl;
	cout << "[���� ����]" << endl;
	cout << "1. ���� 2. ������ 3. ����" << endl;
	while (1)
	{
		cout << "����: ";
		cin >> num;
		cin.clear();
		cin.ignore(256,'\n');
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
		cin.clear();
		cin.ignore(256, '\n');
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
		cin.clear();
		cin.ignore(256, '\n');
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
void CharacterManager::make_character() // selected_job�� ���� ���� ����
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
void CharacterManager::make_enemies() //���̵� +2��ŭ�� �� ����
{
	enemy_count = level + 2;
	enemies = new Enemy[enemy_count];
}
void  CharacterManager::normal_attack()
{
	int my_damage = me->get_damage(); //�� damage
	int enemy_armor = enemies[this_round - 1].get_armor();//�� armor
	int lose_hp = my_damage - enemy_armor;//�� damage - �� armor
	enemies[this_round - 1].set_my_hp(lose_hp);//���� ü�� ������Ʈ
	cout << "����� ��뿡�� " << lose_hp << "�� ���ظ� �������ϴ�." << endl;
}
void  CharacterManager::enemy_attack()
{
	int enemy_damage = enemies[this_round - 1].get_damage();//�� damage
	int my_armor = me->get_armor();// �� ����
	int lose_hp = enemy_damage - my_armor; // �� damage - �� armor
	me->set_my_hp(lose_hp); // �� ���� ü�� ������Ʈ
	cout << "����� ���κ��� " << lose_hp << "�� ���ظ� �Ծ����ϴ�." << endl;
}
void  CharacterManager::spell_skill()
{
	double my_skill_damage = me->get_skill();//�� damage
	int enemy_armor = enemies[this_round - 1].get_armor();//�� armor
	int lose_hp = (int)my_skill_damage - enemy_armor;// �� damage - �� armor
	enemies[this_round - 1].set_my_hp(lose_hp);//���� ü�� ������Ʈ
	me->set_my_mp(10);//���� ���� 10 ������Ʈ
	cout << "����� ��뿡�� " << lose_hp << "�� ���ظ� �������ϴ�." << endl;
}

void CharacterManager::play_game()
{
	for (int i = 0; i < enemy_count; i++)
	{
		this_round++; //���ο� �� ���� ���� �߰�
		this_round_round = 1; // ���ο� ���� �ʱ�ȭ
		while (1)
		{
			if (me->get_my_hp() <= 0) //ü�� ����
			{
				cout << "����� �й��Ͽ����ϴ٤�" << endl;
				return;
			}
			if (enemies[i].get_my_hp() <= 0) // �� ü�� ����
			{
				cout << "���� óġ �߽��ϴ�." << endl;
				cout << endl;
				break;
			}

			cout << "<ROUND " << this_round << " - " << this_round_round << ">" << endl;
			cout << "��� : HP(" << me->get_my_hp() << ")" << "   " << "MP(" << me->get_my_mp() << ")" << endl;
			cout << "��� : HP(" << enemies[i].get_my_hp() << ")" << endl;
			cout << "1. �Ϲݰ���  2. ��ų���" << endl;

			while (1)
			{
				cout << "����: ";
				cin >> num;
				cin.clear();
				cin.ignore(256, '\n');
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
				if (me->get_my_mp() < 10) //���� ���� ��ų ��� ����
				{
					cout << "MP�� �����մϴ�. ��ų ��뿡 �����߽��ϴ�." << endl;
					cout << endl;
					cout << "����� ��뿡�� 0�� ���ظ� �������ϴ�." << endl;
					enemy_attack();
					this_round_round++;
				}
				else // ���� ��� ��ų��� ����
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