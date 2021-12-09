#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;     // ������
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle :public Circle {
	string name;
public:
	NamedCircle(int radius = 0, string name = "����") :Circle(radius)
	{
		this->name = name;
	}
	void set(int a,string b)
	{

		this->name = b;
		setRadius(a);
	}
	string getname() { return name; }
	void show()
	{
		cout << "�������� " << getRadius() << "�� " << name;
	}
};

void biggest(NamedCircle* p)
{
	int max;
	string max_name = "� ����";
	max = p[0].getArea();
	max_name = p[0].getname();
	for (int i = 1; i < 5; i++)
	{
		if (p[i].getArea() > max)
		{
			max = p[i].getArea();
			max_name = p[i].getname();
		}
	}
	cout << "���� ������ ū ���ڴ� " << max_name << "�Դϴ�";
}

int main()
{
	NamedCircle waffle[5];
	int a;
	string b;
	
	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		cin.ignore();
		getline(cin, b);
		waffle[i].set(a, b);
	}
	biggest(waffle);
}