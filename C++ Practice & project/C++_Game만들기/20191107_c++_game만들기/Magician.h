#pragma once
#include"Character.h"
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
	virtual ~Magician(){}
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