#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;

int main() 
{   
    float x1,p1,x2,p2,distancia;

    cout<<fixed<<setprecision(1);
    cin>>x1>>p1;
    cin>>x2>>p2;
    cout<<fixed<<setprecision(4);
    distancia=((x2-x1)*(x2-x1))+((p2-p1)*(p2-p1));
    cout<<sqrt(distancia)<<endl;
    
    return 0;
}