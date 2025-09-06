#include <iostream>

using namespace std;

int main() {

    int hi, hf, mi, mf, tempoh, tempom;
    cin >> hi >> mi >> hf >> mf;

    if (hi == hf && mi == mf) {
        tempoh = 24;
        tempom = 0;
    } else {
       
        int minutos_inicial = hi * 60 + mi;
        int minutos_final = hf * 60 + mf;
        if(minutos_final < minutos_inicial)
        {
            minutos_final += 24*60;
        }
        
        int diferenca_minutos = minutos_final - minutos_inicial;

        tempoh = diferenca_minutos / 60;
        tempom = diferenca_minutos % 60;
    }

    cout << "O JOGO DUROU " << tempoh << " HORA(S) E " << tempom << " MINUTO(S)" << endl;

    return 0;
}