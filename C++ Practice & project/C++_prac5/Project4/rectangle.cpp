#include<iostream>
#include<cstring>

using namespace std;


//class ����δ� struct�κ�
//class �����δ� �Լ�����

//����ο� �����δ� ���� �����ϴ� ���� ���� �����ؼ� ����� �� �ֱ⶧��

//class�� �����ϸ� �ش� class�̸��� ������ �Լ� ex)Circle(); Circle(int r);�� �ڵ����� ����
//class�� return�� �� �� ����(struct�� �Լ��� ���� �� class��� �����ִ�)
//�̷��� �Լ��� �����ڶ�� �Ѵ�
// ��ü�� �ʱ�ȭ �ϱ� ���ؼ� ������
//�����ڴ� Ŭ���� �̸��� ������
//�ߺ����Ǵ� �����ϳ� ������ �� �� �ϳ��� �� circle(), circle(int n)�� ���


class Rectangle
{
public:
	int width;
	int height;
	int getArea();
};

int Rectangle::getArea()
{
	return height * width;
}

int main()
{
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "�簢���� ������ " << rect.getArea() << endl;

}