#pragma once
#include "HorseManager.h"

HorseManager::HorseManager(const int pop, const int n)
{
	p = new Horse[pop]; //말의 마리수 만큼 객체 생성
	my_horse = n; //내가 응원하는 말의 번호

	srand(unsigned(time(NULL))); //time헤더를 이용해 랜덤변수를 사용하고 주기적인 시간을 사용하기 위해 타이머 시작
	q = new int[pop];//각 말마다 랜덤 숫자를 생성해서 저장할 공간
    t = new int[pop]; // 등수를 표현할 공간

	for (int i = 0; i < pop; i++)
	{
		t[i] = 0; //등수 flag 초기화
	}

	int timer_counter = 1; //Time: 이 부분에서 한 사이클 돌 때마다 숫자를 +1해줄 함수

	while (1)
	{
		if (clock() % 500 == 0) //0.5초마다 한 사이클을 돌린다
		{

			cout << endl << "Time : " << timer_counter << endl;
			int flag = 0;
			p[0].make_line(); //틀 생성하고
			for (int i = 0; i < pop; i++) //그리는 함수
			{
				q[i] = rand() % 6; //랜덤 수 생성 0~5사이
				p[i].set(i,q[i]); //i는 몇번 말에게 ,q[i]는 생성된 랜덤수를 보내서 말의 이동거리를 갱신
				p[i].show(); //말 번호 & 말 생성
				p[i].get(); //전부 도착할지를 판별하기 위해 distance값을 받아옴

				if (p[i].get() == 20)//20이 넘는 애들이 몇갠지 판별하면서 제일 먼저 도착한 애를 판별하는 조건
				{
					flag++; //flag로 모든 말이 다 도착했을 때를 판별하기 위해 flag를 세움
					t[i] = t[i]+1; //제일 먼저 20에 도달했는지를 판별하기 위해 세움
				}

			}

			p[0].make_line(); //다시 틀 생성
			timer_counter++; //time: 숫자값 증가

			if (flag == pop) //모든 말들이 20까지 도착하면 탈출할 수 있게 flag를 세움
			{
				break;
			}
		}
	}

	int max = 0;
	for (int i = 0; i < pop; i++) // 이중 제일 먼저 20에 도달한 애가 값이 가장 클 것이다 20을 초과한 순간부터 계속 +1을 해주었으니까
	{
		
		if (max < t[i]) // 제일 큰 값을 찾는다
		{
			max = t[i];
		}
	}

	if (max == t[n-1]) //말번호는 실제 배열에서는 1이아닌 0부터 시작이므로 n-1을 해주어서 t[n-1]값이 max와 같으면 1등으로 들어옴을 나타냄
	{
		cout << "축하드립니다! 당신은 승리하셨습니다." << endl;
	}
	else
		cout << "당신은 패배하셨습니다. :(" << endl;
}

HorseManager::~HorseManager() //소멸자
{
	delete[] p; //pointer 객체
	delete[] q; // random함수 변수를 위한 pointer
	delete[] t; // max를 찾기위해 만든 counter변수를 위한 pointer
	//들을 free해줌
	//cout << "제대로 소멸함" << endl; //소멸자 확인용 출력
}
