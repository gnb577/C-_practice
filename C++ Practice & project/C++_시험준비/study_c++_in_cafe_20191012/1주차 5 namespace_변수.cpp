/*

�̸�(identifier) �浹�� �߻��ϴ� ���
���� ���� ���� ������ ������Ʈ�� �����ϴ� ���
���� �ҽ� Ȥ�� �ٸ� ����� �ۼ��� �ҽ��� ���� ������ �����ͼ� ������ �ϰų� ��ũ�ϴ� ���
namespace Ű����
�̸� �浹 �ذ�
�����ڰ� �ڽŸ��� �̸������� ������ �� �ֵ��� ��


namespace kitae { // kitae ��� �̸����� ����
	....... // �� ���� ����� ��� �̸��� kitae �̸������� ������ �̸�
}

namespace kitae {
	int f();
	void m();
}

namespace mike {
	int f();
	int g();
}

�̷� �Լ��� �浹��Ű�� �ʰ� ����ϰ� �ʹٸ�

#include ��mike.h��

namespace kitae {
	int f() {
		return 1;
	}

	void m() {
		f();
		mike::f();
	}
}


*/

#include<iostream>
#include"kitae.h"

namespace mike2
{
	int f()
	{
		return 1;
	}
	void m()
	{
		std::cout << f();
		std::cout<< kitae::f();
	}
}

/*
std�� iostream�� sample namespace���� using namespace�� ���������� ����� �����ϳ�
�� ó�� kitae�� mike�� ������ ���� �Ҵ�������� 
*/