#pragma once

#include<iostream>
#include<string>
#include<cstring>
using namespace std;


class Circle
{
	int radius;
public:
	Circle(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

