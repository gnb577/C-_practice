#include<iostream>
#include<string>
#include<cstring>

using namespace std;


class Circle {
	int radius;
public:
	Circle() : radius(0) {
		cout << "생성자 (" << radius << ")" << endl;
	}
	Circle(int r) : radius(r) {
		cout << "생성자 (" << radius << ")" << endl;
	}
	Circle(const Circle& c) {
		radius = c.radius;
		cout << "복사생성자 (" << radius << ")" << endl;
	}
	Circle& operator=(const Circle& op2) {
		radius = op2.radius;
		cout << "복사대입연산자 (" << radius << ")" << endl;
		return *this;
	}
	Circle(const Circle&& c) {
		radius = c.radius;
		cout << "이동생성자 (" << radius << ")" << endl;
	}
	Circle& operator=(const Circle&& op2) {
		radius = op2.radius;
		cout << "이동대입연산자 (" << radius << ")" << endl;
		return *this;
	}
	~Circle() {
		cout << "소멸자 (" << radius << ")" << endl;
	}
	Circle operator+(const Circle& op2) {
		Circle tmp;
		tmp.radius = radius + op2.radius;
		return tmp;
	}
};


int main() {
	Circle a(10), b;
	cout << "================" << endl;
	Circle c = a;  // Circle c(a);
	cout << "================" << endl;
	b = a + c;
	cout << "================" << endl;
	 c=b;
	 cout << "================" << endl;
	return 0;
}

//복사