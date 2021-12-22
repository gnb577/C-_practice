#include <iostream> 
using namespace std; 

class Circle {
public:
	int radius; 
	Circle(); 
	Circle(int r); 
	~Circle(); 
	double getArea(); 
}; 

Circle::Circle() {
	radius = 1;
	cout << "radius is " << radius << " circle create" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "radius is " << radius << " circle create" << endl;
}

Circle::~Circle() {
	cout << "radius is " << radius << " circle destroy" << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f() {
	Circle fDonut(100);
	Circle fPizza(200);
}

int main() {
	Circle mainDonut;
	Circle mainPizza(30);
	f();

    //상상한 순서로 만들어지고
    //생성의 역순으로 소멸한다.
}