#include <iostream>
#include <cstring>
 
using namespace std;
 
int main() {
 
   int n,f,p,i;
    char dir[1002];
    cin>>n;
   while(n!=0)
   {
       cin>>dir;
       p=90;
       for(i=0;i<strlen(dir);i++)
       {
           if(dir[i]=='E')
           {
               p+=90;
           }
           else if(dir[i]=='D')
           {
               p-=90;
           }
       }
       f=p%360;
       if(f==0)
       {
           cout<<"L"<<endl;
       }
       else if (f==90)
       {
           cout<<"N"<<endl;
       }
       else if (f==180)
       {
           cout<<"O"<<endl;
       }
       else
       {
           cout<<"S"<<endl;
       }
       cin>>n;
   }
 
    return 0;
}