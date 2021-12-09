#pragma warning (disable:4996)
#pragma once
#include<iostream>
#include<string>
#include<cstring>

using namespace std;



class Circle {
	int radius;   // ������
	char* color = new char[4];   // ���� ����
	static int cnt;
public:
	Circle();
	Circle(const int r);
	Circle(const char* color);
	Circle(const int, const char* color);
	Circle(Circle& op2);
	~Circle(); 
	Circle(Circle&& c1);
	double getArea();
	double getPerimeter();
	void print();
	Circle operator+(const Circle &op2);
	Circle& operator =(Circle& op2);
	Circle& operator =(Circle&& op2);

};

int Circle::cnt = 0;

Circle::Circle() :Circle(0) {};

Circle::Circle(const int r) 
{
	radius = r;
	strcpy(color, "red");
	cnt++;
	cout << "������(" << radius<<","<< color << ")" <<endl;
};

Circle::Circle(const char *color)
{
	radius = 1;
	this->color = new char[strlen(color) + 1];
	strcpy(this->color, color);
	cnt++;
	cout << "������(" << radius << "," << color << ")" << endl;
};

Circle::Circle(const int r, const char* color)
{
	radius = r;
	this->color = new char[strlen(color) + 1];
	strcpy(this->color, color);
	cnt++;
	cout << "������(" << radius << "," << color << ")" << endl;
};

Circle::~Circle()
{
	cnt--;
	cout << "�Ҹ���(" << radius << ")" << endl;
	delete[] color;

};


Circle::Circle(Circle& op2)
{
	radius = op2.radius;
	this->color = new char[strlen(op2.color) + 1];
	strcpy(this->color, op2.color);
	cnt++;
	cout << "���� ������(" << radius << "," << color << ")" << endl;
}

Circle::Circle(Circle&& c1)
{
	radius = c1.radius;
	color = c1.color;
	c1.color = nullptr;
	cout << "�̵� ������(" << radius << "," << color << ")" << endl;
}


Circle Circle::operator+(const Circle &op2) 
{
	Circle tmp;
	tmp.radius = radius + op2.radius;
	return tmp; 
}



Circle& Circle::operator =(Circle& op2)
{
	if (this == &op2)
		return *this;
	if (color)
		delete[] color;

	this->radius = op2.radius;
	this->color = new char[strlen(op2.color) + 1];
	strcpy(this->color, op2.color);
	cout << "���� ���Կ�����(" << radius << "," << color << ")" << endl;
	return *this;
}


Circle& Circle::operator=(Circle&& op2)
{ 
	if (this == &op2)
		return *this;
	if (color)
		delete[] color;
	radius = op2.radius;
	color = op2.color;
	op2.color = nullptr;
	cout << "�̵� ���Կ�����(" << radius << "," << color << ")" << endl;
	return *this; 
}


double Circle::getArea()
{
	return 3.14 * radius * radius;
}

double Circle::getPerimeter()
{
	return 2 *3.14*radius ;
}

void Circle::print()
{

	cout << "�������� " << radius << endl;
	cout << "���� ���� " << color << endl;
	cout << "���� ������ " << cnt << endl;
	cout << "���� ���̴� " << this->getArea() << endl;
	cout << "�������� " << this->getPerimeter() << endl;

}

bool is_equal(Circle& c1, Circle& c2)
{
	if (c1.getArea() == c2.getArea())
	{
		return true;
	}
	else
		return false;
}




int main()
{
	Circle c1(10), c2,c3(4,"blue");
	//cout << "----------------------------" << endl;
//	Circle c4 = c2;
//	cout << "----------------------------" << endl;
	c3 = c1 + c2;
	cout << "----------------------------" << endl;
//	c1 = c2;
	//cout << "----------------------------" << endl;
//c1.getArea();
	//cout << "----------------------------" << endl;
//	c1.getPerimeter();
//	cout << "----------------------------" << endl;


//	c1.print();
	//cout << "----------------------------" << endl;

//	is_equal(c1, c2);
//	cout << "----------------------------" << endl;
	
	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;
	cout << "----------------------------" << endl;
	return 0;
}
