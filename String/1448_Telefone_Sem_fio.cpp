#include <iostream>
#include <string>

using namespace std;

int main() {
    string inst,T1,T2;
    int t;

    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++) {
        getline(cin, inst);
        getline(cin,T1);
        getline(cin,T2);

        int count1 = 0;
        int count2 = 0;

        // primeiro percorremos contando os acertos
        for (size_t j = 0; j < inst.size(); j++) {
            if (inst[j] == T1[j]) count1++;
            if (inst[j] == T2[j]) count2++;
        }

        cout << "Instancia " << i + 1 << endl;

        if (count1 > count2) {
            cout << "time 1" << endl;
        } else if (count2 > count1) {
            cout << "time 2" << endl;
        } else {
            // empate -> verificar quem acertou primeiro quando o outro errou
            bool desempate = false;
            for (size_t j = 0; j < inst.size(); j++) {
                bool acerto1 = (inst[j] == T1[j]);
                bool acerto2 = (inst[j] == T2[j]);

                if (acerto1 != acerto2) { 
                    // só entra aqui quando um acertou e o outro errou
                    if (acerto1) {
                        cout << "time 1" << endl;
                    } else {
                        cout << "time 2" << endl;
                    }
                    desempate = true;
                    break;
                }
            }
            if (!desempate) {
                cout << "empate" << endl;
            }
        }
        cout << endl;
    }

    return 0;
}
