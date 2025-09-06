#include <iostream>
 
using namespace std;
 
int main() {
   int i,pin;
    pin=1;
    while(pin!=2002)
    {
        cin>>pin;
        
      if(pin==2002)
        {
            cout<<"Acesso Permitido"<<endl;
            return 0;
        }
     else
        {
            cout<<"Senha Invalida"<<endl;
        }
    }
 
    return 0;
}