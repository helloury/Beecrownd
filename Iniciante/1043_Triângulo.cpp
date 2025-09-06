#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
  float a,b,c,area,p;
    cin>>a>>b>>c;
   if (a<b+c and b<c+a and c<a+b)
   { 
       area=a+b+c;
       cout<<"Perimetro = "<<fixed<<setprecision(1)<<area<<endl;
   }
   else 
   {
       p=(a+b)*c/2;
       cout<<"Area = "<<fixed<<setprecision(1)<<p<<endl;
   }
 
    return 0;
}