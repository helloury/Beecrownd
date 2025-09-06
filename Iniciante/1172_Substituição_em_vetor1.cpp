#include <iostream>
 
using namespace std;
 
int main() {
 
     int i,p,x[10];
    for(i=0;i<10;i++)
    {
        cin>>x[i];
        
        if(x[i]>=1)
        {
            cout<<"X["<<i<<"] = "<<x[i]<<endl;
        }
        else
        {
             cout<<"X["<<i<<"] = 1"<<endl;
        }
    }
 
    return 0;
}