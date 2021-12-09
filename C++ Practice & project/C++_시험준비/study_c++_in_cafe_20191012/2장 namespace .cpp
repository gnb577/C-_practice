/*

std는 iostream의 기본(define) namespace

using std::cout 이런식으로 쓰면 cout에만 std::를 생략할 수 있다는 뜻
using namespace std; 모든 이름에 std를 생략해도 된다는 뜻


cin의 특징
입력버퍼를 내장함
enter 입력까지 입력버퍼에 입력된 값(키)를 저장
backspace입력시 입력키 삭제

enter가 입력이 되야지만 입력버퍼에서 변수로 전달
입력버퍼는 queue와 같이 first in first out
단 지울때는 first in last out 마지막에 입력한걸 먼저지움
enter를 치면 입력버퍼가 지워지고 값 전달

int a = 10 == int a(10); <- 10을 복사해서 넣기보단 초기화의 개념
int b = a == int b(a); <- b에다 a를 복사

int bb(1.5); 와 int bb{1.5}; 의 차이?
초기화와 복사인가??
*/
#include<iostream>

using namespace std;

int main()
{
	int a{ 100 };
	int b(100);

	cout << a << endl;
	cout << b;

	return 0;
}

