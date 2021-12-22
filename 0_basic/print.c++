#include<iostream>

double area(int r); //함수 원형 선언

int main(){
    int n = 3;
    char c = '#';
    std::cout << c << 5.5 << '-' <<"hello" << true << std::endl;
    std::cout << "n+5=" << n+5 << std::endl;
    std::cout << "area is " << area(n);
    //std::cout << "면적은" << area(n); 
}

 double area(int r){
     return 3.14*r*r;
 }