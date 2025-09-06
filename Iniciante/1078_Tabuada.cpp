#include <iostream>
 
using namespace std;
 
int main() {
 int i,n,res;
    cin>>n;
    for(i=1;i<=10;i=i+1)
    {
        res=i*n;
        cout<<i<<" x "<<n<<" = "<<res<<endl;
    }
    return 0;
}