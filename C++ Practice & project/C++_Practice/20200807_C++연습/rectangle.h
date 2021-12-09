#pragma once
#include<iostream>

using namespace std;

class Rectangle {
	int width;
	int height;
	int area;
public:
	Rectangle(int _width, int height);
	void computerArea();
	int getWidth();
	int getHeight();
	int getArea();

};