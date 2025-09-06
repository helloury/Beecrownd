#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int N, X, Y;
    double valor;
  cin>> N >> X >> Y;
  valor=(double)N/(X+Y);
  cout<<fixed<<setprecision(2)<<valor<<endl;
 
    return 0;
}