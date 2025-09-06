#include <iostream>
 
using namespace std;
 
int main() {
 float a,b,c,aux;
    cin>>a>>b>>c;
    if (a<b or a<c)
     {
         if(b>c)
         {
             aux=a;
             a=b;
             b=aux;
         }
         else 
         {
             aux=a;
             a=c;
             c=aux;
         }
         
     }
    if (b<c)
    {
        aux=c;
        c=b;
        b=aux;
    }    
    if (a>=b+c)
    {
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    else {
        if (a*a==b*b+c*c)
    {
        cout<<"TRIANGULO RETANGULO"<<endl;
    }
    if (a*a>b*b+c*c)
    {
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
	if (a*a<b*b+c*c)
    {
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
     if (a==b and b==c)
    {
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }
     if ((a==b and a!=c)||(b==c and b!=a)||(c==a and c!=b))
    {
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }
        }
 
    return 0;
}