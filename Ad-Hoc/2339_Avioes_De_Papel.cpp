#include <iostream>
 
using namespace std;
 
int main() {
 
    int C;
    double P, F, resu;
    cin>> C >> P >> F;
    resu = P/F;
    if(resu == C || resu > C)
    {
        cout<<"S"<<endl;
    }
    else{
        cout<<"N"<<endl;
    }
    return 0;
}