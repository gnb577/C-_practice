/*

이름(identifier) 충돌이 발생하는 경우
여러 명이 서로 나누어 프로젝트를 개발하는 경우
오픈 소스 혹은 다른 사람이 작성한 소스나 목적 파일을 가져와서 컴파일 하거나 링크하는 경우
namespace 키워드
이름 충돌 해결
개발자가 자신만의 이름공간을 생성할 수 있도록 함


namespace kitae { // kitae 라는 이름공간 생성
	....... // 이 곳에 선언된 모든 이름은 kitae 이름공간에 생성된 이름
}

namespace kitae {
	int f();
	void m();
}

namespace mike {
	int f();
	int g();
}

이런 함수를 충돌시키지 않고 사용하고 싶다면

#include “mike.h”

namespace kitae {
	int f() {
		return 1;
	}

	void m() {
		f();
		mike::f();
	}
}


*/

#include<iostream>
#include"kitae.h"

namespace mike2
{
	int f()
	{
		return 1;
	}
	void m()
	{
		std::cout << f();
		std::cout<< kitae::f();
	}
}

/*
std는 iostream의 sample namespace여서 using namespace로 전역변수로 사용이 가능하나
위 처럼 kitae나 mike는 공간을 따로 할당해줘야함 
*/