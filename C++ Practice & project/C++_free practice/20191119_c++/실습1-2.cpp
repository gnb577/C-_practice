#include <iostream>
using namespace std;

int main()
{
	int ch;
	while ((ch = cin.get()) != EOF) 
	{
		if (ch == ';')
		{
			cin.ignore(100, '\n'); // ���� ������ �ִ� 99���� ���ڷ� �Էµȴٰ� ����
			cout << endl;
		}
		cout << (char)ch;
	}
	//  �ϼ��ϱ�

}


