
//�Ҹ��ڴ� *1��*�� ȣ��, ��ü(�Լ�,���α׷�)�� �Ҹ��ϴ� ������ ȣ���
//Circle::~Circle() { ... }�� �Ҹ���
//�Ҹ��ڸ� �������� �ʾ��� ��� �⺻ �Ҹ��� ����
//�Ҹ��� �Լ� or ���α׷��� ���� ��� �� �Լ� or ���α׷����� ȣ��� �Ϳ� �������� �Ҹ��


//private�� private�� �����ִ� class(or �Լ�)�������� ȿ���� ������(��������)
//�ٸ� ��ü, �ܺ��Լ����� ���� �Ұ�
//public�� ���������� ����
//protected�� protect�� �θ��� �ϸ� �ڽ��� �Ǵ� ���谡 �Ǵ� �Լ��� protect�� ������ ���� �� �� �ִ�
//����, ��� ��������� �ܺο��� �����ϸ� �ȵǱ� ������ private��
//������, ����Լ��� public�� ����Ѵ�
//protect�� �ܺο��� ������ �� �� ������ class���ο��� �ٷ�� �Լ������� ������ �����ϴ�
//������� protect  int x,y�� �ִ� �� main���� class something.x = ������ �Ұ��ϳ�
//class ���ο� �ִ� �Լ� set(int _x, int _y)�� x = _x, y = _y�� �ִٸ� something.set(2,3)���� �����Ҽ� �ִٴ� �Ҹ���


#include <iostream> 
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::~Circle() {
	cout << "������ " << radius << " �� �Ҹ�" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f() {
	Circle fDonut(100);
	Circle fPizza(200);
}

int main() {
	Circle mainDonut;
	Circle mainPizza(30);
	f();
}
