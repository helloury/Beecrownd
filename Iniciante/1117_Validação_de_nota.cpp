#include <iostream>
 
using namespace std;
 
int main() {
  float i,nota,media;
    int val=0;
    media=0;
   for(i=0;i<1000;i=i+1)
   {
       cin>>nota;
       if(nota>=0 and nota<=10)
       {
           media=media+nota;
            val=val+1;
       }
       else
       {
           cout<<"nota invalida"<<endl;
       }
       if(val==2)
       {
           break;
       }
   }
   cout<<"media = "<<media/2<<endl;
 
    return 0;
}