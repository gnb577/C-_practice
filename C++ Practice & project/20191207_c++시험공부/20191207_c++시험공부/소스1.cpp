#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;
class circle
{
	int r;
	string name;
public:
	circle(int _r = 1, string _name = "그냥")
	{
		r = _r;
		name = _name;
	}
	void setr(int _r)
	{
		r = _r;
	}
	void setn(string _name)
	{
		name = _name;
	}
	int getr()
	{
		return r;
	}
	string getn()
	{
		return name;
	}
	friend ostream& operator <<(ostream& os, circle& p);
	friend istream& operator <<(istream& is, circle& p);
};

ostream& operator <<(ostream& os, circle& p)
{
	cout << "반지름" << p.r << "인 " << p.name<<endl;
	return os;
}
istream& operator >>(istream& is, circle& p)
{
	int num; string nam;
	cout << "반지름>>";
	cin >> num;
	cin.ignore();
	cout << endl;
	p.setr(num);
	cout << "이름>>";
	getline(cin,nam);
	cout << endl;
	p.setn(nam);
	return is;
}
int main() {
	circle d, w;
	cin >> d >> w; // 키보드 입력을 받아 객체 d와 w를 완성
	cout << d << w << endl; // 객체 d, w 출력
}

