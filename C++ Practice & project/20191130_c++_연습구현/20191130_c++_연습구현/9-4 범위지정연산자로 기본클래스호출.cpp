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
		 cout << "휴";
	}
};
int main() {
	Circle circle;
	Circle2 circle2;

	Shape* pShape = &circle;
	Shape* pShape2 = &circle2; // 이런식으로 virtual을 해도 발동가능

	pShape->draw();
	pShape->Shape::draw();

	pShape2->draw();
	//pShape->Shape::draw(); 
}
