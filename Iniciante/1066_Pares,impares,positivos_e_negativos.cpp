#include <iostream>
 
using namespace std;
 
int main() {
 int i,n;
    int pos,neg,imp,par;
    par=0;
    imp=0;
    pos=0;
    neg=0;
    for(i=0;i<=4;i=i+1)
    {
        cin>>n;
        if(n%2==0)
        {
            par=par+1;
        }
        else if(n%2!=0) 
        {
            imp=imp+1;
        }
        if(n>0)
        {
            pos=pos+1;
        }
        else if(n<0)
        {
            neg=neg+1;
        }
    }
    cout<<par<<" valor(es) par(es)"<<endl;
    cout<<imp<<" valor(es) impar(es)"<<endl;
    cout<<pos<<" valor(es) positivo(s)"<<endl;
    cout<<neg<<" valor(es) negativo(s)"<<endl;
  
 
    return 0;
}