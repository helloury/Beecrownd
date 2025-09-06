#include <iostream>
 
using namespace std;
 
int main() {
 
    int x,rest;
    cin>>x;
    cout<<x<<endl;
    cout<<x/100<<" nota(s) de R$ 100,00"<<endl;
    rest=x%100;
    cout<<rest/50<<" nota(s) de R$ 50,00"<<endl;
    rest=rest%50;
    cout<<rest/20<<" nota(s) de R$ 20,00"<<endl;
    rest=rest%20;
    cout<<rest/10<<" nota(s) de R$ 10,00"<<endl;
    rest=rest%10;
    cout<<rest/5<<" nota(s) de R$ 5,00"<<endl;
    rest=rest%5;
    cout<<rest/2<<" nota(s) de R$ 2,00"<<endl;
    rest=rest%2;
    cout<<rest/1<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}