#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) 
	{
		this->kick = kick; this->punch = punch;
	}
	void show();
	// + 연산자 함수 선언
	Power operator + (int op2);

};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

/*
Power Power::operator+(Power op2) {
	Power tmp; // 임시 객체 생성
	tmp.kick = this->kick + op2.kick; // kick 더하기
	tmp.punch = this->punch + op2.punch; // punch 더하기
	return tmp; // 더한 결과 리턴
}
*/

Power Power::operator+(int op2) {
	Power tmp; // 임시 객체 생성
	tmp.kick = this->kick + op2; // kick 더하기
	tmp.punch = this->punch + op2; // punch 더하기
	return tmp; // 더한 결과 리턴
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = a + 2; // 파워 객체와 정수 더하기
	a.show();
	b.show();
}


