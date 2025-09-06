#include <iostream>
#include <iomanip>
#include <math.h> 

using namespace std;
 
int main() {
    double a,b,c,x1,x2,delta;
    
    cin>>a>>b>>c;
    delta=b*b-4*a*c;
    if(delta<0||a==0){
        cout<<"Impossivel calcular"<<endl;
    }
    else {
        x1=-b+sqrt(delta);
        x1=x1/(2*a);
        x2=-b-sqrt(delta);
        x2=x2/(2*a);
        cout<<"R1 = "<<fixed<<setprecision(5)<<x1<<endl;
        cout<<"R2 = "<<fixed<<setprecision(5)<<x2<<endl;
    }
 
    return 0;
}