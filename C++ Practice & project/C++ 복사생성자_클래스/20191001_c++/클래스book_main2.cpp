//#include "stdafx.h"
#include "book2.h"

int main() {

	Book2 cpp("명품C++ ", 10000);
	Book2 java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}
