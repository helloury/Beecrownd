#include <iostream>

using namespace std;

int main()
{ 
    int N, caso=1;
    double oleo[10];
while (cin>>N){
    int senha[N];
    for (int i = 0; i < 10; i++)
    {
        cin>>oleo[i];
    }
    for(int i = 0; i < N;i++)
    {
        int maior = 0;
        for(int j = 0; j < 10;j++)
        {
            if(oleo[j]>oleo[maior])
            {
                maior=j;
            }
        }
        senha[i]=maior;
        oleo[maior]=-1;
    }
    cout<< "Caso " << caso << ": ";
    for(int i = 0; i < N; i++)
    {
        cout<<senha[i];
    }
    cout<<endl;
    caso++;
  }
    return 0;
}