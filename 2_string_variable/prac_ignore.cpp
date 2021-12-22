#include <iostream>
#include <string>

using namespace std;

int main(){

    string str;

    cin.ignore(1000, ' '); //어떤 문자가 나올때까지 버린다.
    cin >> str;
    cout << str << endl;
    // power kim --> 띄어쓰기가 나왔으니 앞은버리고 kim

    return 0;
}