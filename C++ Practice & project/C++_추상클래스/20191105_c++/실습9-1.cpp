#include <iostream>
using namespace std;

class Animal {
public:
	virtual void speak()
	{
		cout << "Animal speak()" << endl;
	}
};

class Dog :public Animal {
	virtual void speak()
	{
		cout << "�۸�" << endl;
	}
};

class Cat :public Animal {
	virtual void speak()
	{
		cout << "�߿�" << endl;
	}
};

class jungsub :public Animal {
	virtual void speak()
	{
		cout << "����� ������ ������ �ʾ�" << endl;
	}
};

class byeongkuk :public Animal {
	virtual void speak()
	{
		cout << "���� ���ϴ�" << endl;
	}
};

int main()
{
	Animal* a1 = new Dog;   // up-casting
	a1->speak();
	a1 = new Cat();     // up-casting
	a1->speak();

	Animal* animals[] = { new Dog,new Cat,new Dog,new jungsub };
	for (Animal* s : animals)
		//auto s : animals �̷��� �ᵵ ��
		//������ ���� �������� ������ �迭, ������ �װ� ���� ������ -> ó������ ������ ����
	{
		s->speak();
	}

	for (Animal* s : animals)
		delete s;

	Dog d;
	Animal& a3 = d;   // up-casting
	a3.speak();
	Cat c;
	Animal& a2 = c;   // up-casting
	a2.speak();

	/*
	Animal* animal[] = { new Dog(),
			 new Cat(), new Dog() };
	for (Animal* s : animal) {
		Animal& a = *s;
		a.speak();
	}
	;

	for (Animal* s : animal)
		delete s;
	*/

	return 0;
}
