#include <iostream>
#include <iomanip>
 
using namespace std;

int main()
{
    double A,B;
    cout<<fixed<<setprecision(1);
    cin>>A;
    cin>>B;
    cout<<fixed<<setprecision(5);
    cout<<"MEDIA = "<<((A*3.5)+(B*7.5))/11<<endl;
    
    return 0;
}