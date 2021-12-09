#pragma once 
#include"Shape.h"
#include<iostream>
using namespace std;
class Rect : public Shape {
protected:
	virtual void draw() {
		cout << "Rectangle" << endl;
	}
	virtual int getShape()
	{
		return 3;
	}
};
