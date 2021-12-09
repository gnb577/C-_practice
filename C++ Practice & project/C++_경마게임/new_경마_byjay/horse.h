#pragma once
#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<ctime>

using namespace std;
class Horse
{
	int horse_distance; //random으로 받아낸 값으로 말이 이동할 거리를 담을 변수
	int horse_number; //해당 말의 번호를 담을 변수
public:
	Horse();//horse의 기본distance를 0으로 초기화
	void set(const int horse_number, const int _random_number); //몇 번말의 distance값을 바꾸어줄 함수
	void print_distance(int horse_distance); //직접적으로 말의 간 거리를 print해주는 함수
	int get(); //저장 된 변수 값을 가져올 함수
	void show(); //(n번)말 한마리가 가는 거리를 그릴 함수
	void make_line(); // 틀 그리는 함수
};