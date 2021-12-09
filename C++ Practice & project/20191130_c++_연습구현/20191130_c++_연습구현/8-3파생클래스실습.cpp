#include <iostream>
#include <string>
using namespace std;
class  TV
{
	int size;
public:
	TV() { size = 20; }
	TV(int _size) {
		size = _size;
	}
	int getsize()
	{
		return size;
	}
};

class  wideTV : public TV
{
	bool videoin;
public:
	wideTV(int size, bool videoin) : TV(size)
	{
		this->videoin = videoin;
	}
	bool getVideoIn() { return videoin; }
}; 

class  SmartTV : public wideTV { // WideTV를 상속받는 SmartTV
	string ipAddr; // 인터넷 주소
public:
	SmartTV(string ipAddr, int size) : wideTV(size, true) {
		this->ipAddr = ipAddr;
	}
	string getIpAddr() { return ipAddr; }
};
