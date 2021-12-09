#pragma once
#include <iostream>
#include <string>
using namespace std;
class Circle {
	string name;
	int radius;
public:
	Circle(int radius = 1, string name = "") {
		this->radius = radius; this->name = name;
	}
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
	friend ostream& operator << (ostream& outs, const Circle& c);  // <<를 프렌드 선언
	friend istream& operator >> (istream& ins, Circle& c);   // >>를 프렌드 선언
};
