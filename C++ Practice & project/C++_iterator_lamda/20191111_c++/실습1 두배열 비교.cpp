#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

template<class T>
bool equalArrays(T* x, T* y, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (x[i] != y[i])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int  x[] = { 1, 10, 100, 5, 4 };
	int  y[] = { 1, 10, 100, 5, 4 };
	double a[] = { 0.1, 2.3, 3.5 };
	double b[] = { 5.3, -2.1, 12.5 };

	if (equalArrays(x, y, 5))  cout << "����" << endl;
	else cout << "�ٸ���"<< endl;
	if (equalArrays(a, b, 3)) cout << "����" << endl;   // 3�� �迭 a, b�� ũ��
	else cout << "�ٸ���" << endl;

}