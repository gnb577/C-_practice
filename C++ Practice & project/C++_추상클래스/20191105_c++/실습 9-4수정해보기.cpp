#include<iostream>
#include<cstring>

using namespace std;

class BankAcct
{
private:
protected:
	double money;
	//double rate;
	//double interest;
public:
	BankAcct(double m) { money = m; }
	void deposit(double m) { money += m; }
	void withdraw(double m) { money -= m; }
	
	
	virtual void print() {
		cout << "예금액 : " << money << endl;
	}
};


class SavingAcct : public BankAcct {
	double rate;
public:
	
	void setRate(double r) { rate = r; }
	double getInterest() { return money * rate; }
	SavingAcct(int m) : BankAcct(m) {
		setRate(0.09);
	}
	virtual void print() {
		cout << "==================" << endl;
		cout << " 저축 예금 계좌" << endl;
		cout << "==================" << endl;
		BankAcct::print();
		cout << "이자액 : " << getInterest() << endl;

	}

};
class CheckingAcct : public BankAcct {
	double rate;
public:
	void setRate(double r) { rate = r; }
	double getInterest() { return money * rate; }
	CheckingAcct(int m) : BankAcct(m) {
		setRate(0.05);
	}
	virtual void print() {
		cout << "==================" << endl;
		cout << " 당좌 예금 계좌" << endl;
		cout << "==================" << endl;
		BankAcct::print();
		cout << "이자액 : " << getInterest() << endl;
	}
};


int main() {
	SavingAcct sa(5000000);
	CheckingAcct ca(10000000);

	BankAcct* p = &sa;
	BankAcct* q = &ca;

	

	sa.deposit(100000);
	ca.deposit(150000);
	sa.withdraw(500000);
	ca.withdraw(500000);

	sa.print();
	ca.print();
	cout << endl;
	cout << "일반#################################" << endl;
	cout << endl;
	p->deposit(2000000);
	q->deposit(2500000);
	p->withdraw(600000);
	q->withdraw(600000);


	p->print();
	q->print();
	cout << endl;
	cout << "upcasting#################################" << endl;
	cout << endl;

	BankAcct* banks[] = { new SavingAcct(5000000),new CheckingAcct(10000000) };
	for (BankAcct* s : banks)
	{
		s->deposit(100000);
	}
	for (BankAcct* s : banks)
	{
		s->withdraw(500000);
	}
	for (BankAcct* s : banks)
	{
		s->print();
	}
	cout << endl;
	cout << "동적할당 #################################" << endl;
	cout << endl;
	return 0;
}
