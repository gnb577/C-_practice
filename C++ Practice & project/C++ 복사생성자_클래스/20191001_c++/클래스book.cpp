//#include "stdafx.h"
#include "book.h"
#include<iostream>
#include<string>
#include<cstring>

int main() {
	Book cpp("명품C++ ", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}
