#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 string s,r;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i=i+1)
    {
        cin>>s>>r;
        //sheldon ganha
        if(s=="tesoura" and r=="papel")
        {
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }
        else if(s=="papel" and r=="pedra")
        {
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }
        else if(s=="pedra" and r=="lagarto")
        {
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }
        else if (s=="lagarto" and r=="Spock")
        {
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }
        else if (s=="Spock" and r=="tesoura")
        {
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }
        else if(s=="tesoura" and r=="lagarto")
        {
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }
        else if (s=="lagarto" and r=="papel")
        {
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }
        else if(s=="papel" and r=="Spock")
        {
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }
        else if(s=="Spock" and r=="pedra")
        {
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }
        else if (s=="pedra" and r=="tesoura")
        {
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }
        //raj ganha
        else if (s==r)
        {
            cout<<"Caso #"<<i<<": De novo!"<<endl;
        }
        else 
        {
            cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
        }
    }

 
    return 0;
}