#include <iostream>
 
using namespace std;
 
int main() {
 
   int i,t,x,par[5],impar[5];
    int cpar=0;
    int cimpar=0;
    
    for(i=0;i<15;i++)
    {
        cin>>x;
      if(x%2==0)
      {
          par[cpar]=x;
          cpar++;
          
      }
      else
      {
          impar[cimpar]=x;
          cimpar++;
      }
      if(cpar==5)
      {
          for(int t=0;t<5;t++)
          {
              cout<<"par["<<t<<"] = "<<par[t]<<endl;
          }
          cpar=0;
      }
      if(cimpar==5)
      {
          for(t=0;t<5;t++)
          {
              cout<<"impar["<<t<<"] = "<<impar[t]<<endl;
          }
          cimpar=0;
      }
    }
    for(i=0;i<cimpar;i++)
    {
        cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
    }
    for(i=0;i<cpar;i++)
    {
        cout<<"par["<<i<<"] = "<<par[i]<<endl;
    }
 
    return 0;
}