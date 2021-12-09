#pragma once
#include "Horses.h"

class HorseManagers {
	Horse* p; //말의 마리 수에 따라 동적할당을 할 때 사용할 포인터
	int* q; // random함수를 말의 마리 수 만큼 뽑아내기 위해 사용할 포인터
	int* t;
	int horse_number; //미사용
	int my_horse; // 내가 뽑은 우승자 말의 번호
public:
	HorseManager2(const int p, const int n); //말의 마리수와 우승말을 인자로 받아 실질적으로 함수와 같은 역할을 하는 생성자
	void make_random_number(const int pop);
	void make_winner_flag(const int pop);
	void initial_winner_flag(const int pop);
	~HorseManager2();//동적 할당한 값을 날려줄 소멸자

};