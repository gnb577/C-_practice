class Sample;
int f(Sample);

class Test {
public:
		void f(Sample);
		void g(Sample);
};

class Sample {
private:
	int x;
public:
	Sample(int x);
	friend int f(Sample);     // ① 함수 f()를 프렌드로 선언하라.
	friend void Test::f(Sample);                               // ② Test 클래스의 함수 f()를 프렌드로 선언하라.
	friend Test;
};// ③ Test 클래스의 모든 함수를 프렌드로 선언하라
