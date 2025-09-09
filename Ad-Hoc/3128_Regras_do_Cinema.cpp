#include <iostream>

using namespace std;
 
int main() {
 
    int idade1, idade2;
    cin>>idade1>>idade2;
    bool entrou = true;
    if(idade1 >= 18 || idade2 >= 18)
    {
        if(idade1 < 6 || idade2 < 6)
        {
            entrou = false;
        }
    }
    else
    {
        if(idade1 >= 14 && idade2 >=14)
        {
            entrou = true;
        }
        else
        {
            entrou = false;
        }
    }
    if(entrou)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
 
    return 0;
}