#include<iostream>
#include<string>
#include<cstring>

using namespace std;


class Circle {
	int radius;
public:
	Circle() : radius(0) {
		cout << "������ (" << radius << ")" << endl;
	}
	Circle(int r) : radius(r) {
		cout << "������ (" << radius << ")" << endl;
	}
	Circle(const Circle& c) {
		radius = c.radius;
		cout << "��������� (" << radius << ")" << endl;
	}
	Circle& operator=(const Circle& op2) {
		radius = op2.radius;
		cout << "������Կ����� (" << radius << ")" << endl;
		return *this;
	}
	Circle(const Circle&& c) {
		radius = c.radius;
		cout << "�̵������� (" << radius << ")" << endl;
	}
	Circle& operator=(const Circle&& op2) {
		radius = op2.radius;
		cout << "�̵����Կ����� (" << radius << ")" << endl;
		return *this;
	}
	~Circle() {
		cout << "�Ҹ��� (" << radius << ")" << endl;
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

//����