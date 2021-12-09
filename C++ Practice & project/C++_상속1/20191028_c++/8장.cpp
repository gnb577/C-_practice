#include <iostream>
#include <string>
using namespace std;

class A {
	int x;
public:
	A() { x = 0; }
	A(int x) { this->x = x; }
};
class B : public A {
	int y;
public:
	B();
	B(int x, int y) : A(x + 5) { this->y = y; }
	int gety()
	{
		return y;
	}
};
class C : public B {
	int m;
public:
	C();
	C(int x, int y, int z) : B(x, y) { m = x * y * z; }
	int getm()
	{
		return m;
	}
};

int main()
{
	C c1(3,5,2);
	cout << c1.getm() << endl;
	B b(3, 4);
	cout << b.gety() << endl;
	return 0;
}