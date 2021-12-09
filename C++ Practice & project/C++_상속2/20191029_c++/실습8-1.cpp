#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

class Circle {
	int radius;     // 반지름
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle
{
	string p;
public:
	NamedCircle(int radius,string q):Circle(radius)
	{
		p = q;
	}
	/*
	NamedCircle(int radius, string q) // NamedCircle(int radius,string q):Circle(radius) <-이렇게 해도됨
	{
		setRadius(radius);
		p = q;
	}
	*/
	void show()
	{
		cout << getRadius() << endl;
		cout << p << endl;
	}
};

int main()
{
	NamedCircle waffle(3, "waffle");
	waffle.show();

}

/*

*/