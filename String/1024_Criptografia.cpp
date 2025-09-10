#include <iostream>
#include <string>

using namespace std;

int main(){
	string letra;
	int N;
	cin >> N;
	cin.ignore();
	for(int i=0; i < N; i++){
		getline(cin,letra);
		for(size_t j = 0; j < letra.size(); j++){
			if(isalpha(letra[j])){
				letra[j] = letra[j] + 3;
			}
		}
		for(size_t j = 0, k = letra.length() - 1; j < k; j++, k--){//segunda passada				
			swap(letra[j],letra[k]);
		}

		int meio = letra.length()/2;
		for(size_t j = meio ; j < letra.length(); j++){
			letra[j] = letra[j] - 1;
		}
		cout << letra << endl;
	}
	return 0;
}