#include "Circle.h"
using namespace std;

void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r+1);
}


int main() {
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;
    return 0;
}

/*
	이 경우 call by value이기 때문에 
	waffle(30)객체가 함수로  들어가서 31이 되고
	소멸해버리기에 생성은 없고 소멸만 존재
*/