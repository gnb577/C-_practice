#ifndef CIRCLE_H //if not define 정의가 되있지 않은 경우에만 실행하라
					//조건 컴파일 문의 상수는 충돌을 피하기 위해 클래스 이름으로 하여라
                //ifndef로 정의를 하면 정의가 되면 해당 헤더 파일은 실행하지 않고 스킵하겠다는 뜻
#define CIRCLE_H

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	double getArea();
};

#endif