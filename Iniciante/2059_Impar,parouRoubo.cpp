#include <iostream>

using namespace std;

int main()
{
    int p, j1, j2, r, a;
    int resultado;
    cin>>p;
    cin>>j1;
    cin>>j2;
    cin>>r;
    cin>>a;
    
    if(r==1 and a==1)
    {
        cout<<"Jogador 2 ganha!\n";
    }
    else if (r==1 and a==0)
    {
        cout<<"Jogador 1 ganha!\n";
    }
    else if (r==0 and a==1)
    {
        cout<<"Jogador 1 ganha!\n";
    }
    else
    {
        resultado=j1+j2;
        if(p==1)
        {
            if(resultado%2==0)
            {
                cout<<"Jogador 1 ganha!\n";
            }
            else
            {
                cout<<"Jogador 2 ganha!\n";
            }
        }
        else 
        {
            if(resultado%2==0)
            {
                cout<<"Jogador 2 ganha!\n";
            }
            else
            {
                cout<<"Jogador 1 ganha!\n";
            }
        }
    }
    return 0;
}