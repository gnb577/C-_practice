#include <iostream>
#include <string>
using namespace std;

// 2차원 평면에서 한 점을 표현하는 클래스 Point 선언
class Point {
	int x, y; //한 점 (x,y) 좌표값
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};
class ColorPoint : public Point { // 2차원 평면에서 컬러 점을 표현하는 클래스 ColorPoint. Point를 상속받음
	string color;// 점의 색 표현
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point의 showPoint() 호출
}
//업캐스팅 : 긴 코드에서 짧은 코드로 치환함
// (자식 *)a
// (부모 *)b = &a
// 자식이 부모의 부분으로 접근


//다운 캐스팅
//부모가 자식의 영역까지 확인하고 싶을 때 사용한다
// (자식) a
// (부모 *) b = &a(a는 값이므로 &해주어야함)
// (자식 *) c = b(이미 포인터니까)
//upcasting과 다르게 조건이 붙는데 애초에 point pbase도 colorpoint cp에 기반을 두어야한다
//왜냐면 다운캐스팅을 해야하는 데 부모에게는 없는 자식만의 고유한 무언가가 있다면?
//그걸 해결할 수 있는 방법이 없으니까

/*
[ check time ]
TV *p, tv;
ColorTV* q, ctv;
① p = &tv;     ② p = &ctv;     ③ q = (ColorTV*)& tv;     ④ q = &ctv;
				(upcasting)        (downcasintg)
*/

int main() {
	ColorPoint cp; // 파생 클래스의 객체 생성
	Point* pupcase = &cp; //업캐스팅
	ColorPoint* pdowncase = (ColorPoint *)pupcase;//다운 캐스팅
	cp.set(3, 4); // 기본 클래스의 멤버 호출
	cp.setColor("Red"); // 파생 클래스의 멤버 호출
	cp.showColorPoint(); // 파생 클래스의 멤버 호출
	pupcase->showPoint();
	pdowncase->showColorPoint();
}

