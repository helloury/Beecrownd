#include <iostream>
#include <iomanip>
#include <string>
 
using namespace std;
 
int main() {
 
     string nome;
   double vendas,salario;
   cin>>nome;
   cin>>salario;
   cin>>vendas;
   cout<<fixed<<setprecision(2);
   cout<<"TOTAL = R$ "<<(salario+(vendas*15/100))<<endl;
   cout<<fixed<<setprecision(2);
 
    return 0;
}