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
	pDer->f(); // Derived::f() ȣ��
	/*
	Compile time->���� ���ε�(binding)
		������ ���� �̸� �� �� �ִ� ��
		(pDer->f()�� derived::f()���� �� �� �ִ�)
 */
		Base* pBase;
	pBase = pDer; // ��ĳ����
	pBase->f(); // Base::f() ȣ��
}

