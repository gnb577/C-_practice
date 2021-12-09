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
		cout << "멍멍" << endl;
	}
};

class Cat :public Animal {
	virtual void speak()
	{
		cout << "야옹" << endl;
	}
};

class jungsub :public Animal {
	virtual void speak()
	{
		cout << "고수는 전력을 다하지 않아" << endl;
	}
};

class byeongkuk :public Animal {
	virtual void speak()
	{
		cout << "나는 강하다" << endl;
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
		//auto s : animals 이렇게 써도 됨
		//연산자 기준 오른쪽은 복사할 배열, 왼쪽은 그걸 담을 포인터 -> 처음부터 끝까지 봐줌
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
