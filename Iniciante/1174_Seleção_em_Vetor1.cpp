#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
   int i;
   float a[100];
   for(i=0;i<100;i++)
   {
       cin>>a[i];
       if(a[i]<=10)
       {
           cout<<"A["<<i<<"] = "<<fixed<<setprecision(1)<<a[i]<<endl;
       }
   }
    return 0;
}