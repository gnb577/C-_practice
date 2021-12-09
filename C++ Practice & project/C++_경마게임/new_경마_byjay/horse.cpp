#include"horse.h"

Horse::Horse() //초기화
{
	horse_distance = 0;
}

void Horse::set(const int horse_number, const int _random_number) //말의 이동거리를 저장하고 갱신하는 함수
{
	horse_distance = horse_distance + _random_number;
	if (horse_distance >= 20) //거리가 20을 초과하면 20으로 간주하겠음
	{
		horse_distance = 20;
	}
	this->horse_number = horse_number;
}

int Horse::get() //20에 도달했는지를 판별해서 나중에 함수를 종료시킬 때 사용할 get함수
{
	return horse_distance;
}

void Horse::print_distance(int horse_distance) //이동한 거리를 표현해줄 함수
{
	for (int i = 0; i < horse_distance; i++)
	{
		cout << "--";
	}
}

void Horse::make_line() // 경기장 틀 생성 함수
{
	cout << "====================================================" << endl;
}

void Horse::show() //말의 번호와 말을 표시하는 함수
{
	cout << horse_number + 1 << "| "; //배열은 0부터 시작하나 말 번호는 1번부터니까
	print_distance(horse_distance);
	cout << "(  )=> " << horse_distance << endl;
}
