#include <iostream>
using namespace std;

int main()
{
   cout << "input count? :";
   int n;
   cin >> n;
   
   int *p=new int(n);
   for(int i=0;i<n;i++){
       cout << i <<"th number input :";
       cin >> p[i];
   }
   for(int i=0;i<n;i++){
         cout << p[i] <<endl;
   }
   delete []p;

}