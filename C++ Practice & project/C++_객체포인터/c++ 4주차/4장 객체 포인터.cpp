#include<iostream>
using namespace std;

/* 
int a = 10;
int *ao = &a;


Circle donut;
double d = donut.getArea();

==

Circle *p;
p = &donut;
d = p->getArea();


����!
p->getArea() ��� *p.getArea()�� ���� *p�� ��ȣ�� �� ������� ������ ������ �Ȼ��� (*p).getArea();

�迭�� ����� ���� ����
Circle c[3];






*/

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}


int main() {
	Circle circleArray[3]; 										// (1) Circle ��ü �迭 ����

	// �迭�� �� ���� ��ü�� ��� ����
	circleArray[0].setRadius(10); 							// (2)
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) // �迭�� �� ���� ��ü�� ��� ����
		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;

	Circle* p; 															// (3)
	p = circleArray; 												// (4)
	for (int i = 0; i < 3; i++) { 	// ��ü �����ͷ� �迭 ����
		cout << "Circle " << i << "�� ������ " << p->getArea() << endl;
		p++; 	//p++�� ���� array[i]���� i++���� ȿ���� ��Ÿ����														// (5)
	}
}
