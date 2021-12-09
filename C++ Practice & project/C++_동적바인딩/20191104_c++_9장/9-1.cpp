/*


>>바인딩

-컴파일러는 함수를 호출할 때, 해당 함수가 저장된 메모리 주소를 알아야한다.

함수를 호출할 때 메모리상 어느 곳에 있는 함수를 실행하라는 의미로 해석하는 것을 바인딩(binding)이라 한다.

즉, 호출하는 함수의 주소를 미리 컴파일러에게 알려주는 것

프로그램을 구성하는 요소들의 성격을 결정 지어주는 것.

​

​

>동적 바인딩: 실제 실행을 시켜보아야 알 수 있는 것

-시점: 컴파일 시점에 바인딩이 일어난다. 즉, 컴파일 때 한번 결정된 성격은 런타임 때 변할 일이 없다

->런타임 속도가 빨리짐

​

>정적 바인딩: 컴파일 전에 미리 알 수 있는 것

-시점: 런타임 때 바인딩이 일어난다. 즉, 컴파일 시점에서 결정을 보류하고, 런타임 때 결정한다.

//**중요
//정적 stack영역 circle c1이런거
//동적 heap영역 new이런거 
//정적이 빠르나 공간이 한정적임


*/


#include <iostream>
using namespace std;

class Base {
public:
	void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
	void f() { cout << "Derived::f() called" << endl; }
};

void main() {
	Derived d, * pDer;
	pDer = &d;
	pDer->f(); // Derived::f() 호출

	Base* pBase;
	pBase = pDer; // 업캐스팅
	pBase->f(); // Base::f() 호출
}

