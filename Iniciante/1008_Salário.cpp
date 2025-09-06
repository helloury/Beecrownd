#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int f;
    float h,s;
    cin>>f;
    cin>>h;
    cin>>s;
    cout<<fixed<<setprecision(2);
    cout<<"NUMBER = "<<f<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"SALARY = U$ "<<s*h<<endl;
 
    return 0;
}