#include <iostream>

using namespace std;

int main()
{   //2 pessoas clika no SEGUNDO dobro que clica no TERCEIRO 
    //clica no segundo é a metade clica no primeiro
    int t;
    cin>>t; //achar o segundo 
    int link= t*2;
    link = link * 2;
    cout<<link<<endl;
    return 0;
}
