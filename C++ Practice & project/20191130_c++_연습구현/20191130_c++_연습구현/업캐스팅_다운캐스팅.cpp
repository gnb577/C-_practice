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
// (�ڽ� *)a
// (�θ� *)b = &a
// �ڽ��� �θ��� �κ����� ����


//�ٿ� ĳ����
//�θ� �ڽ��� �������� Ȯ���ϰ� ���� �� ����Ѵ�
// (�ڽ�) a
// (�θ� *) b = &a(a�� ���̹Ƿ� &���־����)
// (�ڽ� *) c = b(�̹� �����ʹϱ�)
//upcasting�� �ٸ��� ������ �ٴµ� ���ʿ� point pbase�� colorpoint cp�� ����� �ξ���Ѵ�
//�ֳĸ� �ٿ�ĳ������ �ؾ��ϴ� �� �θ𿡰Դ� ���� �ڽĸ��� ������ ���𰡰� �ִٸ�?
//�װ� �ذ��� �� �ִ� ����� �����ϱ�

/*
[ check time ]
TV *p, tv;
ColorTV* q, ctv;
�� p = &tv;     �� p = &ctv;     �� q = (ColorTV*)& tv;     �� q = &ctv;
				(upcasting)        (downcasintg)
*/

int main() {
	ColorPoint cp; // �Ļ� Ŭ������ ��ü ����
	Point* pupcase = &cp; //��ĳ����
	ColorPoint* pdowncase = (ColorPoint *)pupcase;//�ٿ� ĳ����
	cp.set(3, 4); // �⺻ Ŭ������ ��� ȣ��
	cp.setColor("Red"); // �Ļ� Ŭ������ ��� ȣ��
	cp.showColorPoint(); // �Ļ� Ŭ������ ��� ȣ��
	pupcase->showPoint();
	pdowncase->showColorPoint();
}

