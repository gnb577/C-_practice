#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Shape
{
	int shid;
	int x;
	int y;
public:
	Shape(int _shid = 0, int _x = 0, int _y = 0)
	{
		shid = _shid;
		x = _x;
		y = _y;
	}
	Shape(const Shape& ref): shid(ref.shid), x(ref.x), y(ref.y)
	{ }
	void setx(int _x)
	{
		x = _x;
	}
	void sety(int _y)
	{
		y = _y;
	}
	void setid(int _shid)
	{
		shid = _shid;
	}
	int getshid()
	{
		return shid;
	}
	virtual double getarea() = 0;
	virtual void draw() = 0;
	void move(int a, int b)
	{
		x = a;
		y = b;
	}
	void showshinfo()
	{
		cout << "����id : " << shid << endl;
		cout << "<<" << x << ", " << y << ">>" << endl;
		cout << "���� ���� :";
	}
};

class rectangle :public Shape
{
	int width;
	int height;
public:
	rectangle(int w = 0, int h = 0, int shid = 0, int x = 0, int y = 0) :Shape(shid, x, y)
	{
		width = w;
		height = h;
	}
	void setall(int w, int h, int shid, int x, int y)
	{
		width = w;
		height = h;
		setid(shid);
		setx(x);
		sety(y);
	}
	void setw(int w)
	{
		width = w;
	}
	void seth(int h)
	{
		height = h;
	}
	double getarea()
	{
		return width * height;
	}
	void draw()
	{
		cout << "���簢�� " << "�Դϴ�" << endl;
	}

};
class ellipse:public Shape
{
	int width;
	int height;
public:
	ellipse(int w = 0, int h = 0, int shid = 0, int x = 0, int y = 0) :Shape(shid, x, y)
	{
		width = w;
		height = h;
	}
	void setall(int w, int h, int shid, int x, int y)
	{
		width = w;
		height = h;
		setid(shid);
		setx(x);
		sety(y);
	}
	void setw(int w)
	{
		width = w;
	}
	void seth(int h)
	{
		height = h;
	}
	double getarea()
	{
		return width * height*3.14*(1/4);
	}
	void draw()
	{
		cout << "Ÿ�� " << "�Դϴ�" << endl;
	}

};
class triangle :public Shape
{
	int width;
	int height;
public:
	triangle(int w = 0, int h = 0, int shid = 0, int x = 0, int y = 0) :Shape(shid, x, y)
	{
		width = w;
		height = h;
	}
	void setall(int w, int h, int shid, int x, int y)
	{
		width = w;
		height = h;
		setid(shid);
		setx(x);
		sety(y);
	}
	void setw(int w)
	{
		width = w;
	}
	void seth(int h)
	{
		height = h;
	}
	double getarea()
	{
		return width * height*(1/2);
	}
	void draw()
	{
		cout << "�ﰢ�� " << "�Դϴ�" << endl;
	}

};

class shapemanager
{
	Shape* p[100];
	int shnum;
public:

};

int main()
{

}