#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class Circle {
	int radius;    // ������
	char* color;   // ���� ����

public:
	Circle& operator=(const Circle& op2)
	{
		if (this == &op2)              // for a=a;
			return *this;
		delete[] color;
		radius = op2.radius;
		color = new char[strlen(op2.color) + 1];
		strcpy(color, op2.color);
		return *this;                    // for a=b=c;
	};

};
int main()
{
	
		return 0;
}
