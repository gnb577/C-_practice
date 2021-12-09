#include <iostream>
#include <string>
using namespace std;
//�� ȣ���� �ڽĺ��� �Ͼ�� ������ c�� ȣ���ϴ��� 3x5x2�� ��µ���
// ��������� ��������� �����ϸ� a�� ���� x�� 3-> 8�� �ٲ��
//�׷��� 8x5x2�� �Ǽ� 80�� ������ ����
// �ִ� �״�� 3,5,2�� �Ǽ� 30�� ���� 
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