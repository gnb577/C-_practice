#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

class AbstractGate { // 추상 클래스
protected:
	bool x, y;
public:
	void set(bool x, bool y) {
		this->x = x;
		this->y = y;
	}
	virtual bool operation1() = 0; // 순수 가상 함수
};

class ANDGate : public AbstractGate {
public:
	bool operation1() {
		return x && y;
	}
};
class ORGate : public  AbstractGate {

	bool operation1() {
		return x || y;
	}

};
class XORGate : public AbstractGate {
	bool operation1() {
		if (x == y)
		{
			return 0;
		}
		else return 1;
	}
};

int main() {
	ANDGate and1;
	ORGate or1;
	XORGate xor1;

	and1.set(true, false);
	or1.set(true, false);
	xor1.set(true, false);
	AbstractGate* ap = &and1;
	cout.setf(ios::boolalpha); // 불린 값을 "true”,"false" 로 출력할 것을 지시
	cout << ap->operation1() << endl; // AND 결과는 false
	ap = &or1 ;
	cout << ap->operation1() << endl; // OR 결과는 true
	ap = &xor1;
	cout << ap->operation1() << endl; // XOR 결과는 true
}
