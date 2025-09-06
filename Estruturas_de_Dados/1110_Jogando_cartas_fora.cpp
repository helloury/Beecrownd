#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n;
    while (cin >> n && n != 0) {
        cout << "Discarded cards:";
        queue<int> filinha;

        for (int i = 1; i <= n; i++)
            filinha.push(i);

        bool first = true; // Para formatar a vírgula corretamente

        // Processa as cartas até restar apenas uma
        while (filinha.size() > 1) 
        {
            // Imprime a carta descartada
            if (first) 
            {
                cout << " " << filinha.front();
                first = false;
            } 
            else 
            {
                cout << ", " << filinha.front();
            }
            filinha.pop();               
            filinha.push(filinha.front());
            filinha.pop();              
        }
        cout << endl;
        cout << "Remaining card: " << filinha.front() << endl;
    }
    return 0;
}