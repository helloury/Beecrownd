#include <iostream>
#include <iomanip>
#include <string.h>
 
using namespace std;
 
int main() {

    int i,n,j;
    string nome;
    double minN,maxN,nota,dif,res;
    
   cin>>n;
   for(i=0; i<n ; i++)
   {
       cin>>nome;
       cin>>dif;
        minN=100.00;
        maxN=-10.00;
        res=0;
       for(j = 0; j < 7 ; j++)
       {
           cin>>nota;
           
            if(nota < minN)
           {
               minN=nota;
           }
           if(nota > maxN)
           {
               maxN=nota;
           }
           res +=nota;
           
        }
        res= res - (maxN+minN);
        res*=dif;
        cout<<nome<<" ";
        cout<<fixed<<setprecision(2)<<res<<endl;
       
   }
    return 0;
}