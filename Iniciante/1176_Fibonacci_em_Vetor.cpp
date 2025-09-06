#include <iostream>
 
using namespace std;
 
int main() {
 
   int i,j,x,t;
  long long fib[61];
  fib[0]=0;
  fib[1]=1;
  cin>>t;
  for(i=2;i<61;i++)
  {
     fib[i]=fib[i-2]+fib[i-1];
  }
  
   for(j=0;j<t;j++)
  {
    cin>>x;
    cout<<"Fib("<<x<<") = "<<fib[x]<<endl;
      
  }
 
    return 0;
}