#pragma once
#include"Character.h"
#include"Warrior.h"
#include"Magician.h"
#include"Thief.h"
#include"Enemy.h"

class CharacterManager
{
	Character* enemies; //적 마리수 만큼의 변수배열을 위한 포인터
	Character* me; // 내 캐릭터 생성
	int enemy_count = 0; //적의 수
	int num = 0; // 내 입력 숫자를 담을 변수
	int level = 0; //난이도
	int selected_job = 0; //직업 선택
	int menu_flag = 0; //menu에서 게임이 시작될 준비가 됬는지 알기 위한 함수

	//int my_hp = 0; 
	//int my_mp = 0;

	int this_round = 0; //몇 번째 적을 상대하는 지 나타내는 변수
	int this_round_round = 0; //이번 적을 몇 번째로 상대하는 지 나타내는 변수

public:
	~CharacterManager() //동적할당 소멸
	{
		delete[]enemies;
		delete[] me;
	}
	void select_job(); //직업 선택 함수
	void select_level(); //난이도 선택 함수
	void show_menu(); // 메뉴 선택
	void set_menu_flag() // 게임 가능 상태 flag
	{
		menu_flag = 1;
	}
	int get_menu_flag() // menu_flag return
	{
		return menu_flag;
	}
	void make_enemies(); // 적 생성함수
	void make_character();// 캐릭터 생성함수
	void normal_attack(); // 일반 공격 함수
	void spell_skill(); // 스킬 시전 함수
	void enemy_attack(); // 적 공격 함수
	void play_game(); // 게임 실행 함수

};