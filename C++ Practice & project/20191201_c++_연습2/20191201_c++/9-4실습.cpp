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
	BankAcct(double m) { money = m; } // 계좌에 얼마?
	virtual ~BankAcct() {};
	void deposit(double m) { money += m; } // 입금(예금) 얼마?
	void withdraw(double m) { money -= m; } //대출 얼마?
	double getInterest() { return money * rate; } //이자 얼마?
	void setRate(double r) { rate = r; } // 이자
	virtual void print() {
		cout << "예금액 : " << money << endl;
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
		cout << "이자액 : " << a.getInterest() << endl;
	}
	sa.deposit(100000);
	ca.deposit(150000);
	sa.withdraw(500000);
	ca.withdraw(500000);
	sa.print();
	cout << "이자액 : " << sa.getInterest() << endl;
	ca.print();
	cout << "이자액 : " << ca.getInterest() << endl;
	
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
	BankAcct(double m) { money = m; } // 계좌에 얼마?
	void deposit(double m) { money += m; } // 입금(예금) 얼마?
	void withdraw(double m) { money -= m; } //대출 얼마?
	virtual double getInterest() { return money * rate; } //이자 얼마?
	void setRate(double r) { rate = r; } // 이자
	void print() {
		cout << "예금액 : " << money << endl;
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
	cout << "이자액 : " << sa.getInterest() << endl;
	ca.print();
	cout << "이자액 : " << ca.getInterest() << endl;
	return 0;
}
*/