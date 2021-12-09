#include<iostream>
using namespace std;

class Rectangle
{
public:
	int width;
	int height;
	Rectangle();
	Rectangle(int a,int b);
	Rectangle(int c);
	bool isSquare(); 
};

Rectangle::Rectangle()
{
	width = 1;
	height = 1;
}

Rectangle::Rectangle(int a, int b)
{
	width = a;
	height = b;
}


Rectangle::Rectangle(int c)
{
	width = c;
	height = c;
}

bool Rectangle::isSquare()
{
	if (width == height)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/*
생성자로 초기화 하기

Rectangle::Rectangle() :width(1),height(1)
{
}

Rectangle::Rectangle(int a, int b) :width(a),height(b)
{
}

Rectangle::Rectangle(int l) :width(l),height(l)
{
}
*/

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
}
