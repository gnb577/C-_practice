#include <iostream>
#include<string>
using namespace std;

//int n=0 과 int n 이후 n=0은 다르다.
//<<endl 은 \n과 같음
//기본적으로 bool, char, short, int, long, float, double 타입의 값을 나타낼 수 있어 따로 정의해 줄 필요가 없음
//때에 따라 표기하고 싶은 경우가 생기면 ex)10.5 (int)10.5이런식으로 쓰면 10이렇게 나옴
//cout = printf , cin = scanf
//int char 처럼 auto라는 데이터 타입이 있는 데 내가 쓰는 거에 맞추어 자동으로 맞추어줌
//namespace std;이런걸 해주는 이유가 c++는 개별적으로 공간을 선언해 줘야함
//한마디로 어떤 일을 수행하고 싶으면 malloc처럼 이름이 있는 공간을 생성한 후 프로그램을 작성해야 함

int sum(); // 함수 원형 선언

int main() {
	int n{ 0 };
	cout << "끝 수를 입력하세요>";
	cin >> n;
	if (n <= 0)
	{
		cout << "양수를 입력하세요!" << endl;
		return 0;
	}
	cout << "1에서" << n << "까지의 합은" << sum(1, n) << "입니다." << endl;
	return 0;
}

int sum(int a, int b) {
	auto res(0);
	for (int k{ a }; k <= b; k++) {
		res += k;
	}
	return res;
}
