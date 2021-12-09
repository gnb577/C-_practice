
#include<iostream>
#include<string>
#include<cstring>

using namespace std;
Circle(Circle&& c)
{
	radius = c.radius;
	color = c.color;
	c.color = nullptr;
}


// 이동대입연산자

Circle& operator=(Circle&& op2)
{
	if (this == &op2)              // for a=a;
		return *this;
	delete[] color;
	radius = op2.radius;
	color = op2.color;
	op2.color = nullptr;
	return *this;                    // for a=b=c;
};
