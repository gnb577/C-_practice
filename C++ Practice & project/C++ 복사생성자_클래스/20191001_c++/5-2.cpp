#include<iostream>
using namespace std;


class Accumulator {
	int value;
public:
	Accumulator(int value);
	Accumulator& add(int n);
	int sum(int n);
	int get();
};

Accumulator::Accumulator(int value)
{
	this->value = value;
}

Accumulator&Accumulator:: add(int n)
{
	value = value + n;
	return *this;
}

int Accumulator::sum(int n)
{
	value = value + n;
	return value;
}

int Accumulator::get()
{
	return value;
}

int main() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7);
	//   acc�� value ����� 28�� �ȴ�.
	cout << acc.get() << endl;   // 28 ���
}
