#include <iostream>
 
using namespace std;
 
int main() {
 int i,n,t1,t2,res;
    t1=0;
    t2=1;
    cin>>n;
    cout<<"0";
    for(i=0;i<n-1;i=i+1)
    {
        cout<<" "<<t2;
        res=t2;
        t2+=t1;
        t1=res;
    }
    cout<<endl;
 
    return 0;
}