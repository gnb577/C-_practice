//#include "stdafx.h"
#include "book.h"
#include<iostream>
#include<string>
#include<cstring>

int main() {
	Book cpp("��ǰC++ ", 10000);
	Book java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}
