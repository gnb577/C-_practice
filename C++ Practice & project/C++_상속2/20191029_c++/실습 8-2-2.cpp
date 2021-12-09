
#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;
int num;

class Circle {
	int radius;     // ������
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

	NamedCircle() :Circle(0)
	{
		p = "default";
	}
	NamedCircle(int radius, string q) :Circle(radius)
	{
		p = q;
	}
	/*
	NamedCircle(int radius, string q) // NamedCircle(int radius,string q):Circle(radius) <-�̷��� �ص���
	{
		setRadius(radius);
		p = q;
	}
	*/
	void set(int radius, string q)
	{
		p = q;
		setRadius(radius);
	}
	string getname()
	{
		return p;
	}
	void show()
	{
		cout << getRadius() << endl;
		cout << p << endl;
	}

};


class CircleManager
{
	NamedCircle* m;
	int n;
	
public:
	CircleManager(int n)
	{
		this->n = n;
		m = new NamedCircle[this->n];
		for (int i = 0; i < n; i++)
		{
			int a; string b;
			cin >> a;
			cin.ignore();
			cin >> b;
			m[i].set(a,b);
		}
		
	}
	NamedCircle* getmanager(int i)
	{
		return &m[i];
	}
	void biggest()
	{
		int max;
		string max_name = "� ����";
		max = m[0].getArea();
		max_name = m[0].getname();
		for (int i = 1; i < num; i++)
		{
			if (m[i].getArea() > max)
			{
				max = m[i].getArea();
				max_name = m[i].getname();
			}
		}
		cout << "���� ������ ū ���ڴ� " << max_name << "�Դϴ�";
	}
	void showall()
		{
			for (int i = 0; i < num; i++)
			{
				cout << m[i].getArea() << " " <<m[i].getname() << endl;
			}
		}
	
};


int main()
{

	cin >> num;
	CircleManager c(num);
	int a;
	string b;
	/*
	for (int i = 0; i < num; i++)
	{
		cin >> a;
		cin.ignore();
		cin >> b;
		cout << endl;
		(*c.getmanager(i)).set(a, b);
		//waffle->show();
	}
	*/
	c.showall();
	c.biggest();
}

/*
5
������

6
������

7
������

8
������


9
������

*/
