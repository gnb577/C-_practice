#include <iostream>
#include "Shape.h"
using namespace std;

void Shape::paint() {
	draw();
}
int Shape::get_shape() 
{
	return getShape();
}
/*
void Shape::draw() {
	cout << "--Shape--" << endl;
}
*/
Shape* Shape::add(Shape* p) {
	this->next = p;
	return p;
}
