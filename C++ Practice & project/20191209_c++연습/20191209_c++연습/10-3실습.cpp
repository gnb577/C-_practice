#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> p;
	vector<int>::iterator it;
	int a;
	double sum = 0;
	int cnt = 0;
	while (1)
	{
		cin >> a;
		cin.ignore();
		if (a == 0)
		{
			break;
		}
		p.push_back(a);
		sum = sum + a;
		cnt++;
		cout << "Æò±ÕÀº: "<< double(sum / cnt) << endl;

	}
	return 0;
	

}