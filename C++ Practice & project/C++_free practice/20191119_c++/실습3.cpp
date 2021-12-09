#include"Phone.h"
ostream& operator << (ostream& outs, const Phone& c)
{
	outs << "< " << c.name <<", "<<c.telnum<<", " << c.address << ">"<< endl;
	return outs;
}
istream& operator >> (istream& ins, Phone& c)
{
	cout << "이름: ";
	getline(ins,c.name);
	cout << endl;
	cout << "전화번호: ";
	getline(ins, c.telnum);
	cout << endl;
	cout << "주소: ";
	getline(ins, c.address);
	cout << endl;
	return ins;

}
//return값을 또다시 객체로서 사용하기 위해서
//istream&, ostream& 리턴으로 받아야한다
int main() {
	Phone girl, boy;
	cin >> girl >> boy; //전화 번호를 키보드로부터 읽는다.
	cout << girl << endl << boy << endl; // 전화 번호를 출력한다.
}
