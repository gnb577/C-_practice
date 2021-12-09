#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

class Converter {
protected:
	double ratio; // �̱������� ����? 1010
	virtual double convert(double src) = 0; // src�� �ٸ� ������ ��ȯ�Ѵ�.
	virtual string getSourceString() = 0; // �ҽ� ���� ��Ī
	virtual string getDestString() = 0; // dest ���� ��Ī
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar :public Converter
{

protected:
	double convert(double src);// src�� �ٸ� ������ ��ȯ�Ѵ�.
	string getSourceString(); // �ҽ� ���� ��Ī
	string getDestString(); // dest ���� ��Ī
public:
	WonToDollar(double ratio) :Converter(ratio) {};
};


double WonToDollar::convert(double src)
{
	return src / ratio;
}
string WonToDollar::getSourceString()
{
	return "��";

}
string WonToDollar::getDestString()
{
	return "�޷�";
}

int main() {
	WonToDollar wd(1010);   // 1 �޷��� 1010��
	wd.run();
}
