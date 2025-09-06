#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
  int n,i,v;
    cin>>n;
    for(i=0;i<n;i=i+1)
    {
        cin>>v;
        if(v==0)
        {
            cout<<"NULL"<<endl;
        }
        else if(v<0 and v%2==0)
        {
            cout<<"EVEN NEGATIVE"<<endl;
        }
        else if(v>0 and v%2!=0)
        {
            cout<<"ODD POSITIVE"<<endl;
        }
        else if(v>0 and v%2==0)
        {
            cout<<"EVEN POSITIVE"<<endl;
        }
        else if(v<0 and v%2!=0)
        {
            cout<<"ODD NEGATIVE"<<endl;
        }
    }
  
 
    return 0;
}