#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw() {
		cout << "--Shape--";
	}
};

class Circle : public Shape {
public:
	virtual void draw() {
		cout << "Circle" << endl;
	}
};

class Circle2 : public Circle {
public:
	 void draw() {
		 Circle::draw();
		 cout << "��";
	}
};
int main() {
	Circle circle;
	Circle2 circle2;

	Shape* pShape = &circle;
	Shape* pShape2 = &circle2; // �̷������� virtual�� �ص� �ߵ�����

	pShape->draw();
	pShape->Shape::draw();

	pShape2->draw();
	//pShape->Shape::draw(); 
}
