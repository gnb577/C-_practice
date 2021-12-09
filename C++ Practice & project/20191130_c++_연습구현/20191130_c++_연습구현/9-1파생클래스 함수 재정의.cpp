#include <iostream>
using namespace std;

class Base {
public:
	void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
	void f() { cout << "Derived::f() called" << endl; }
};

void main() {
	Derived a;
	Derived* pder = &a;
	pder->f();
	Base* pbase = pder;
	pbase->f();
	//Ȯ���ϰ� ���е�
}



class Base {
public:
	virtual void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
	virtual void f() { cout << "Derived::f() called" << endl; }
};

int main() {
	Derived d, * pDer;
	pDer = &d;
	pDer->f(); // Derived::f() ȣ��

	Base* pBase;
	pBase = pDer; // �� ĳ����
	pBase->f(); // ���� ���ε� �߻�!! Derived::f() ����
}
