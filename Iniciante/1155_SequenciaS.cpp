#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
   int i;
    float s;
    s=0;
    for(i=1;i<=100;i=i+1)
    {
        s+=1/(float)i;
    } 
     cout<<fixed<<setprecision(2)<<s<<endl;
 
    return 0;
}