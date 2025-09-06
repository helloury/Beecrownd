#include <iostream>
 
using namespace std;
 
int main() {
 int i,j;
    for(i=1,j=7;i<=9;i=i+2,j=j+2)
    {
        cout<<"I="<<i<<" J="<<j<<endl;
        cout<<"I="<<i<<" J="<<j-1<<endl;
        cout<<"I="<<i<<" J="<<j-2<<endl;
    } 

 
    return 0;
}