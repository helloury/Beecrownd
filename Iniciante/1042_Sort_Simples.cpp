#include <iostream>
 
using namespace std;
 
 
    void ordena(int* a, int* b, int* c) 
{
    int aux;
    int A = *a;
    int B = *b;
    int C = *c;

    if (*a > *b || *a > *c) {
        if (*b < *c) {
            aux = *a;
            *a = *b;
            *b = aux;
        }
        else {
            aux = *a;
            *a = *c;
            *c = aux;
        }
    }
    if (*b > *c) {
        aux = *c;
        *c = *b;
        *b = aux;
    }

    cout << *a << endl << *b << endl << *c << endl << endl;
    cout << A << endl << B <<endl << C << endl;
}

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;

    ordena(&a, &b, &c);

    return 0;
}