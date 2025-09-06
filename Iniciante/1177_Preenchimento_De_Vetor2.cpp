#include <iostream>
 
using namespace std;
 
int main() {
 
    int i,j,t;
    cin>>t;
    int a[t];
    for(j=0,i=0;i<1000;i++)
        {
            cout<<"N["<<i<<"] = "<<j<<endl;
            j++;
            if(j==t)
            {
                j=0;
            }
        }
 
    return 0;
}