#include <iostream>
using namespace std;

class Shape {
public:
	void paint() {
		draw();
	}
	virtual void draw() {
		cout << "Shape::draw() called" << endl;
	}
};

int main() {
	Shape* pShape = new Shape();
	pShape->paint();
	delete pShape;
}


#include <iostream>
using namespace std;

class Shape {
public:
	void paint() {
		draw();
	}
	virtual void draw() { //이경우 파생클래스에 의해 shape draw는 무시됨
		cout << "Shape::draw() called" << endl;
	}
};

class Circle : public Shape {
public:
	virtual void draw() {
		cout << "Circle::draw() called" << endl;
	}
};

int main() {
	Shape* pShape = new Circle(); // 업캐스팅
	pShape->paint();
	delete pShape;
}
