#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { this->radius=1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
};

int main() {
	Circle c1;
	Circle c2(2);
	Circle c3(3);

	c1.setRadius(4); 
	c2.setRadius(5);
	c3.setRadius(6);
}

/*

class Sample {
public:
	Sample f() {
		return *this;
	}
};

이 때의 this or *this는 무엇을 리턴할까?
--> 바로 객체 자신의 주소를 return
--> Circle c1으로 생성했다 치면
--> this는 class내의 함수?가 아니고 그 c1이 곧 this다.
*/
