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
	x.a = 5; 					// ��
	x.setA(10); 				// ��
	x.showA(); 				// ��
	x.b = 10; 				// ��
	x.setB(10); 				// ��
	x.showB(); 				// �������� ������ ���� ��ģ���� b�� ���� ���־ �����Ⱚ
}


/*
Class Derived

Private:
����private int a; ->�� �θ����� showb() -> seta() or showa() -> a�� ���ٰ���
Set A
showA
Int b;

Protect:
setB

Public:
showB

*/