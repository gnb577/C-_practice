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
	cout << m << ‘ ‘ << n;
}

M=2 N=9 그대로


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
	cout << m << ‘ ‘ << n;
}

M= 9 N = 2 주소안의 값을 바꿧으므로
바뀜

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
	cout << m << ‘ ‘ << n;
}

M= 9 N = 2 함수에서 부른 값이 메인에서도 적용되서

값에 의한 호출시에는 생성자가 따로 생성되지 않음 -> 복사생성자가 호출됨 대신에
소멸자는 생김

주소에 의한 호출시에는 생성자 소멸자가 생기지 않음
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

Circle::Circle() : Circle(1) { } // 위임 생성자

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 (" << radius << ")" << endl;
}
Circle::Circle(Circle& c1)
{
	radius = c1.radius;
	cout << "복사생성자 (" << radius << ")" << endl;
}

int main()
{
	Circle a(20);
	Circle& ret = a;
	Circle b = a;
}

