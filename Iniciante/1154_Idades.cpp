#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 int id,i;
    float m,s;
    s=0;
    i=0;
    cin>>id;
   while(id>-1)
   {
       s=s+id;
       i++;
       cin>>id;
   }
   m=s/i;
   cout<<fixed<<setprecision(2)<<m<<endl;
 
    return 0;
}