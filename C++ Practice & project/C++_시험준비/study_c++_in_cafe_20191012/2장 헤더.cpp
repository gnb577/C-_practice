/*


질문1) <cstring>파일에 strcpy() 함수의 코드가 들어 있을까?
 (1) strcpy() 함수의 코드가 들어 있다(O, X).
답은 X
 (2) strcpy() 함수의 원형이 선언되어 있다(O, X).
답은 O

질문 2) 그러면 strcpy() 함수의 코드는 어디에 있는가?
답) strcpy() 함수의 코드는 컴파일된 바이너리 코드로, 비주얼 스튜디오가 설치된 lib 폴더에 libcmt.lib 파일에 들어 있고,  링크 시에 strcpy() 함수의 코드가 exe에 들어간다.

질문 2) 그러면 헤더 파일은 왜 사용되는가?
답) 사용자 프로그램에서 strcpy() 함수를 호출하는 구문이 정확한지 확인하기 위해 컴파일러에 의해 필요

cout이나 cin은 모두 <iostream>에 선언된 객체



*/



/*
check time

표준 C++에서 main()함수의 리턴 타입은 ? int
예제 소스에서 #include <iostream>을 제거하면 어느 부분에서 컴파일 오류가 발생하는가 ? cout
cout은 무엇인가 ?
(키워드, 연산자, 객체, 화면출력 전처리 명령)
<< 란 무엇인가 ?
(키워드, 연산자, 객체, 화면출력 전처리 명령)
새로운 이름공간을 선언할 때 사용하는 키워드는 ?
(namespace, std, using, include)
std 이름공간의 모든 이름에 std::를 생략하도록 지시하는 지시문은 ?


*/

using namespace std;

int main()
{
	int a(1);
	int b = 10;
	cout << a << endl;
	cout << b;
}