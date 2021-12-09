#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {

string a("Hello C++");
cout << a.length() << endl;
a.append("!!");
cout << a << endl;
cout << a.at(6) << endl;// C가 7번째(a[6]니까 c를찾아냄
	cout << a.find("C") << endl; //처음으로 a에서 c가 나오는 index = 7
	int n = a.find("++");
cout << n << endl;
a.erase(1, 3);// index1~3 즉 문자열의 2번째부터 4번째를 지움
cout << a << endl;
};

