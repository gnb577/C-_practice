#include<iostream>
using namespace std;

/* 
int a = 10;
int *ao = &a;


Circle donut;
double d = donut.getArea();

==

Circle *p;
p = &donut;
d = p->getArea();


주의!
p->getArea() 대신 *p.getArea()로 사용시 *p에 괄호를 꼭 쳐줘야지 연산의 오류가 안생김 (*p).getArea();

배열을 만드는 법은 같음
Circle c[3];






*/

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}


int main() {
	Circle circleArray[3]; 										// (1) Circle 객체 배열 생성

	// 배열의 각 원소 객체의 멤버 접근
	circleArray[0].setRadius(10); 							// (2)
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) // 배열의 각 원소 객체의 멤버 접근
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;

	Circle* p; 															// (3)
	p = circleArray; 												// (4)
	for (int i = 0; i < 3; i++) { 	// 객체 포인터로 배열 접근
		cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
		p++; 	//p++를 통해 array[i]에서 i++같은 효과를 나타낸다														// (5)
	}
}
