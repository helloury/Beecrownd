#include <iostream>
#include <stack>

using namespace std;

// Função para determinar a precedência dos operadores
int precedencia(char operador) 
{
    if (operador == '+' || operador == '-') return 1;
    if (operador == '*' || operador == '/') return 2;
    if(operador == '^') return 3;
    return 0; // Para outros casos
}

int main() {
    int N,tam; // Número de expressões
    cin >> N;

    for (int k = 0; k < N; ++k) {
        string expressao;
        cin >> expressao;

        stack<char> pilha;
        
        tam = expressao.length();
        for(int i = 0; i < tam; ++i)
            {
            // Verifica se é uma letra ou um número diretamente pelos intervalos ASCII
            if (isalpha(expressao[i]) || isdigit(expressao[i])) 
            {
                cout << expressao[i];
            }
            else if (expressao[i] == '(' || expressao[i] == '^') 
            {
                pilha.push(expressao[i]);
            } 
            else if (expressao[i] == ')') 
            {
                // Fecha parêntese: desempilha até encontrar '('
                while (!pilha.empty() && pilha.top() != '(') 
                {
                    cout << pilha.top();
                    pilha.pop();
                }
                if (!pilha.empty()) pilha.pop(); // Remove o '('
            }
            else 
            {
                // Operadores: desempilha operadores de maior ou igual precedência
                while (!pilha.empty() && pilha.top() != '(' && precedencia(expressao[i]) <= precedencia(pilha.top())) 
                {
                    cout << pilha.top();
                    pilha.pop();
                }
                pilha.push(expressao[i]); // Empilha o operador atual
            }
        }
        // Esvazia a pilha
        while (!pilha.empty()) 
        {
            cout << pilha.top();
            pilha.pop();
        }
        cout << endl;
    }

    return 0;
}
