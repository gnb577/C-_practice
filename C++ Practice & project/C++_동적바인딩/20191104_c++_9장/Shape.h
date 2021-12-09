#pragma once 
#include <string>
#include<iostream>
using namespace std;

class Shape {
	Shape* next;
protected:
	virtual void draw();
public:
	Shape() { next = nullptr; }
	virtual ~Shape() { }
	void paint();
	Shape* add(Shape* p);
	Shape* getNext() { return next; }
};
