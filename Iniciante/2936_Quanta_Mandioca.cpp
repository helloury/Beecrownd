#include <iostream>

using namespace std;

int main()
{
    int C, B, Bo, M, I,total;
    total = 225;
    cin>>C>>B>>Bo>>M>>I;
    total += (C* 300) + (B * 1500) + (Bo* 600) + (M * 1000) + (I * 150);
    cout<<total<<endl;
    return 0;
}