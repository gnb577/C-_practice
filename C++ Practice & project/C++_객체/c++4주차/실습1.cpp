#include <iostream>
using namespace std;


class Point {
private:
	double x=0.0;
	double y=0.0;
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



int main()
{
	Point p[5] = { Point(10,10),Point(20,20),Point(30,30),Point(40,40),Point() };
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
	for (int i = 0; i < 5; i++)
		p[i].showPoint();
	/*  for (auto &a : p)  // ���� point &a�̷��� ��ߵǴ� �� c++������� auto�� ���ָ� �˾Ƽ� ������
	                       //���� &a�� �ƴϰ� a�̸� p�� ���� ������ �� �̸��� a�ΰŰ� &a�� ���� p�� ���� �̿��ϱ� ���� a��� �̸��� ����ϴ� ����
							//���� a : p�� ����  a���� �ٲ۴� �ѵ� p�� ���� ������ ���� ���Ѵ�
			{ cout << "x(double) : ";
		cin >> xx;
		cout << "y(double) : ";
		cin >> yy;
		a.setX(xx);
		a.setY(yy);      }
		 for (auto a : p)
			 a.showPoint();  */
	return 0;
}

/*
���� ��ħ8�ÿ� �б��Դٰ� ���� �б��� 14�ð��ִ°� ���̵ǳ� ���������ֶ�
�������� ���� 8�ÿ� �б��ͼ� 22�ÿ� �����°� ���̵ǳ� 
�����ּ��� ���߿�
*/
