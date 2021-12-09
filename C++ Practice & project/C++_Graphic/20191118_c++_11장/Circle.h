#pragma once 
#include"Shape.h"
#include<iostream>
using namespace std;
class Circle : public Shape {
protected:
	virtual void draw() {
		cout << "Circle" << endl;
	}
	virtual int getShape()
	{
		return 2;
	}
public:

};
