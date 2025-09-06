#include <iostream>
 
using namespace std;
 
int main() {
   float i,j;
    for(i=0,j=0;i<2.2;i=i+0.2,j=j+0.2)
    {
        cout<<"I="<<i<<" J="<<j+1<<endl;
        cout<<"I="<<i<<" J="<<j+2<<endl;
        cout<<"I="<<i<<" J="<<j+3<<endl;
    }
 
    return 0;
}