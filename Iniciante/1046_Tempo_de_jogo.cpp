#include <iostream>
 
using namespace std;
 
int main() {
  int inicial,final,tempo;
    cin>>inicial>>final;
    if(inicial<final)
    {
        tempo=final-inicial;
        cout<<"O JOGO DUROU "<<tempo<<" HORA(S)"<<endl;
    }
    else if (inicial>final)
    {
        tempo=24-(inicial-final);
        cout<<"O JOGO DUROU "<<tempo<<" HORA(S)"<<endl;
    }
    else if (inicial==final)
    {
        tempo=24;
        cout<<"O JOGO DUROU "<<tempo<<" HORA(S)"<<endl;
    }
 
    return 0;
}