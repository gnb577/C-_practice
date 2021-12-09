#include <iostream>
#include <string>
using namespace std;

class  TV {
	int size; // 스크린 크기
public:
	TV() { size = 20; }
	TV(int size) { this->size = size; }
	int getSize() { return size; }
};

class  WideTV : public TV { // TV를 상속받는 WideTV
	bool videoIn;
public:
	WideTV(int size, bool videoIn) : TV(size) {
		this->videoIn = videoIn;
	}
	bool getVideoIn() { return videoIn; }
};

class  SmartTV : public WideTV { // WideTV를 상속받는 SmartTV
	string ipAddr; // 인터넷 주소
public:
	SmartTV(string ipAddr, int size) : WideTV(size, true) {
		this->ipAddr = ipAddr;
	}
	string getIpAddr() { return ipAddr; }
};
