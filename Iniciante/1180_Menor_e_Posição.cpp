#include <iostream>
 
using namespace std;
 
int main() {
 
   int i,n;
    int menor=1000;
    int pos=0;
    cin>>n;
    int x[n];
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        if(x[i]<menor)
        {
            menor=x[i];
            pos=i;
        }
    }
    cout<<"Menor valor: "<<menor<<endl;
    cout<<"Posicao: "<<pos<<endl;
 
    return 0;
}