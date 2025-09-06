#include <iostream>
 
using namespace std;
 
int main() {
    int i,codm,cod,a;
    double medm,med;
    medm=0;
    cin>>a;
    for(i=0;i<a;i=i+1)
    {
        cin>>cod;
        cin>>med;
        
        if(med>medm)
        {
            medm=med;
            codm=cod; 
        }
    }
        if (medm>=8.0)
        {
            cout<<codm<<endl;
        }
        else
        {
            cout<<"Minimum note not reached"<<endl;
        }

    return 0;
}