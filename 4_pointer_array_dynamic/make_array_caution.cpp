#include <iostream>
using namespace std;

class Circle {
	int radius; 
public:
	double getArea()  {
		return 3.14*radius*radius;
	}
}; 

int main() {
	//Circle circleArray[3]; 
} //가능, 자동으로 기본생성자가 생성되니까


#include <iostream>
using namespace std;

class Circle {
	int radius; 
public:
	Circle(int r)  { radius = r; }
	double getArea()  {
		return 3.14*radius*radius;
	}
}; 

int main() {
	Circle waffle(15);
	//Circle circleArray[3]; //배열은 기본생성자로 구현하는데,
    //기본 생성자가 없으니 똥망
}//불가능

//Circle circleArray[3] = { Circle(10), Circle(20), Circle() }; 
//객체 배열을 초기화 하고 싶다면 이렇게