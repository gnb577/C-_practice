/*

std�� iostream�� �⺻(define) namespace

using std::cout �̷������� ���� cout���� std::�� ������ �� �ִٴ� ��
using namespace std; ��� �̸��� std�� �����ص� �ȴٴ� ��


cin�� Ư¡
�Է¹��۸� ������
enter �Է±��� �Է¹��ۿ� �Էµ� ��(Ű)�� ����
backspace�Է½� �Է�Ű ����

enter�� �Է��� �Ǿ����� �Է¹��ۿ��� ������ ����
�Է¹��۴� queue�� ���� first in first out
�� ���ﶧ�� first in last out �������� �Է��Ѱ� ��������
enter�� ġ�� �Է¹��۰� �������� �� ����

int a = 10 == int a(10); <- 10�� �����ؼ� �ֱ⺸�� �ʱ�ȭ�� ����
int b = a == int b(a); <- b���� a�� ����

int bb(1.5); �� int bb{1.5}; �� ����?
�ʱ�ȭ�� �����ΰ�??
*/
#include<iostream>

using namespace std;

int main()
{
	int a{ 100 };
	int b(100);

	cout << a << endl;
	cout << b;

	return 0;
}

