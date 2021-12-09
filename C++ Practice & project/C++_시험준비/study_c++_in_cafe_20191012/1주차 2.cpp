/*

객체가 자식 클래스의 멤버와 부모 클래스에 선언된 멤버를 가지고 탄생

*캡슐화 = private / public 같이 변수나 함수를 main or 다른함수가 볼 수 있도록,
볼 수 없도록 하는 것

*상속성 = 예를 들어 처음에는 휴대폰이 전화를 주고 받는 기능이 있다
그러다가 음악을 다운하고 플레이하는 기능을 하고 싶다
그럴 때 상속하는 거다
*/

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class Phone
{
	void call();
	void recieve();
};

//phone을 상속받음 (내가 봤을 땐  뒤에 것이 앞에 것을 상속받는다고 생각)
class MobilePhone : public Phone
{
	void connectWireless();
	void recharge();
};

//Mobilephone을 상속받음
class MusicPhone : public MobilePhone 
{
	void downloadMusic();
	void play();
};