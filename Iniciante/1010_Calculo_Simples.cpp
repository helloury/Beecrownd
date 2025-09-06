#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int C1,C2;
    float N1,V1,N2,V2;
    cin>>C1>>N1>>V1;
    cin>>C2>>N2>>V2;
    cout<<fixed<<setprecision(2);
    cout<<"VALOR A PAGAR: R$ "<<(V1*N1+V2*N2)<<endl;
 
    return 0;
}