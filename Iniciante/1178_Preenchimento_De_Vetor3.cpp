#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int i;
    double n[100],j;
    cin>>j;
    for(i=0;i<100;i++)
        {
            n[i]=j;
            cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<n[i]<<endl;
            j=j/2;
        }
 
    return 0;
}