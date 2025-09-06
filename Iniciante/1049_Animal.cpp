#include <iostream>
#include <string>
using namespace std;
 
int main() {
 string filo,classe,ordem;
    cin>>filo>>classe>>ordem;
    if (filo=="vertebrado")
    {
        if(classe=="ave")
        {
            if (ordem=="carnivoro")
            {
                cout<<"aguia"<<endl;
            }
            else if (ordem=="onivoro")
            {
                cout<<"pomba"<<endl;
            }
        }
        if(classe=="mamifero")
        {
            if(ordem=="onivoro")
            {
                cout<<"homem"<<endl;
            }
            else if(ordem=="herbivoro")
            {
                cout<<"vaca"<<endl;
            }
        }
    }
    if(filo=="invertebrado")
    {
        if(classe=="inseto")
        {
            if(ordem=="hematofago")
            {
                cout<<"pulga"<<endl;
            }
            else if(ordem=="herbivoro")
            {
                cout<<"lagarta"<<endl;
            }
        }
		if(classe=="anelideo")
        {
            if(ordem=="hematofago")
            {
                cout<<"sanguessuga"<<endl;
            }
            else if(ordem=="onivoro")
            {
                cout<<"minhoca"<<endl;
            }
        }
    }
 
    return 0;
}