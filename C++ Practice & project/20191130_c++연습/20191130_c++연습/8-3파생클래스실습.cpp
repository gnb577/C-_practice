#include <iostream>
#include <string>
using namespace std;

class  TV {
	int size; // ��ũ�� ũ��
public:
	TV() { size = 20; }
	TV(int size) { this->size = size; }
	int getSize() { return size; }
};

class  WideTV : public TV { // TV�� ��ӹ޴� WideTV
	bool videoIn;
public:
	WideTV(int size, bool videoIn) : TV(size) {
		this->videoIn = videoIn;
	}
	bool getVideoIn() { return videoIn; }
};

class  SmartTV : public WideTV { // WideTV�� ��ӹ޴� SmartTV
	string ipAddr; // ���ͳ� �ּ�
public:
	SmartTV(string ipAddr, int size) : WideTV(size, true) {
		this->ipAddr = ipAddr;
	}
	string getIpAddr() { return ipAddr; }
};
