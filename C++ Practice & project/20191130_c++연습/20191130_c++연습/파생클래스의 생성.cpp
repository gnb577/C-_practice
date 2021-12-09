/*

파생클래스는 인수를 가지고 있더라도 설정이 없으면 묵시적으로 [ 기본생성자 ]를 호출

class  A {
public:
	A() { cout << "생성자 A" << endl; }
	A(int x) {
		cout << "매개변수생성자 A" << x << endl;
	}
};


class  B : public A {
public:
	B() { // A() 호출하도록 컴파일됨
		cout << "생성자 B" << endl;
	}
	B(int x) { // A() 호출하도록 컴파일됨
		cout << "매개변수생성자 B" << x << endl;
	}

**하지만 아래와 같이 지정시에는 해당 기본클래스의 생성자 호출

class  A {
public:
	A() { cout << "생성자 A" << endl; }
	A(int x) {
		cout << "매개변수생성자 A" << x << endl;
	}
};


class  B : public A {
public:
	B() { // A() 호출하도록 컴파일됨
		cout << "생성자 B" << endl;
	}
	B(int x) : A(x + 3) {
		cout << "매개변수생성자 B" << x << endl;
	}
};

*/
