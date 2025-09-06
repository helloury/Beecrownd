#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
  int a,b,c,z;
    cin>>a;
    while(a!=0)
    {
        cin>>b>>c;
        z=sqrt(a*b*100/c);
        cout<<z<<endl;
        cin>>a;
    }
 
 
    return 0;
}