#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int i,j;
    double media, soma, m[12][12];
    char o;
    cin>>o;
    soma=0.0;
    media=0.0;
    
   for(i=0; i<12 ;i++)
    {
        for(j=0; j<12 ;j++)
        {
            cin>>m[i][j];
            if( i+j > 11)
            {
              soma=soma+m[i][j];
              media++;
            }
        }
    }
    if(o=='S')
    {
        cout<<fixed<<setprecision(1)<<soma<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(1)<<soma/media<<endl;
    }
    return 0;
}