#include <iostream>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};
//seta �� showa�� ���� derived�� private������ ���ٰ� ����ǰ�
//�׾ȿ����� �׵��� protect�� public������ ���������ϰ� showb�� ���� ������ �����Ѱ��̴�
//�ſ� ����� �κ��̹Ƿ� ��������
class Derived : private Base {
	//private(protected) setA();
	//private(public) showA();
	//�� �׷��� �����ص� private(private)a���� ���� �Ұ�
	//a�� �����Ϸ��� set or show�� �̿��ؾ� �Ѵ�
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() {
		setA(5); 						// ��
		showA(); 					// ��
		cout << b;
	}
};

class GrandDerived : private Derived {
	int c;
	//���� derived���� private���� �ǹ��� seta�� showa�� ���Ұ�
protected:
	void setAB(int x) {
		//setb�� private(public)���� ��밡��
		setA(x); 						// ��
		showA(); 					// �� 
		setB(x); 						// ��
	}
};
