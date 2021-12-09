#include<iostream>
#include<string>
using namespace std;

ostream& col(ostream& os)
{
	os << "안녕하세요";
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
		a = "하이";
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