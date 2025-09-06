#include <iostream>
 
using namespace std;
 
int main() {
 
    int N, H, P, RH1=0, RH2=0, RH3=0, RH4=0, presente=0;
    string E, G;
    cin>>N;
    for(int i=0; i < N; i++)
    {
        cin>>E>>G>>H;
        if(G=="bonecos")
        {
            P=(H+RH1)/8;
            RH1=(H+RH1)%8;
        }
        else if(G=="arquitetos")
        {
            P=(H+RH2)/4;
            RH2=(H+RH2)%4;
        }
        else if(G=="musicos")
        {
            P=(H+RH3)/6;
            RH3=(H+RH3)%6;
        }
        else if(G=="desenhistas")
        {
            P=(H+RH4)/12;
            RH4=(H+RH4)%12;
        }
        presente+=P;
    }
    cout<<presente<<endl;
    
 
    return 0;
}