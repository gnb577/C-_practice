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

	NamedCircle() :Circle(0)
	{
		p = "default";
	}
	NamedCircle(int radius, string q) :Circle(radius)
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

void biggest(NamedCircle* p)
{
		int max;
		string max_name = "어떤 피자";
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
		cout << "가장 면적이 큰 피자는 " << max_name << "입니다";
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
		cin >> b;
		cout << endl;
		waffle[i].set(a, b);
		//waffle->show();
	}
	biggest(waffle);
}

/*
5
가피자

6
나피자

7
다피자

8
라피자

9
아피자

*/