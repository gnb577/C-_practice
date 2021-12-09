#include<iostream>
using namespace std;

class Circle {

	int radius;
public:
	Circle();
	Circle(int r);
	int getRadius();
	void setRadius(int r);
	void increaseBy(Circle a, Circle b);
	void show();
};

Circle::Circle(int r)
{
	int radius = r;
	//return radius;
}
void Circle::setRadius(int r)
{
	radius = r;
}

int Circle:: getRadius()
{
	return radius;
}
void increaseBy(Circle a, Circle b)
{
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}

void Circle::show()
{
	cout <<" 반지름은" << radius << "입니다."<< endl;
}
int main()
{
	Circle x(10), y(5);
	increaseBy(x, y);
	x.show();
	return 0;
}