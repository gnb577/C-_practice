#pragma once 
#include"Shape.h"
#include<iostream>
using namespace std;
class Line : public Shape {
protected:
	virtual void draw() {
		cout << "Line" << endl;
	}
	virtual int getShape()
	{
		return 1;
	}
};
