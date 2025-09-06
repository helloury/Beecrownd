#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int i,j;
    double s,m[12][12];
    char o;
    cin>>o;
    s=0.0;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            cin>>m[i][j];
            if(j>i)
            {
                s=s+m[i][j];
            }
        }
    }
    if(o=='S')
    {
        cout<<fixed<<setprecision(1)<<s<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(1)<<s/66.0<<endl;
    }
        
 
    return 0;
}