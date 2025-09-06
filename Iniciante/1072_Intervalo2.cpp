#include <iostream>
 
using namespace std;
 
int main() {
 
     int i,x,n,in,out;
    in=0;
    out=0;
    cin>>n;
    for(i=0;i<n;i=i+1)
    {
        cin>>x;
        if(x>=10 and x<=20)
        {
            in=in+1;
        }
        else
        {
            if(x>0)
            {
               out=out+1;
           }
        }
    }
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;
 
    return 0;
}