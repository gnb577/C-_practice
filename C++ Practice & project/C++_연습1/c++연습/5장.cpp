/*

#include <iostream>
using namespace std;

void swap(int a, int b) {
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int m=2, n=9;
	swap(m, n);
	cout << m << �� �� << n;
}

M=2 N=9 �״��


#include <iostream>
using namespace std;

void swap(int *a, int *b) {
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int m=2, n=9;
	swap(&m, &n);
	cout << m << �� �� << n;
}

M= 9 N = 2 �ּҾ��� ���� �مf���Ƿ�
�ٲ�

#include <iostream>
using namespace std;

void swap(int &a, int &b) {
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int m=2, n=9;
	swap(m, n);
	cout << m << �� �� << n;
}

M= 9 N = 2 �Լ����� �θ� ���� ���ο����� ����Ǽ�

���� ���� ȣ��ÿ��� �����ڰ� ���� �������� ���� -> ��������ڰ� ȣ��� ��ſ�
�Ҹ��ڴ� ����

�ּҿ� ���� ȣ��ÿ��� ������ �Ҹ��ڰ� ������ ����
*/

/**/

#include<string>
#include <iostream>
#include<cstring>
using namespace std;


class Circle
{
	int radius;
public:

	Circle();
	Circle(int r);
	Circle(Circle& c1);
};

Circle::Circle() : Circle(1) { } // ���� ������

Circle::Circle(int r) {
	radius = r;
	cout << "������ (" << radius << ")" << endl;
}
Circle::Circle(Circle& c1)
{
	radius = c1.radius;
	cout << "��������� (" << radius << ")" << endl;
}

int main()
{
	Circle a(20);
	Circle& ret = a;
	Circle b = a;
}

