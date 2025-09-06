#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
int i,n,fat;
    fat=1;
    cin>>n;
    for(i=0;i<(n-1);i=i+1)
    {
        fat*=(n-i);
    }
     cout<<fat<<endl;

    return 0;
}