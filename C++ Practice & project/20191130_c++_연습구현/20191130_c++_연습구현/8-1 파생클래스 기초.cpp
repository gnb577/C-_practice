//**기본 생성자가 아닌 다른 생성자를 구현했을 경우 반드시 기본생성자를 구현해야만 한다
//파생클래스는 기본클래스 혹은 자신이 상속받은 class의 private 영역에는 다가갈수없다
//하지만 public처리된 함수를 통해 private영역에는 접근할 수 있다

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