#include <stdio.h>
int sum(); // �Լ� ���� ����

int main() {
	int n = 0;
	printf("�� ���� �Է��ϼ���>");
	scanf("%d", &n);
	printf("1���� %d������ ���� %d �Դϴ�.\n", n, sum(1, n));
	return 0;
}

int sum(int a, int b) {
	int k, res = 0;
	for (k = a; k <= b; k++) {
		res += k;
	}
	return res;
}
