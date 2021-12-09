#include <iostream>
using namespace std;

template <class T1, class T2> // 두 개의 제네릭 타입 선언
class GClass {
	T1 data1;
	T2 data2;
public:
	GClass();
	void set(T1 a, T2 b);
	void get(T1& a, T2& b); //참조형을 사용한 이유는 return할 수 있는 값은 하나이기 때문에
};                          //return 대신에 참조형으로 return받아옴

template <class T1, class T2>
GClass<T1, T2>::GClass() {
	data1 = 0; data2 = 0;
}

template <class T1, class T2>
void GClass<T1, T2>::set(T1 a, T2 b) {
	data1 = a; data2 = b;
}

template <class T1, class T2>
void GClass<T1, T2>::get(T1& a, T2& b) {
	a = data1; b = data2;
}

int main() {
	int a;
	double b;
	GClass<int, double> x;
	x.set(2, 0.5);
	x.get(a, b);
	cout << "a=" << a << '\t' << "b=" << b << endl;

	char c;
	float d;
	GClass<char, float> y;
	y.set('m', 12.5);
	y.get(c, d);
	cout << "c=" << c << '\t' << "d=" << d << endl;
}
