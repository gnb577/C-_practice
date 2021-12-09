#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;     // 반지름
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle :public Circle {
	string name;
public:
	NamedCircle(int radius = 0, string name = "피자") :Circle(radius)
	{
		this->name = name;
	}
	void set(int a, string b)
	{

		this->name = b;
		setRadius(a);
	}
	string getname() { return name; }
	void show()
	{
		cout << "반지름이 " << getRadius() << "인 " << name<<endl;
	}
};

class CircleManager
{
	NamedCircle* q;
public:
	CircleManager(int size = 1)
	{
		q = new NamedCircle[size];
		for (int i = 0; i < size; i++)
		{
			int a;
			string b;
			cin >> a;
			cin.ignore();
			getline(cin, b);
			q[i].set(a, b);
		}
	}
	NamedCircle* getpizza(int _n)
	{
		return &q[_n];
	}
	NamedCircle getpizza2(int _n)
	{
		return q[_n];
	}
	void biggest()
	{
		int max;
		string max_name = "어떤 피자";
		max = q[0].getArea();
		max_name = q[0].getname();
		for (int i = 1; i < 5; i++)
		{
			if (q[i].getArea() > max)
			{
				max = q[i].getArea();
				max_name = q[i].getname();
			}
		}
		cout << "가장 면적이 큰 피자는 " << max_name << "입니다";
	}
	
};

int main()
{
	int num;
	cin >> num;
	cin.ignore();
	CircleManager c(num);
	NamedCircle *k = c.getpizza(2);
	NamedCircle l = c.getpizza2(3);
	k->show();
	l.show();
}