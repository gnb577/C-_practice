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
	friend int f(Sample);     // �� �Լ� f()�� ������� �����϶�.
	friend void Test::f(Sample);                               // �� Test Ŭ������ �Լ� f()�� ������� �����϶�.
	friend Test;
};// �� Test Ŭ������ ��� �Լ��� ������� �����϶�
