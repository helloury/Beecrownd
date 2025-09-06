#include <iostream>
 
using namespace std;
 
int main() {

    int a1,a2,a3,min;
    cin>>a1>>a2>>a3;
    int andar1 =  2 * a2 + 4 * a3;
    int andar2 =  2 * a1 + 2 * a3;
    int andar3= 4 * a1 + 2 * a2 ;
    
    if (andar1 <= andar2 && andar1 <= andar3)
    {
        min = andar1;
    }
    else if (andar2 <= andar1 && andar2 <= andar3 )
    {
        min = andar2;
    }
    else 
    {
        min = andar3;
    }
    cout<< min << endl;
    return 0;
}