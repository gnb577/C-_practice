#include"Phone.h"
ostream& operator << (ostream& outs, const Phone& c)
{
	outs << "< " << c.name <<", "<<c.telnum<<", " << c.address << ">"<< endl;
	return outs;
}
istream& operator >> (istream& ins, Phone& c)
{
	cout << "�̸�: ";
	getline(ins,c.name);
	cout << endl;
	cout << "��ȭ��ȣ: ";
	getline(ins, c.telnum);
	cout << endl;
	cout << "�ּ�: ";
	getline(ins, c.address);
	cout << endl;
	return ins;

}
//return���� �Ǵٽ� ��ü�μ� ����ϱ� ���ؼ�
//istream&, ostream& �������� �޾ƾ��Ѵ�
int main() {
	Phone girl, boy;
	cin >> girl >> boy; //��ȭ ��ȣ�� Ű����κ��� �д´�.
	cout << girl << endl << boy << endl; // ��ȭ ��ȣ�� ����Ѵ�.
}
