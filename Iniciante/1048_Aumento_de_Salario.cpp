#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 float x,re,novox;
    cin>>x;
    if(x<=400)
    {
        re=x*15/100;
        novox=re+x;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<novox<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<re<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
    else if (x>400 and x<=800)
    {
         re=x*12/100;
        novox=re+x;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<novox<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<re<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }
    else if (x>800 and x<=1200)
    {
         re=x*10/100;
        novox=re+x;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<novox<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<re<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }
    else if (x>1200 and x<=2000)
    {
         re=x*7/100;
        novox=re+x;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<novox<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<re<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
	 else if (x>2000)
    {
         re=x*4/100;
        novox=re+x;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<novox<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<re<<endl;
        cout<<"Em percentual: 4 %"<<endl;
    }
 
 
    return 0;
}