#include<iostream>
using namespace std;

class Point
{
public:
	double x;
	double y;

	Point();
	Point(double xx, double yy);
	void show();
};

Point :: Point(): x(0),y(0)
{}

Point ::Point(double xx,double yy):x(xx),y(yy)
{}

void Point::show()
{
	cout << "이 점의 좌표는 " << x << ", " << y << "입니다" << endl;
}
int main()
{
	Point t1, t2;
	t1.x = 9;
	t1.y = 2;
	t1.show();

}