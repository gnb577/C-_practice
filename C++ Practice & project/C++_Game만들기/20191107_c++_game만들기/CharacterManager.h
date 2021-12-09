#pragma once
#include"Character.h"
#include"Warrior.h"
#include"Magician.h"
#include"Thief.h"
#include"Enemy.h"

class CharacterManager
{
	Character* enemies; //�� ������ ��ŭ�� �����迭�� ���� ������
	Character* me; // �� ĳ���� ����
	int enemy_count = 0; //���� ��
	int num = 0; // �� �Է� ���ڸ� ���� ����
	int level = 0; //���̵�
	int selected_job = 0; //���� ����
	int menu_flag = 0; //menu���� ������ ���۵� �غ� ����� �˱� ���� �Լ�

	//int my_hp = 0; 
	//int my_mp = 0;

	int this_round = 0; //�� ��° ���� ����ϴ� �� ��Ÿ���� ����
	int this_round_round = 0; //�̹� ���� �� ��°�� ����ϴ� �� ��Ÿ���� ����

public:
	~CharacterManager() //�����Ҵ� �Ҹ�
	{
		delete[]enemies;
		delete[] me;
	}
	void select_job(); //���� ���� �Լ�
	void select_level(); //���̵� ���� �Լ�
	void show_menu(); // �޴� ����
	void set_menu_flag() // ���� ���� ���� flag
	{
		menu_flag = 1;
	}
	int get_menu_flag() // menu_flag return
	{
		return menu_flag;
	}
	void make_enemies(); // �� �����Լ�
	void make_character();// ĳ���� �����Լ�
	void normal_attack(); // �Ϲ� ���� �Լ�
	void spell_skill(); // ��ų ���� �Լ�
	void enemy_attack(); // �� ���� �Լ�
	void play_game(); // ���� ���� �Լ�

};