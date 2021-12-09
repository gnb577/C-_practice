
//소멸자는 *1번*만 호출, 객체(함수,프로그램)이 소멸하는 시점에 호출됨
//Circle::~Circle() { ... }이 소멸자
//소멸자를 생성하지 않았을 경우 기본 소멸자 생성
//소멸은 함수 or 프로그램이 끝난 경우 그 함수 or 프로그램에서 호출된 것에 역순으로 소멸됨


//private은 private가 속해있는 class(or 함수)내에서만 효력을 발휘함(지역변수)
//다른 객체, 외부함수에서 접촉 불가
//public은 전역변수와 같음
//protected는 protect가 부모라고 하면 자식이 되는 관계가 되는 함수가 protect의 변수를 참조 할 수 있다
//따라서, 통상 멤버변수는 외부에서 참조하면 안되기 때문에 private로
//생성자, 멤버함수는 public을 사용한다
//protect는 외부에서 참조할 수 는 없지만 class내부에서 다루는 함수에서는 참조가 가능하다
//예를들어 protect  int x,y가 있는 데 main에서 class something.x = 접근이 불가하나
//class 내부에 있는 함수 set(int _x, int _y)의 x = _x, y = _y가 있다면 something.set(2,3)에는 접근할수 있다는 소리다


#include <iostream> 
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::~Circle() {
	cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f() {
	Circle fDonut(100);
	Circle fPizza(200);
}

int main() {
	Circle mainDonut;
	Circle mainPizza(30);
	f();
}
