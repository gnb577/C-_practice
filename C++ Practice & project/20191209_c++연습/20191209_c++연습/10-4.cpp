#include<iostream>
#include<vector>
using namespace std;
void printvector(const vector<int> v)
{
	cout << "�����ϸ� : ";
	double sum = 0;
	for (auto it = v.begin(); it != v.end(); it++)
	{
		cout << (*it) << " ";
		sum = sum + *it;
	}
	cout << "��� : "<<sum / v.size() << endl;;
	cout << endl;
}

int main()
{
	vector<int> v;
	vector<int>::iterator it;

	int a;
	while (1)
	{
		cin >> a;
		cin.ignore();
		//cout << endl;
		if (a == 0)
		{
			break;
		}
		v.push_back(a);
		printvector(v);
	}

}