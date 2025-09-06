#include <iostream>
 
using namespace std;
 
int main() {
 
    int i,j,n[20];
  for(i=0;i<20;i++)
  {
    cin>>n[i];
  }
  j=0;
  for(i=19;i>=0;i--)
  {
    cout<<"N["<<j++<<"] = "<<n[i]<<endl;
  }
 
    return 0;
}