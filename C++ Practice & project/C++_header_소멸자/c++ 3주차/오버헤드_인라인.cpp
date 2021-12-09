#include <iostream>
using namespace std;
//인라인 함수의 장점
//프로그램 실행 시간이 빨라짐
//단 코드 크기가 증가함


//자동 인라인 함수 -> 클래스 선언부에 구현된 멤버함수

//struct 는 default가 public , class는 default 가 private

//c와 다르게 typedef를 하지 않아도 한 것과 동일한 효과를 얻을 수 잇다

//c++는 struct를 잘 사용하지 않고 class를 쓰는 데 open형 객체(즉 멤버변수 조차 public)으로  사용하고 싶을 때 사용하기도 한다
int odd(int x) {
	return (x % 2);
}

int main() {
	int sum = 0;

	// 1에서 10000까지의 홀수의 합 계산
	for (int i = 1; i <= 10000; i++) {
		if (odd(i))
			sum += i;
	}
	cout << sum;
}
