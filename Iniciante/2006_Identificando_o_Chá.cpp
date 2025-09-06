#include <iostream>

using namespace std;

int main()
{
    int T, A, B, C, D, E;
    while (cin >> T)
    {
        int count=0;
        cin>>A>>B>>C>>D>>E;
        if(A == T)
        {
            count++;
        }
        if(B == T)
        {
            count++;
        }
        if(C == T)
        {
            count++;
        }
        if(D == T)
        {
            count++;
        }
        if(E == T)
        {
            count++;
        }
        cout<<count<<endl;
    }
}
