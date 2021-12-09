#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	ifstream fin;
	//cout.unsetf(ios::dec);
//	cout.setf(ios::hex);
	cout.setf(ios::uppercase);
	fin.open("student.txt");
	if (!fin)
	{
		cout << "¹¹ÇÏ¼¼¿ä~?" << endl;
		return 0;
	}
	string line;
	char line2[100];
	int lineno = 1;
	while (1)
	{
		getline(fin, line);
		if (fin.eof())
		{
			break;
		}
		for (int i = 0; i < line.size(); i++)
		{
			line[i] = toupper(line[i]);
		}
		cout << lineno++ << " : ";
		cout << line<< endl;
	}
}