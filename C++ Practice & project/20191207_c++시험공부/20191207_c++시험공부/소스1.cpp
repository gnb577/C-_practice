#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;
class circle
{
	int r;
	string name;
public:
	circle(int _r = 1, string _name = "�׳�")
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
	cout << "������" << p.r << "�� " << p.name<<endl;
	return os;
}
istream& operator >>(istream& is, circle& p)
{
	int num; string nam;
	cout << "������>>";
	cin >> num;
	cin.ignore();
	cout << endl;
	p.setr(num);
	cout << "�̸�>>";
	getline(cin,nam);
	cout << endl;
	p.setn(nam);
	return is;
}
int main() {
	circle d, w;
	cin >> d >> w; // Ű���� �Է��� �޾� ��ü d�� w�� �ϼ�
	cout << d << w << endl; // ��ü d, w ���
}

