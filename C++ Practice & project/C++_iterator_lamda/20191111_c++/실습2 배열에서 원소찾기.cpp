#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

template<class T>
bool search(T s, T* x, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (x[i] == s)
		{
			return true;
		}
	}
	return false;
}



int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	if (search(100, x, 5))  // 100�� �迭 x�� ���ԵǾ� �ִ°�?
		cout << "100�� �迭 x�� ���ԵǾ� �ִ�";
	else cout << "100�� �迭 x�� ���ԵǾ� ���� �ʴ�";
	cout << endl;

	char c[] = { 'h', 'e', 'l', 'l', 'o' };
	if (search('e', c, 5))  // 'e'�� �迭 c�� ���ԵǾ� �ִ°�?
		cout << "e�� �迭 c�� ���ԵǾ� �ִ�";
	else cout << "e�� �迭 c�� ���ԵǾ� ���� �ʴ�";
	cout << endl;
}
