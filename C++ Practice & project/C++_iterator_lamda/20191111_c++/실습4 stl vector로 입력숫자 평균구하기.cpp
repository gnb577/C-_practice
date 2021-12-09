#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& v) {
	int n = v.size();
	// 벡터의 각 원소 출력
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << ' ';
	}
	cout << endl;

}
double getAverage(const vector<int>& v)
{
	int sum = 0;
	int n = v.size();
	// 벡터의 원소 개수 모두 더하기
	for (int i = 0; i < n; i++)
	{
		sum = sum + v[i];
	}
	return double(sum) / n;
}

int main() {
	vector<int> v;       // 벡터 객체 생성
	int count = 0;
	while (true) {
		cout << "정수 입력(0을 입력하면 종료)>>";

		int num;
		cin >> num;
		//cin.ignore();
		if (num == 0)
			return -1;     // 프로그램 종료

	//	v[count] = num;				//입력받은 수를 벡터에 저장
		//count++;
		v.push_back(num);
		printVector(v);	// 벡터의 모든 수 출력

	 cout << "평균 = " << getAverage(v) << endl;
	}
	return 0;
}
