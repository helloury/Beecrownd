#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct TAmigo 
{
    string nome;
    bool amigo;
    int tam;
};

bool compara(TAmigo a, TAmigo b) 
{
    if (a.amigo && !b.amigo)
        return true;
    if (!a.amigo && b.amigo)
        return false;
    return a.nome < b.nome;
}

int main() 
{
    vector<TAmigo> amigos;
    TAmigo winner;
    winner.tam = 0;
    string nome, resp;
    
    while (cin >> nome >> resp && nome != "FIM")
	{
        TAmigo novoAmigo;
        novoAmigo.nome = nome;
        novoAmigo.tam = nome.length();
        
        if (resp == "YES") 
		{
            novoAmigo.amigo = true;
            if (novoAmigo.tam > winner.tam) 
			{
                winner = novoAmigo; // Atualiza o vencedor
            }
        }
		else 
		{
            novoAmigo.amigo = false;
        }

        amigos.push_back(novoAmigo);
    }

    // Ordenando os amigos: primeiro os "YES", depois em ordem alfabética
    sort(amigos.begin(), amigos.end(), compara);

    for (int i = 0; i < amigos.size(); i++) 
	{
        for (int j = i + 1; j < amigos.size(); j++) 
		{
            if (amigos[i].nome == amigos[j].nome) 
			{
                amigos.erase(amigos.begin() + j);
                j--;
            }
        }
    }

    // Exibindo a lista de amigos e "não amigos"
    bool first = true;
    for (int i = 0; i < amigos.size(); i++) 
	{
        if (first) 
		{
            cout << amigos[i].nome << endl;
            first = false;
        } 
		else 
		{
            cout << amigos[i].nome << endl;
        }
    }

    cout << "\nAmigo do Habay:\n" << winner.nome << endl;

    return 0;
}
