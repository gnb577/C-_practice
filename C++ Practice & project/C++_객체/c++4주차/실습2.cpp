#include <iostream>
using namespace std;


class Point {
private:
	double x = 0.0;
	double y = 0.0;
public:
	Point();
	Point(double, double);
	void setX(double xx);
	void setY(double yy);
	void showPoint();
};
Point::Point()
	: x(0), y(0) {}
Point::Point(double xx, double yy)
	: x(xx), y(yy) {}
void Point::setX(double xx)
{
	x = xx;
}
void Point::setY(double yy)
{
	y = yy;
}
void Point::showPoint()
{
	cout << "( " << x << ", " << y << " )" << endl;
}

class Pointmanager {
	Point* p;
	int size;
public:
	Pointmanager();
	Pointmanager(int n);
	~Pointmanager();

	void input();
	void show();
};

Pointmanager::Pointmanager()
{
	p = new Point[10];
	size = 10;
}

Pointmanager::Pointmanager(int n)
{
	p = new Point[n];
	size = n;
}

Pointmanager::~Pointmanager()
{
	delete[] p;
}

void Pointmanager::input()
{
	
	//Pointmanager(size);
}


int main()
{
	int n(0);
	Point p;
	/*
	double xx, yy;
	for (int i = 0; i < 5; i++)
	{
		cout << "x(double) : ";
		cin >> xx;
		cout << "y(double) : ";
		cin >> yy;
		p[i].setX(xx);
		p[i].setY(yy);
	}
	*/
	cout << "객체 배열의 원소 수를 입력해 주세요 ";
	cin >> n;
	
	Pointmanager p(n);
	p.input();
	p.show();

	return 0;
}

/*
오늘 아침8시에 학교왔다고 슈바 학교에 14시간있는게 말이되냐 집좀보내주라
집보내줘 슈바 8시에 학교와서 22시에 집가는게 말이되냐
보내주세여 제발여
*/
