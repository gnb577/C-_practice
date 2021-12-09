#pragma once

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
	Character() //���� �ʿ�� ������ �ʱⰪ
	{
		my_hp = 0;
		my_mp = 0;
		armor = 0;
		damage = 0;
		skill = 0;
	}
	virtual ~Character() {}
	virtual int get_damage() = 0; //ĳ���� ������ ȣ���Լ�
	virtual double get_skill() = 0; //ĳ���� ��ų������ ȣ���Լ�
	virtual int get_armor() = 0; //ĳ���� ���� ȣ���Լ�
	virtual int get_my_hp() = 0; //ĳ���� ü�� ȣ���Լ�
	virtual int get_my_mp() = 0; //ĳ���� ���� ȣ���Լ�
	virtual void set_my_hp(int hp) = 0; //ĳ���� hp ������Ʈ�Լ�
	virtual void set_my_mp(int mp) = 0; //ĳ���� mp ������Ʈ�Լ�
};
