#include <iostream>

using namespace std;
 
int main() {

  int T,B,l1,l2;
  float gua,dab,a1,d1,a2,d2;
    cin>>T;
    for(int i=0; i < T; i++)
    {
        cin>>B;
        cin>>a1>>d1>>l1;
        cin>>a2>>d2>>l2;
        dab=(a1+d1)/2.0;
        gua=(a2+d2)/2.0;
        if(l1%2==0)
        {
            dab+=B;
        }
        if(l2%2==0)
        {
            gua+=B;
        }
        if(dab>gua)
        {
            cout<<"Dabriel"<<endl;
        }
        if(gua>dab)
        {
            cout<<"Guarte"<<endl;
        }
        if(dab == gua )
        {
            cout<<"Empate"<<endl;
        }
    }
        return 0;
}