#include <iostream>
 
using namespace std;
 
int main() {
   double x;
    cin>>x;
    if
       (x<0||x>100){
       cout<<"Fora de intervalo\n";
       }else{
           if
           (x>=0 and x<=25.0000){
            cout<<"Intervalo [0,25]\n";
           }
           else
           if (x>=25.00001 and x<=50.0000000){
            cout<<"Intervalo (25,50]\n";
           }
           else
           if (x>=50.00000001 and x<=75.00000000){
           cout<<"Intervalo (50,75]\n";
           }
         else{
           x>=75.0000000001 and x<=100.0000000000;
           cout<<"Intervalo (75,100]\n";
         }
       }
    return 0;
}