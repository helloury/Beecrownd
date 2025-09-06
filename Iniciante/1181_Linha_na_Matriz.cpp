#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int l,i,j;
    double s,m[12][12];
    char t;
    cin>>l;
    cin>>t;
    s=0.0;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            cin>>m[i][j];
            if(i==l)
            {
                s=s+m[i][j];
            }
        }
    }
    if(t=='S')
    {
        cout<<fixed<<setprecision(1)<<s<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(1)<<s/12.0<<endl;
    }
       
 
    return 0;
}