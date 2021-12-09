#include <iostream>
#include <string>
using namespace std;
//단 호출은 자식부터 일어나기 때문에 c를 호출하더라도 3x5x2가 출력되지
// 상식적으로 실행순서라 생각하면 a에 의해 x가 3-> 8로 바뀐다
//그러나 8x5x2가 되서 80이 되지는 않음
// 있는 그대로 3,5,2가 되서 30이 나옴 
class A {
	int x;
public:
	A() { x = 0; }
	A(int x) { this->x = x; }
	void showx()
	{
		cout << x << endl;
	}
};
class B : public A {
	int y;
public:
	B(int x, int y) : A(x + 5) { this->y = y; }
	void showy()
	{
		cout << y << endl;
		showx();
	}
};
class C : public B {
	int m;
public:
	C(int x, int y, int z) : B(x, y) { m = x * y * z; }
	void showm()
	{
		cout << m << endl;
		showy();
		showx();

	}
};

int main()
{
	C c(3, 5, 2);
	c.showm();
	B b(3, 4);
	b.showy();

}