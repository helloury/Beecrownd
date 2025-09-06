#include <iostream>
 
using namespace std;
 
int main() {
     int maiorN,i,n,pos;
    maiorN=0;
    pos=0;
    for(i=1;i<=100;i=i+1)
    {
       cin>>n;
       if(n>maiorN)
       {
         maiorN=n;
         pos=i;
       }
    }
    cout<<maiorN<<endl;
    cout<<pos<<endl;
 
    return 0;
}