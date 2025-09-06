#include <iostream>
 
using namespace std;
 
int main() {
  int i,aux,x,y;
    cin>>x>>y;
    if (y<x)
    {
        aux=x;
        x=y;
        y=aux;
    }
    for(i=x+1;i<y;i=i+1)
    {
        if((i%5==2)||(i%5==3))
        {
            cout<<i<<endl;
        }
    }
 
    return 0;
}