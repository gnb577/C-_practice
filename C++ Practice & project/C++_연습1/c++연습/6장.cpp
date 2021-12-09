#include<iostream>

using namespace std;

class Person {
public:
	double money; // 개인 소유의 돈
	void addMoney(int money) {
		this->money += money;
	}

	static int sharedMoney; // 공금
	static void addShared(int n) {
		sharedMoney += n;
	}
};

int Person::sharedMoney = 10; // sharedMoney를 10으로 초기화

int main()
{
	Person lee;
	lee.sharedMoney = 500; // 객체.static멤버 방식

	cout << lee.sharedMoney << endl;

	Person* p;
	p = &lee;
	p->sharedMoney = 400;
	p->addShared(200); // 객체포인터->static멤버 방식


	cout << lee.sharedMoney << endl;
}