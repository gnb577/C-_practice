#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
class BankAcct {
protected:
	double money;
	double rate;
	double interest;
public:
	BankAcct(double m) { money = m; } // ���¿� ��?
	virtual ~BankAcct() {};
	void deposit(double m) { money += m; } // �Ա�(����) ��?
	void withdraw(double m) { money -= m; } //���� ��?
	double getInterest() { return money * rate; } //���� ��?
	void setRate(double r) { rate = r; } // ����
	virtual void print() {
		cout << "���ݾ� : " << money << endl;
	}

};

class savingacct :public BankAcct
{
public:
	savingacct(int mon) :BankAcct(mon)
	{
		setRate(0.09);
	}
	~savingacct() {};
	void print()
	{
		BankAcct::print();
	}
	double getInterest() { return money * rate; }
};

class checkingacct :public BankAcct
{
public:
	checkingacct(int mon) :BankAcct(mon)
	{
		setRate(0.05);
	}
	~checkingacct(){};
	void print()
	{
		BankAcct::print();
	}
	double getInterest() { return money * rate; }
};
int main() {
	savingacct sa(5000000);
	checkingacct ca(10000000);
	BankAcct* bder[] = { new savingacct(10000),new checkingacct(20000) };
	for (BankAcct* p : bder)
	{
		BankAcct& a = *p;
		a.deposit(5000);
		a.withdraw(2000);
		a.print();
		cout << "���ھ� : " << a.getInterest() << endl;
	}
	sa.deposit(100000);
	ca.deposit(150000);
	sa.withdraw(500000);
	ca.withdraw(500000);
	sa.print();
	cout << "���ھ� : " << sa.getInterest() << endl;
	ca.print();
	cout << "���ھ� : " << ca.getInterest() << endl;
	
	return 0;
}

/*
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
class BankAcct {
protected:
	double money;
	double rate;
	double interest;
public:
	BankAcct(double m) { money = m; } // ���¿� ��?
	void deposit(double m) { money += m; } // �Ա�(����) ��?
	void withdraw(double m) { money -= m; } //���� ��?
	virtual double getInterest() { return money * rate; } //���� ��?
	void setRate(double r) { rate = r; } // ����
	void print() {
		cout << "���ݾ� : " << money << endl;
	}

};

class savingacct :public BankAcct
{
public:
	savingacct(int mon):BankAcct(mon)
	{
		setRate(0.09);
	}
	void print()
	{
		BankAcct::print();
	}
	
};

class checkingacct :public BankAcct
{
public:
	checkingacct(int mon) :BankAcct(mon)
	{
		setRate(0.05);
	}
	void print()
	{
		BankAcct::print();
	}

};
int main() {
	savingacct sa(5000000);
	checkingacct ca(10000000);
	sa.deposit(100000);
	ca.deposit(150000);
	sa.withdraw(500000);
	ca.withdraw(500000);
	sa.print();
	cout << "���ھ� : " << sa.getInterest() << endl;
	ca.print();
	cout << "���ھ� : " << ca.getInterest() << endl;
	return 0;
}
*/