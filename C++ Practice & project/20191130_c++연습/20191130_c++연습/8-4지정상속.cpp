#include <iostream>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};
/*
class Derived : protected Base {
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() { cout << b; }
};
*/

/*
class Derived : private Base {
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() { cout << b; }
};
*/

int main() {
	Derived x;
	x.a = 5; 					// ①
	x.setA(10); 				// ②
	x.showA(); 				// ③
	x.b = 10; 				// ④
	x.setB(10); 				// ⑤
	x.showB(); 				// 나머지는 컴파일 에러 이친구는 b에 값을 못넣어서 쓰레기값
}


/*
Class Derived

Private:
이중private int a; ->를 부르려면 showb() -> seta() or showa() -> a를 접근가능
Set A
showA
Int b;

Protect:
setB

Public:
showB

*/