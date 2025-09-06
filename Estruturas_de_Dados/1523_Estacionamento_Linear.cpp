#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n, k;

    while (cin >> n >> k, n || k) {
        stack<int> estacionamento;
        bool flag = true;

        for (int i = 0; i < n; i++) 
        {
            int c, s;
            cin >> c >> s; //c - chegada; s - saida

            while (!estacionamento.empty() && estacionamento.top() <= c) 
            {
                estacionamento.pop();
            }

            if (estacionamento.size() >= k)
            {
                flag = false;
            } 
            else
            {
                if (estacionamento.empty()) 
                {
                    estacionamento.push(s);
                } 
                else
                {
                    if (estacionamento.top() > s) 
                    {
                        estacionamento.push(s);
                    }
                    else
                    {
                        flag = false;
                    }
                }
            }
        }

        if (flag) 
        {
            cout << "Sim" << endl;
        }
        else
        {
            cout << "Nao" << endl;
        }
    }

    return 0;
}