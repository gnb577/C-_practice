#include<iostream>
#include<string>
using namespace std;

ostream& col(ostream& os)
{
	os << "�ȳ��ϼ���";
	return os;
}



class somek
{
	int w;
	string a;
public:
	somek()
	{
		w = 1;
		a = "����";
	}
	int getw()
	{
		return w;

	}
	string gets()
	{
		return a;
	}
	void d()
	{
		int g = 1;
	}
	friend ostream& operator <<(ostream& os, somek _d);
};

ostream& operator <<(ostream& os, somek _d)
{

	int a = _d.getw();
	string b = _d.gets();
	cout << a << endl;
	cout << b;
	return os;
}

int main()
{
	somek ons;
	cout << col;
	cout << ons;
}