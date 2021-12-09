#include <iostream> 
using namespace std;

#include "Exp.h"

Exp::Exp(int b,int e):exp(e),base(b){}
Exp::Exp(int b) :exp(1), base(b){}
Exp::Exp():exp(1), base(1){}

int Exp::getValue()
{
	int value = 1;
	for (int i = 0; i < exp; i++)
	{
		value = value * base;
	}
	return value;
}

int Exp:: getExp()
{
	return exp;
}

int Exp::getBase()
{
	return base;
}

bool Exp::equals(Exp b)
{
	if (getValue() == b.getValue())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}