#include <iostream>
 
using namespace std;
 
int main() {
 
    double x;
    int rest,rest1,D;
    cin>>x;
    D=x*100;
    cout<<"NOTAS:"<<endl;
    cout<<D/10000<<" nota(s) de R$ 100.00"<<endl;
    rest=D%10000;
    cout<<rest/5000<<" nota(s) de R$ 50.00"<<endl;
    rest=rest%5000;
    cout<<rest/2000<<" nota(s) de R$ 20.00"<<endl;
    rest=rest%2000;
    cout<<rest/1000<<" nota(s) de R$ 10.00"<<endl;
    rest=rest%1000;
    cout<<rest/500<<" nota(s) de R$ 5.00"<<endl;
    rest=rest%500;
    cout<<rest/200<<" nota(s) de R$ 2.00"<<endl;
    rest=rest%200;
    cout<<"MOEDAS:"<<endl;
    cout<<rest/100<<" moeda(s) de R$ 1.00"<<endl;
    rest=rest%100;
    rest1=(x-rest)*100;
    rest1=rest%100;
    cout<<rest1/50<<" moeda(s) de R$ 0.50"<<endl;
    rest1=rest1%50;
    cout<<rest1/25<<" moeda(s) de R$ 0.25"<<endl;
    rest1=rest1%25;
    cout<<rest1/10<<" moeda(s) de R$ 0.10"<<endl;
    rest1=rest1%10;
    cout<<rest1/5<<" moeda(s) de R$ 0.05"<<endl;
    rest1=rest1%5;
    cout<<rest1/1<<" moeda(s) de R$ 0.01"<<endl;
 
    return 0;
}