#ifndef CIRCLE_H //if not define ���ǰ� ������ ���� ��쿡�� �����϶�
					//���� ������ ���� ����� �浹�� ���ϱ� ���� Ŭ���� �̸����� �Ͽ���
                //ifndef�� ���Ǹ� �ϸ� ���ǰ� �Ǹ� �ش� ��� ������ �������� �ʰ� ��ŵ�ϰڴٴ� ��
#define CIRCLE_H

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	double getArea();
};

#endif