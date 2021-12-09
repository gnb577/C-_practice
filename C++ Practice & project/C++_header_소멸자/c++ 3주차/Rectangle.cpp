#include<iostream>
using namespace std;

class Rectangle
{
//public:
	int width;
	int height;
	
public:
	int area;
	Rectangle();
	Rectangle(int height,int width);

	int getHeight();
	int getWidth();
	int getArea();
	int computeArea();
	void show();
};

Rectangle::Rectangle() :height(20), width(20)
{}

Rectangle::Rectangle(int height,int width):height(height), width(width)
{}

int Rectangle :: computeArea()
{
	
	area = width* height;
	return area;
}

int Rectangle::getHeight()
{
	return height;
}

int Rectangle::getWidth()
{
	return width;
}

int Rectangle::getArea()
{
	return area;
}

void Rectangle:: show()
{
	cout << "ÀÌ rectangleÀÇ ³ÐÀÌ´Â " << area << endl;
}

int main()
{
	Rectangle p1(15,30), p2;
	//p1.width = 15;
	//p1.height = 30;
	int area = p1.computeArea();
	p1.show();

}