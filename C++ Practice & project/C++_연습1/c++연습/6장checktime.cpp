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
	sample.b = 5;   //  ①
	sample.a = 5;   //  ② sample::a로도 호출가능
	Sample::f();   //  ③
	static이 아닌 데 지정범위자(class스타일로)로 호출했음

		Sample.f(); 로 호출해야됨
		Sample::h();  //  ④ sample.h()도 가능
};
