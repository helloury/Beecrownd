#include <iostream>
 
using namespace std;
 
int main() {
 int i,n,l,p;
    p=1;
    l=4;
    cin>>n;
    for(i=1;i<=n*4;i=i+1)
    {
        if(p==l)
        {
            cout<<"PUM"<<endl;
            p=1;
        }
        else
        {
            cout<<i<<" ";
            p=p+1;
        }
    }
 
    return 0;
}