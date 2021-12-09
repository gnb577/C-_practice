#pragma once
#include"Character.h"
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
	virtual ~Warrior() {}
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