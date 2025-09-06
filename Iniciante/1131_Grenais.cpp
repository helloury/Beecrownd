#include <iostream>
 
using namespace std;
 
int main() {
 
    int gre,in,g,i;
    int inter=0;
    int gremio=0;
    int empate=0;
    int grenal=0;
    for(i=0;i<1000;i=i+1)
    {
        cin>>gre>>in;
        if(gre>in)
        {
            inter=inter+1;
        }
        if(gre<in)
        {
            gremio=gremio+1;
        }
        if(gre==in)
        {
            empate=empate+1;
        }
        grenal=grenal+1;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>g;
         if(g==2)
        {
          break;
        }
    }   
    cout<<grenal<<" grenais\n";
    cout<<"Inter:"<<inter<<endl;
    cout<<"Gremio:"<<gremio<<endl;
    cout<<"Empates:"<<empate<<endl;
    if(inter>gremio)
    {
        cout<<"Inter venceu mais\n";
    }
    if(inter<gremio)
    {
        cout<<"Gremio venceu mais\n";
    }
    if(inter==gremio)
    {
        cout<<"Nao houver vencedor\n";
    }
 
    return 0;
}