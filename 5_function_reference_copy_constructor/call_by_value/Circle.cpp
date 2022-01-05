#include "Circle.h"


Circle::Circle() {
	radius = 1;
}

Circle::Circle(int radius) {
	this->radius = radius;
}

Circle::~Circle(){
	cout << "bye" << endl;
 }
