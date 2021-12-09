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
	int get_damage()//캐릭터 데미지 호출함수
	{
		return damage;
	}
	double get_skill()//캐릭터 스킬데미지 호출함수
	{
		return 0;
	}
	int get_armor()//캐릭터 방어력 호출함수
	{
		return armor;
	}
	int get_my_hp() //캐릭터 체력 호출함수
	{
		return my_hp;
	}
	int get_my_mp()//캐릭터 마나 호출함수
	{
		return my_mp;
	}
	void set_my_hp(int hp)//캐릭터 hp 업데이트함수
	{
		my_hp = my_hp - hp;
	}
	void set_my_mp(int mp)//캐릭터 mp 업데이트함수
	{
		my_mp = my_mp - mp;
	}
};