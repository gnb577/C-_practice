#include <iostream>
#include <string>
using namespace std;

class Shape
{
	int shID;
	int x;
	int y;
public:
	int GetShID()
	{
		return shID;
	}
	virtual int GetArea()
	{
		return x * y;
	}
	virtual void Draw()
	{
		cout << "���� ���� �ϱ��? " << endl;
	}
	void Move(int a, int b)
	{
		x = a;
		y = b;
	}
	void showShInfo()
	{
		cout << "shID : " << endl;
		cout << "x : " << endl;
		cout << "y : " << endl;
	}

};

class Rectangle :public Shape
{
	int width;
	int height;
public:
	Rectangle(int x=0, int y=0)
	{
		width = x;
		height = y;
	}
	int GetArea()
	{
		return width * height;
	}
	void Draw()
	{
		cout << "�� ������ Rectangle �Դϴ�" << endl;
	}
};

class Ellipse :public Shape
{
	int width;
	int height;
public:
	Ellipse(int x, int y)
	{
		width = x;
		height = y;
	}
	int GetArea()
	{
		return width * height;
	}
	void Draw()
	{
		cout << "�� ������ Ellipse �Դϴ�" << endl;
	}
};

class Triangle :public Shape
{
	int width;
	int height;
public:
	Triangle(int x, int y)
	{
		width = x;
		height = y;
	}
	int GetArea()
	{
		return (width * height) / 2;
	}
	void Draw()
	{
		cout << "�� ������ Triangle �Դϴ�" << endl;
	}
};

class ShapeHandler
{
	Shape* p[100];
	int shNum;
	void showMenu()
	{

	}
	void MakeShape()
	{

	}
	void MoveShape()
	{

	}
	void DrawShape()
	{

	}
	void AreaShape()
	{

	}
	void ShowALLShInfo()
	{

	}
protected:
	void MakeRectangle()
	{
		p[shNum] = new Rectangle();
	}
	void MakeEllipse()
	{

	}
	void MakeTriangle()
	{

	}
public:
	void run;
};