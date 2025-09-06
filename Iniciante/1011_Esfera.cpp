#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    
    double R;
    float pi;
    cin>>R;
    cout<<fixed<<setprecision(3);
    cout<<"VOLUME = "<<4/3.0*3.14159*R*R*R<<endl;
 
    return 0;
}