#include <iostream>
#include <string>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point();
	Point(int a, int b);
	void print();
};

Point::Point() :x(0), y(0) {}
Point::Point(int a, int b) : x(a), y(b) {}
void Point::print()
{
	cout <<"( "<< x << ", " << y <<")";
}

class Circle
{
	int radius;
	Point center;
public:
	Circle();
	Circle(int r);
	Circle(Point p, int r);
	Circle(int x, int y, int r);
	void print();
	
};

Circle::Circle() :radius(0), center(0, 0) {};
Circle::Circle(int r) :radius(r), center(0, 0) {};
Circle::Circle(Point p,int r) :radius(r), center(p) {};
Circle::Circle(int x,int y, int r) :radius(r), center(x,y) {};
void Circle::print()
{
	cout << "반지름이 " << radius << "이고 중앙이";
	center.print();
	cout << "인 원" << endl;
}

int main()
{
	Point p(5, 3);

	Circle c1;
	Circle c2(3);
	Circle c3(p, 4);
	Circle c4(9, 7, 5);

	c1.print();
	c2.print();
	c3.print();
	c4.print();
	return 0;
}
