#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    float litros,h,km;
    cin>>h>>km;
    cout<<fixed<<setprecision(3);
    litros=(km/12)*h;
    cout<<litros<<endl;
 
    return 0;
}