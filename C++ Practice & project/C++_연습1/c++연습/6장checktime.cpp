class Sample {
public:
	static int a;
	int b;
	void f();
	static void h();
};
int main()
{
	Sample sample;
	sample.b = 5;   //  ��
	sample.a = 5;   //  �� sample::a�ε� ȣ�Ⱑ��
	Sample::f();   //  ��
	static�� �ƴ� �� ����������(class��Ÿ�Ϸ�)�� ȣ������

		Sample.f(); �� ȣ���ؾߵ�
		Sample::h();  //  �� sample.h()�� ����
};
