#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int Abasfinal= N;
    cin.ignore();
    string abas[M];
    for(size_t i = 0; i < M; i++)
    {
        getline(cin,abas[i]);
        if(abas[i] =="clicou")
        {
            Abasfinal--;
        }
        else if(abas[i] =="fechou")
        {
            Abasfinal++;
        }
    }
    cout<<Abasfinal<<endl;
    return 0;
}