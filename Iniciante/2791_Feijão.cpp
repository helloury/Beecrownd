#include <iostream>
 
using namespace std;
 
int main() {
   int C[5];
   int pos;
   for(int i = 1;i < 5; i++)
   {
       cin>>C[i];
   }
   for(int i = 1; i < 5; i++)
   {
       if(C[i]==1)
       {
           pos=i;
       }
   }
   cout<<pos<<endl;

    return 0;
}