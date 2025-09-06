#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 float num,sum,med;
    int i,c;
    sum=0;
    c=0;
    for(i=1;i<=6;i=i+1)
    {
        cin>>num;
        if(num>0)
        {
           sum=sum+num;
           c=c+1;
        }
    }
    med=sum/c;
    cout<<c<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<med<<endl;

   
 
    return 0;
}