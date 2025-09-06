#include <iostream>
 
using namespace std;
 
int main() {
 int i,t,pa,pb,j,ano;
    float g1,g2;
    cin>>t;
    for(i=1;i<=t;i=i+1)
    {
        cin>>pa;
        cin>>pb;
        cin>>g1;
        cin>>g2;
        ano=0;
        for(j=0;j<102;j=j+1)
        {
            pa+=pa*g1/100;
            pb+=pb*g2/100;
            ano=ano+1;
            if(pa>pb)
            {
                break;
            }
        }
        if(ano<101)
        {
             cout<<ano<<" anos."<<endl;
        }
        
        else
        {
            cout<<"Mais de 1 seculo."<<endl;
        }
    }
    
    return 0;
}