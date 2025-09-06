#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
  string a,b,c,d;
    int x,y,n;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c>>d;
        cin>>x>>y;
        x=x+y;
        
        if(x%2==0)
        {
            if(b=="PAR")
            {
                cout<<a<<endl;
            }
                else
                {
                    cout<<c<<endl;
                }
        }
        else
        {
            if(b=="PAR")
            {
                cout<<c<<endl;
            }
            else
            {
                cout<<a<<endl;
            }
        }
    }    
 
    return 0;
}