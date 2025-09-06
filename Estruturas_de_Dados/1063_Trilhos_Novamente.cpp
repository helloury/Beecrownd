#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int num;

    // Leitura até que o número de elementos seja zero
    while (cin >> num && num)
        {
            vector<char> perm(num), obj(num);
            
            for (int i = 0; i < num; ++i)
                {
                     cin >> perm[i];
                }
            for (int i = 0; i < num; ++i)
                {
                    cin >> obj[i];
                }

            stack<char> temp;
            int pos = 0;
            bool possible = true;

            for (int i = 0; i < num; ++i)
                {
    
                    while (pos < num && (temp.empty() || temp.top() != obj[i])) 
                    {
                        temp.push(perm[pos++]); // Empilha caracteres da permutação
                        cout << "I"; // Indica operação de entrada (push)
                    }

                    if (!temp.empty() && temp.top() == obj[i])
                    {
                        temp.pop(); 
                        cout << "R"; 
                    } else 
                    {
                        possible = false;
                    }
                }

                if (!temp.empty() || !possible)
                cout << " Impossible";
                cout << endl;
        }
    return 0;
}
