#include<iostream>
#include<cstring>

using namespace std;

class AbstractGate { // �߻� Ŭ����
protected:
	bool x, y;
public:
	void set(bool x, bool y) {
		this->x = x;
		this->y = y;
	}
	virtual bool operation() = 0; // ���� ���� �Լ�
};

class ANDGate : public AbstractGate {
public:
	virtual bool operation() {
		return x && y;
	}
};
class ORGate : public  AbstractGate {

	virtual bool operation() {
		return x || y;
	}

};
class XORGate : public AbstractGate {

	virtual bool operation() {
		if (x == y)
		{
			return 0;
		}
		else
		{
			return 1;
		}
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
	cout.setf(ios::boolalpha); // �Ҹ� ���� "true��,"false" �� ����� ���� ����
	cout << ap->operation() << endl; // AND ����� false
	ap = &or1;
	cout << ap->operation() << endl; // OR ����� true
	ap = &xor1;
	cout << ap->operation() << endl; // XOR ����� true
}
