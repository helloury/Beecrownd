#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    int n, j;
    cin >> n;
	for(int i = 0; i < n; i++){
	bool primo = true;
	int p;
	cin >> p;
    if (p < 2) {
        primo = false; 
    } else {
        for (j = 2; j <= sqrt(p); j++) {
            if (p % j == 0) {
                primo = false; // marca que não é primo
            }
        }
    }

    if (primo)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;
}

    return 0;
}
