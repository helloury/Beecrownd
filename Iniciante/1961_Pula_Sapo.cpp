#include <iostream>

using namespace std;

int main(){
    int P, N;
    cin>>P>>N;
    int altura[N];
    for(int i=0; i<N; i++)
    {
        cin>>altura[i];
    }
    bool pulo = true;
    for(int i=0; i <N - 1; i++)
    {
        int dif = 0;
        dif = abs(altura[i] - altura[i+1]);
        if(altura[i] <= altura[i+1]) //Quando o Cano i+1 é MAIOR 
        {
            if(dif > P) //diferença maior ou igual ao pulo
            {
                pulo = false;
            }
            
        }
        else
        {
            if(altura[i] >= altura[i+1])//Cano i+1 é menor
            {
                if(dif > P)//diferença maior que o pulo
                {
                    pulo = false;
                }
            }
            
        }
        
    }
    if (pulo)
    {
        cout<<"YOU WIN"<<endl;

    }
    else
    {       
        cout<<"GAME OVER"<<endl;
    }
    
    return 0;
}