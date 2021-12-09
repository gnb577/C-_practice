#include <iostream>
#include <string>
using namespace std;

// 2���� ��鿡�� �� ���� ǥ���ϴ� Ŭ���� Point ����
class Point {
	int x, y; //�� �� (x,y) ��ǥ��
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};
class ColorPoint : public Point { // 2���� ��鿡�� �÷� ���� ǥ���ϴ� Ŭ���� ColorPoint. Point�� ��ӹ���
	string color;// ���� �� ǥ��
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point�� showPoint() ȣ��
}

//��ĳ���� : �� �ڵ忡�� ª�� �ڵ�� ġȯ��
// (�ڽ�)a
// (�θ� *)b = &a
// �ڽ��� �θ��� �κ����� ����
/*
int main() {
	ColorPoint cp;
	ColorPoint* pDer = &cp;
	Point* pBase = pDer; // ��ĳ����

	pBase->set(3, 4);
	//pDer->set(3,4)
	pBase->showPoint();
	pDer->setColor("Red");
	pDer->showColorPoint();
	//pBase->showColorPoint(); // ������ ����
}
*/

//�ٿ� ĳ����
//�θ� �ڽ��� �������� Ȯ���ϰ� ���� �� ����Ѵ�
//upcasting�� �ٸ��� ������ �ٴµ� ���ʿ� point pbase�� colorpoint cp�� ����� �ξ���Ѵ�
//�ֳĸ� �ٿ�ĳ������ �ؾ��ϴ� �� �θ𿡰Դ� ���� �ڽĸ��� ������ ���𰡰� �ִٸ�?
//�װ� �ذ��� �� �ִ� ����� �����ϱ�
int main() {
	ColorPoint cp;
	ColorPoint* pDer;
	Point* pBase = &cp; // ��ĳ����

	pBase->set(3, 4);
	pBase->showPoint();

	pDer = (ColorPoint*)pBase; // �ٿ�ĳ����
	pDer->setColor("Red"); // ���� ������
	pDer->showColorPoint(); // ���� ������
}
