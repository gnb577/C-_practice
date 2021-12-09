#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& v) {
	int n = v.size();
	// ������ �� ���� ���
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << ' ';
	}
	cout << endl;

}
double getAverage(const vector<int>& v)
{
	int sum = 0;
	int n = v.size();
	// ������ ���� ���� ��� ���ϱ�
	for (int i = 0; i < n; i++)
	{
		sum = sum + v[i];
	}
	return double(sum) / n;
}

int main() {
	vector<int> v;       // ���� ��ü ����
	int count = 0;
	while (true) {
		cout << "���� �Է�(0�� �Է��ϸ� ����)>>";

		int num;
		cin >> num;
		//cin.ignore();
		if (num == 0)
			return -1;     // ���α׷� ����

	//	v[count] = num;				//�Է¹��� ���� ���Ϳ� ����
		//count++;
		v.push_back(num);
		printVector(v);	// ������ ��� �� ���

	 cout << "��� = " << getAverage(v) << endl;
	}
	return 0;
}
