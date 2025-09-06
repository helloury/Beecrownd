#include <iostream>
 
using namespace std;
 
int main() {
 
    int linha,coluna;
   cin>>linha>>coluna;
   if(linha%2==0 and coluna%2==0)
   {
       cout<<"1"<<endl;
   }
   else if(linha%2==1 and coluna%2==1)
   {
       cout<<"1"<<endl;
   }
   else
   {
       cout<<"0"<<endl;
   }

 
    return 0;
}