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
	Character() //굳이 필요는 없지만 초기값
	{
		my_hp = 0;
		my_mp = 0;
		armor = 0;
		damage = 0;
		skill = 0;
	}
	virtual ~Character() {}
	virtual int get_damage() = 0; //캐릭터 데미지 호출함수
	virtual double get_skill() = 0; //캐릭터 스킬데미지 호출함수
	virtual int get_armor() = 0; //캐릭터 방어력 호출함수
	virtual int get_my_hp() = 0; //캐릭터 체력 호출함수
	virtual int get_my_mp() = 0; //캐릭터 마나 호출함수
	virtual void set_my_hp(int hp) = 0; //캐릭터 hp 업데이트함수
	virtual void set_my_mp(int mp) = 0; //캐릭터 mp 업데이트함수
};
