#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
  int n,i;
    cin>>n;
    for(i=0;i<n;i=i+1)
    {
        cout<<i+1<<" "<<pow(i+1,2)<<" "<<pow(i+1,3)<<endl;
    }

 
    return 0;
}