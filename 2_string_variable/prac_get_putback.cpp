#include <iostream>
#include <string>

using namespace std;

int main(){

char c;
int n;
string str;

cout << "input char or int : ";
c = cin.get();
cin.putback(c);
if(c >= '0' && c <= '9'){
cin >> n;
cout << "integer type : " << n << endl;
}
else{
cin >> str;
cout << "char type: " << str << endl;
}

return 0;
}
