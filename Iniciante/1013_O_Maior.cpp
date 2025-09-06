#include <iostream>
 
using namespace std;
 
int main() {
    int maior;
    float A;
    double C,B;
    cin>>A>>B>>C;
    maior=(A+B+abs(A-B))/2;
    maior=(maior+C+abs(maior-C))/2;
    cout<<maior<<" eh o maior"<<endl;
    
 
    return 0;
}