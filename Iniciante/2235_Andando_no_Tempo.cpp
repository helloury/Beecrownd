#include <iostream>
 
using namespace std;
 
int main() {
 
   int A,B,C;
    
    cin>>A>>B>>C;
    
    if((A+C)==B||(A+B)==C||(C+B)==A||A==B||B==C||A==C)
    {
        cout<<"S"<<endl;
    }
    else{
        cout<<"N"<<endl;
    }


    return 0;
}