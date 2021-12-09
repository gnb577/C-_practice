#pragma once
#include"Character.h"
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
	virtual ~Thief() {}
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