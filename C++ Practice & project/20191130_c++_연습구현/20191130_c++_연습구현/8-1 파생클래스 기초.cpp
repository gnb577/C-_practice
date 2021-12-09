//**�⺻ �����ڰ� �ƴ� �ٸ� �����ڸ� �������� ��� �ݵ�� �⺻�����ڸ� �����ؾ߸� �Ѵ�
//�Ļ�Ŭ������ �⺻Ŭ���� Ȥ�� �ڽ��� ��ӹ��� class�� private �������� �ٰ���������
//������ publicó���� �Լ��� ���� private�������� ������ �� �ִ�

#include <iostream>
#include <string>
using namespace std;

class Point
{
	int x, y;
public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
	void set(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class colorpoint : public Point
{
	string color;
public:
	colorpoint()
	{
		color = "blue";
	};
	colorpoint(string _color)
	{
		color = _color;
	}
	void setcolor(string color)
	{
		this->color = color;
	}
	void showcolorpoint();
};

void colorpoint::showcolorpoint()
{
	cout << color << " : ";
	showPoint();
}

int main()
{
	Point a;
	colorpoint b;
	b.setcolor("red");
	b.set(1, 3);
	b.showcolorpoint();
}