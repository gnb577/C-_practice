#include<iostream>
using namespace std;


// Circle::Circle() [��] :Circle(1) [��] {}; ���� �ִ� �Ű� ȣ��Ǹ� �ڿ� �ִ� �Լ����� �����ؼ� �����ϵ��� �Ѵٴ� �� �ڿ�{}�ٿ��� �Լ��̹Ƿ� �ٿ��� ��
//������ -> ��ü�� �����Ǵ� �������� �ڵ����� ȣ��Ǵ� ����Լ�
//Ŭ���� �̸��� ������

//x = 0 �� int x;���� �� x = 0;�̰�  x(0)�� x = 0;�̷���

//�����ڸ� �������� �ʾƵ� �⺻������ ������(�⺻)�� ȣ�����ش�
//�⺻ �����ڰ� �ƹ��͵� ���� ������ �ϴ� �����Ѵ�
//�� �����ڰ� �ϳ� �̻� ����� ��쿡�� �⺻ �����ڴ� �ڵ� �������� �ʴ´�
//���� circle(int r)�� ����� ���� main�Լ��� circle.donut�� ����� ������ ����



class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x << ", " << y << ")" << endl; }
};

Point::Point() : x(0),y(0) { } // ���� ������
Point::Point(int a, int b) // Ÿ�� ������
	: x(a), y(b) { }

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}
