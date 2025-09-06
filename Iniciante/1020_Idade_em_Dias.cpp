#include <iostream>
 
using namespace std;
 
int main() {
 
    int d,rest;
    cin>>d;
    cout<<d/365<<" ano(s)"<<endl;
    rest=d%365;
    cout<<rest/30<<" mes(es)"<<endl;
    cout<<rest%30<<" dia(s)"<<endl;
    return 0;
    
}