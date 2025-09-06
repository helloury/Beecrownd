#include <iostream>
 
using namespace std;
 
int main() {
 
   int i,v,n[10];
    cin>>v;
   for(i=0;i<10;i++)
   {
      
       cout<<"N["<<i<<"] = "<<v<<endl;
       v=v*2;
   }
 
    return 0;
}