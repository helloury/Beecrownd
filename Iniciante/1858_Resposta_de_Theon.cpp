#include <iostream>
 
using namespace std;
 
int main() {
 
   int N;
   int pos=0;
   int menor=1000;
   
   cin >> N;
   int T[N];
   for(int i = 1; i <= N; i++)
   {
       cin>>T[i];
    }
    for(int i = 1; i <= N; i++)
    {
        if(menor>T[i])
        {
            menor = T[i];
            pos = i;
        }
    }
    cout<<pos<<endl;
    
    return 0;
} 
