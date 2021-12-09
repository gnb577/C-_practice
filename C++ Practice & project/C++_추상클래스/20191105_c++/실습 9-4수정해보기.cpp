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
		cout << "���ݾ� : " << money << endl;
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
		cout << " ���� ���� ����" << endl;
		cout << "==================" << endl;
		BankAcct::print();
		cout << "���ھ� : " << getInterest() << endl;

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
		cout << " ���� ���� ����" << endl;
		cout << "==================" << endl;
		BankAcct::print();
		cout << "���ھ� : " << getInterest() << endl;
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
	cout << "�Ϲ�#################################" << endl;
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
	cout << "�����Ҵ� #################################" << endl;
	cout << endl;
	return 0;
}
