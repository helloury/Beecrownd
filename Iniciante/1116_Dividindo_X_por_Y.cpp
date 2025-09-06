#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
       int x,y,n,i,rest;
    cin>>n;
    for(i=0;i<n;i=i+1)
    {
        cin>>x>>y;
        if(y==0)
        {
             cout<<"divisao impossivel"<<endl;
        }
        else
        {
             float rest=(float)x/(float)y;
            cout<<fixed<<setprecision(1)<<rest<<endl;
        }
    }

 
    return 0;
}