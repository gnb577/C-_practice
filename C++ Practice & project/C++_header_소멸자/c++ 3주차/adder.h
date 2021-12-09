
#ifndef ADDER_H //if not define 정의가 되있지 않은 경우에만 실행하라
#define ADDER_H
class Adder { // 덧셈 모듈 클래스
	int op1, op2;
public:
	Adder(int a, int b);
	int process();
};





#endif