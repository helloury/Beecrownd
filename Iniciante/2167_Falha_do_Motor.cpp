#include <iostream>
 
using namespace std;
 
int main() {
 
    int i,pos,n,j;
    cin>>n;
    int x[n];
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    bool a=true;
    for(j=0;j<n-1;j++)
    {
        if(x[j+1]<x[j])
        {
           a=false;
            cout<<j+2<<endl;
            break;
        }
        
    }
    if(a)
    {
        cout<<"0\n";
    }
 
    return 0;
}