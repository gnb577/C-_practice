#include"Circle.h"

ostream& operator <<(ostream& outs, const Circle& c)
{
	outs << "(������" << c.radius << "��" << c.name << ")";
	return outs;
}
istream& operator >> (istream& ins, Circle& c)
{
	cout << "������>>";
	ins >> c.radius;
	cout << "�̸� >>";
	ins >> c.name;
	return ins;
}

int main() {
	Circle d, w;
	cin >> d >> w; // Ű���� �Է��� �޾� ��ü d�� w�� �ϼ�
	cout << d << w << endl; // ��ü d, w ���
}

