#include<iostream>
using namespace std;

int main()
{
    auto c(10); //변수선언(초기값)
    auto d{10}; // d = {10}, auto d = 10
    //앞에서는 auto d = 10은 오히려 d(10)과 비슷한 거 아니였음?
    //긴 타입명 쓸 때 유리

    return 0;
}