#include <iostream>
 
using namespace std;
 
int main() {
 
  int i,n,x[101],c1=0,c2=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
        if(x[0]<x[1])
        {
            for(i=0;i<n-1;i++)
            {
                if(i%2==0)
                {
                    if(x[i]<x[i+1])
                    {
                        c1++;
                    }
                }
                else
                {
                    if(x[i]>x[i+1])
                    {
                        c2++;
                    }
                }
            }
        }
            else if(x[0]>x[1])
            {
                for(i=0;i<n-1;i++)
                {
                    if(i%2==0)
                    {
                        if(x[i]>x[i+1])
                        {
                            c1++;
                        }
                    }
                    else
                    {
                        if(x[i]<x[i+1])
                        {
                            c2++;
                        }
                    }
             
                }
            }
            if(c1+c2+1==n)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
    
    return 0;
}