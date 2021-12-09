#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() {
		cout << "Base::f() called" << endl;
	}
};

class Derived : public Base {
public:
	virtual void f() {
		cout << "Derived::f() called" << endl;
	}
};


void main() {
	Derived d, * pDer;
	pDer = &d;
	pDer->f(); // Derived::f() 호출
	/*
	Compile time->정적 바인딩(binding)
		컴파일 전에 미리 알 수 있는 것
		(pDer->f()가 derived::f()임을 알 수 있다)
 */
		Base* pBase;
	pBase = pDer; // 업캐스팅
	pBase->f(); // Base::f() 호출
}

