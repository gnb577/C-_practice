#include"rectangle.h"

Rectangle::Rectangle(int _width, int _height) :width(_width), height(_height) {};

void Rectangle::computerArea()
{
	area = width * height;
}

int Rectangle::getWidth()
{
	return width;
}

int Rectangle::getHeight()
{
	return height;
}

int Rectangle::getArea()
{
	return area;
}

int main()
{
	Rectangle r1(20,20);
	r1.computerArea();
	cout << "이 사각형의 넓이는 "<< r1.getArea() << "입니다."<<endl;

}
