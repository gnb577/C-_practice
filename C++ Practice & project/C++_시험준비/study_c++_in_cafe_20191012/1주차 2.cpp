/*

��ü�� �ڽ� Ŭ������ ����� �θ� Ŭ������ ����� ����� ������ ź��

*ĸ��ȭ = private / public ���� ������ �Լ��� main or �ٸ��Լ��� �� �� �ֵ���,
�� �� ������ �ϴ� ��

*��Ӽ� = ���� ��� ó������ �޴����� ��ȭ�� �ְ� �޴� ����� �ִ�
�׷��ٰ� ������ �ٿ��ϰ� �÷����ϴ� ����� �ϰ� �ʹ�
�׷� �� ����ϴ� �Ŵ�
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

//phone�� ��ӹ��� (���� ���� ��  �ڿ� ���� �տ� ���� ��ӹ޴´ٰ� ����)
class MobilePhone : public Phone
{
	void connectWireless();
	void recharge();
};

//Mobilephone�� ��ӹ���
class MusicPhone : public MobilePhone 
{
	void downloadMusic();
	void play();
};