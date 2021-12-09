#pragma once
#include "Horses.h"

class HorseManagers {
	Horses* p; //말의 마리 수에 따라 동적할당을 할 때 사용할 포인터
	int* q; // random함수를 말의 마리 수 만큼 뽑아내기 위해 사용할 포인터
	int* t;
	int horse_number; //미사용
	int my_horse; // 내가 뽑은 우승자 말의 번호
public:
	HorseManagers(const int p, const int n); // 말의 마리수와 우승말을 인자로 받아 실질적으로 함수와 같은 역할을 하는 생성자
	void make_random_number(const int pop); // 랜덤 수 생성
	void make_winner_flag(const int pop); // 우승자를 가리기 위한 flag
	void initial_winner_flag(const int pop); // winner_flag 초기화 함수
	void play(const int pop); // 게임 실행 함수
	void consider_winner(const int pop); //우승자 가리는 함수
	~HorseManagers();//동적 할당한 값을 날려줄 소멸자

};