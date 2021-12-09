#include<iostream>
using namespace std;


// Circle::Circle() [전] :Circle(1) [후] {}; 전에 있는 거가 호출되면 뒤에 있는 함수에게 위임해서 실행하도록 한다는 뜻 뒤에{}붙여야 함수이므로 붙여야 됨
//생성자 -> 객체가 생성되는 시점에서 자동으로 호출되는 멤버함수
//클래스 이름과 동일함

//x = 0 은 int x;생성 후 x = 0;이고  x(0)은 x = 0;이랜다

//생성자를 생성하지 않아도 기본적으로 생성자(기본)을 호출해준다
//기본 생성자가 아무것도 안할 지언정 일단 생성한다
//단 생성자가 하나 이상 선언된 경우에는 기본 생성자는 자동 생성되지 않는다
//따라서 circle(int r)을 만들고 나서 main함수에 circle.donut을 만들면 오류가 난다



class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x << ", " << y << ")" << endl; }
};

Point::Point() : x(0),y(0) { } // 위임 생성자
Point::Point(int a, int b) // 타겟 생성자
	: x(a), y(b) { }

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}
