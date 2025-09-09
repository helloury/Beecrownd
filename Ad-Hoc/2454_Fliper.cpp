#include <iostream>
 
using namespace std;
 
int main() {
   int P, R;
   cin>> P >> R;
   if(P == 1 && R == 1)
   {
       cout<<"A\n";
   }
   else if(P == 1 && R == 0)
   {
       cout<<"B\n";
   }
   else 
   {
       cout<<"C\n";
    }
    return 0;
}