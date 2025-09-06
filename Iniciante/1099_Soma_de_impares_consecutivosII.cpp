#include <iostream>

using namespace std;

int main()
{
    int X, Y, N;
    int maior, menor;
    
    cin>>N;
    for (int i=0; i<N; i++)
    {
        cin>>X>>Y;
        if (X > Y)
        {
            maior = X;
            menor = Y;
        }
        else
        {
            maior = Y;
            menor = X;
        }
        int soma_primo = 0;
        for(int j=menor+1; j < maior;j++)
        {
            if(j%2 == 1) //é impar
            {
                soma_primo+= j;
            }
        }
        cout << soma_primo <<endl;
    }
    return 0;
}