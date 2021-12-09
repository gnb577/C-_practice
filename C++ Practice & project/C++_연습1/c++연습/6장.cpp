#include<iostream>

using namespace std;

class Person {
public:
	double money; // ���� ������ ��
	void addMoney(int money) {
		this->money += money;
	}

	static int sharedMoney; // ����
	static void addShared(int n) {
		sharedMoney += n;
	}
};

int Person::sharedMoney = 10; // sharedMoney�� 10���� �ʱ�ȭ

int main()
{
	Person lee;
	lee.sharedMoney = 500; // ��ü.static��� ���

	cout << lee.sharedMoney << endl;

	Person* p;
	p = &lee;
	p->sharedMoney = 400;
	p->addShared(200); // ��ü������->static��� ���


	cout << lee.sharedMoney << endl;
}