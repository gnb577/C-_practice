#pragma once
#include"Character.h"
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
	virtual ~Enemy() {}
	int get_damage()//ĳ���� ������ ȣ���Լ�
	{
		return damage;
	}
	double get_skill()//ĳ���� ��ų������ ȣ���Լ�
	{
		return 0;
	}
	int get_armor()//ĳ���� ���� ȣ���Լ�
	{
		return armor;
	}
	int get_my_hp() //ĳ���� ü�� ȣ���Լ�
	{
		return my_hp;
	}
	int get_my_mp()//ĳ���� ���� ȣ���Լ�
	{
		return my_mp;
	}
	void set_my_hp(int hp)//ĳ���� hp ������Ʈ�Լ�
	{
		my_hp = my_hp - hp;
	}
	void set_my_mp(int mp)//ĳ���� mp ������Ʈ�Լ�
	{
		my_mp = my_mp - mp;
	}
};