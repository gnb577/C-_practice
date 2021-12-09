#include <iostream>
using namespace std;

class Calculator {
	void input() {
		cout << "���� 2 ���� �Է��ϼ���>> ";
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0; // �� ������ �� ����
public:
	void run() {
		input();
		cout << "���� ���� " << calc(a, b) << endl;
	}
};

class Adder:public Calculator //class�� private�� default��
{
protected:
	virtual int calc(int a, int b)
	{
		return a + b;
	}
};

class Subtractor:public Calculator //class�� private�� default��
{
protected:
	virtual int calc(int a, int b)
	{
		return a - b;
	}
};

int main() {
	Adder adder;
	Subtractor subtractor;
	Calculator* p = &adder;
	Calculator* q = &subtractor;
	adder.run();
	subtractor.run();
	p->run();
	q->run();
}
