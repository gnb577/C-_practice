#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

class animal
{
	int b;
public:
	animal()
	{
		b = 2;
	}
	virtual void speak()
	{
		cout << b << "匡澜家府" << endl;
	}
};

class dog :public animal
{
	int a;
public:
	dog()
	{
		a = 1;
	}
	 virtual void speak()
	{
		cout << a <<" "<< "港港" << endl;
	}
};

class cat :public animal
{
public:
	virtual void speak()
	{
		cout << "绊剧捞" << endl;
	}
};

int main()
{
	animal* p[] = { new dog() };
	for (animal* s : p)
	{
		animal* a = s;
		a->speak();
	}

}