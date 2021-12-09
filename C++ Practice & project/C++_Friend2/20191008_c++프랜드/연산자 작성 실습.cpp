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
	// + ������ �Լ� ����
	Power operator + (int op2);

};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

/*
Power Power::operator+(Power op2) {
	Power tmp; // �ӽ� ��ü ����
	tmp.kick = this->kick + op2.kick; // kick ���ϱ�
	tmp.punch = this->punch + op2.punch; // punch ���ϱ�
	return tmp; // ���� ��� ����
}
*/

Power Power::operator+(int op2) {
	Power tmp; // �ӽ� ��ü ����
	tmp.kick = this->kick + op2; // kick ���ϱ�
	tmp.punch = this->punch + op2; // punch ���ϱ�
	return tmp; // ���� ��� ����
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = a + 2; // �Ŀ� ��ü�� ���� ���ϱ�
	a.show();
	b.show();
}


