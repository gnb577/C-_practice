//#include "stdafx.h"
#include "book2.h"

int main() {

	Book2 cpp("��ǰC++ ", 10000);
	Book2 java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}
