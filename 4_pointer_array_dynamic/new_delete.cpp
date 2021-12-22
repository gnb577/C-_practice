#include <iostream>
using namespace std;

class Circle {
	int radius; 
public:
	Circle() {	radius = 1; }
	Circle(int r)  { radius = r; }
	void setRadius(int r)  { radius = r; } 
	double getArea(); 
}; 

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main()
{
    int *pInt = new int;
    char *pChar = new char;
    Circle *pCircle = new Circle();

    delete pInt;
    delete pChar;
    delete pCircle;
}