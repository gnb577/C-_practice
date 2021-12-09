#include <iostream>
using namespace std;

template <class T>
void print(T array[], int n) {
	for (int i = 0; i < n; i++)
		cout << array[i] << '\t';
	cout << endl;
}

void print(char array[], int n) { // char 배열을 출력하기 위한 함수 중복
	for (int i = 0; i < n; i++)
		cout << (int)array[i] << '\t'; // array[i]를 int 타입으로 변환하여 정수 출력
	cout << endl;
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	print(x, 5);//template함수로부터 구체화
	print(d, 5);//template함수로부터 구체화
	            //print(x,5)이런게 일반형태 void print(int array[],int n)이런게 구체화
	                                      //void print(int x,int 5)
	char c[5] = { 1,2,3,4,5 };
	print(c, 5); //중복선언한 void print(char array[],int n)로부터 구체화됨
}

//중복 함수 선언시 template이 아닌 중복선언한 함수를 우선적으로 실행함