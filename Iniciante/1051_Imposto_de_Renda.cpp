#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
  float x,taxa;
   cin>>x;
   if (x>0 and x<=2000)
   {
       cout<<"Isento"<<endl;
   }
   else if (x>2000 and x<=3000)
   {
       taxa=(x-2000)*8/100;
       cout<<"R$ "<<fixed<<setprecision(2)<<taxa<<endl;
   }
   else if (x>3000 and x<=4500)
   {
       taxa=(1000*8)/100;
       taxa=(x-3000)*18/100+taxa;
       cout<<"R$ "<<fixed<<setprecision(2)<<taxa<<endl;
   }
   else if (x>4500)
   {
       taxa=((1000*8)/100)+((1500*18)/100);
       taxa=(x-4500)*28/100+taxa;
       cout<<"R$ "<<fixed<<setprecision(2)<<taxa<<endl;
   }
   
    return 0;
}