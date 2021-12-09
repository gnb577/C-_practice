#include <iostream>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};
//seta 와 showa는 각각 derived의 private영역에 들어간다고 보면되고
//그안에서도 그들은 protect와 public영역에 속해있으니가 showb를 통해 접근이 가능한것이다
//매우 어려운 부분이므로 참고하자
class Derived : private Base {
	//private(protected) setA();
	//private(public) showA();
	//단 그렇게 생각해도 private(private)a에는 접근 불가
	//a에 접근하려면 set or show를 이용해야 한다
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() {
		setA(5); 						// ①
		showA(); 					// ②
		cout << b;
	}
};

class GrandDerived : private Derived {
	int c;
	//따라서 derived에서 private으로 되버린 seta과 showa는 사용불가
protected:
	void setAB(int x) {
		//setb만 private(public)으로 사용가능
		setA(x); 						// ③
		showA(); 					// ④ 
		setB(x); 						// ⑤
	}
};
