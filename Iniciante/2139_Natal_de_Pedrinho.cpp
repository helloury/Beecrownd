#include <iostream>
using namespace std;

int main() {
    int mes, dia;
    
    while (cin >> mes >> dia) 
    {
        if (mes == 12 && dia == 25)
        {
            cout << "E natal!" << endl;
        } 
        else if (mes == 12 && dia == 24) 
        {
            cout << "E vespera de natal!" << endl;
        } 
        else if (mes == 12 && dia > 25) 
        {
            cout << "Ja passou!" << endl;
        } 
        else {
            // Calcula os dias que faltam até o Natal para outras datas
            int dias_para_natal;
            if (mes == 12) 
            {
                dias_para_natal = 25 - dia;
            } 
            else {
                int dias_no_mes[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
                dias_para_natal = dias_no_mes[mes] - dia;
                
                for (int i = mes + 1; i < 12; i++) {
                    dias_para_natal += dias_no_mes[i];
                }
                dias_para_natal += 25;
            }
            cout << "Faltam " << dias_para_natal << " dias para o natal!" << endl;
        }
    }
    return 0;
}