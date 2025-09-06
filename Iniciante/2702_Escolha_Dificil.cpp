#include <iostream>
 
using namespace std;
 
int main() {
 
    int a1, a2, a3, r1, r2, r3;
    int Disp1,Disp2,Disp3;
    cin>>a1>>a2>>a3;
    cin>>r1>>r2>>r3;
    
    if(r1 >= a1)
    {
        Disp1 = r1 - a1;
    }
    if(r2 >= a2)
    {
        Disp2 = r2 - a2;
    }
    if(r3 >= a3)
    {
        Disp3 = r3 - a3;
    }
    
    cout<< Disp1+Disp2+Disp3 << endl;
 
    return 0;
}