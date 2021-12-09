#include<iostream>
using namespace std;

class Point
{
//public:
	double x;
	double y;
public:
	Point();
	Point(double xx, double yy);
	
	double getX();
	double getY();
	void setX(double a);
	void setY(double b);
	void showPoint();
};

Point::Point() : x(0), y(0)
{}

Point::Point(double xx, double yy) : x(xx), y(yy)
{}

double Point::getX()
{
	return x;
}

double Point:: getY()
{
	return y;
}

void Point::setX(double a)
{
	x = a;
}

void Point::setY(double b)
{
	y = b;
}

void Point::showPoint()
{
	cout << "이 점의 좌표는 " << x << ", " << y << "입니다" << endl;
}

int main()
{
	Point t1(4,5), t2;
	
	//t1.setX(4);
	//t1.setY(5);

	double k = t1.getX();
	cout << k << endl;

	t1.showPoint();

}