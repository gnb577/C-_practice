#include<iostream>
using namespace std;

int main()
{
    //c++에서는 int a = 10 (가능하나 안씀)
    int a(10); //direct init (copy랑 비슷)
    cout << a << endl;
    
     int b(a); //복사
    cout << b << endl;

    // int c = {10};
    int c{10}; //uniform init
    cout << c << endl;

    int d = 10; // copy init

    return 0;
}