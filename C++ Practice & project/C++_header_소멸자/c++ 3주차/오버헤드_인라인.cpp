#include <iostream>
using namespace std;
//�ζ��� �Լ��� ����
//���α׷� ���� �ð��� ������
//�� �ڵ� ũ�Ⱑ ������


//�ڵ� �ζ��� �Լ� -> Ŭ���� ����ο� ������ ����Լ�

//struct �� default�� public , class�� default �� private

//c�� �ٸ��� typedef�� ���� �ʾƵ� �� �Ͱ� ������ ȿ���� ���� �� �մ�

//c++�� struct�� �� ������� �ʰ� class�� ���� �� open�� ��ü(�� ������� ���� public)����  ����ϰ� ���� �� ����ϱ⵵ �Ѵ�
int odd(int x) {
	return (x % 2);
}

int main() {
	int sum = 0;

	// 1���� 10000������ Ȧ���� �� ���
	for (int i = 1; i <= 10000; i++) {
		if (odd(i))
			sum += i;
	}
	cout << sum;
}
