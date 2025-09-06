#include <iostream>
 
using namespace std;
 
int main() {
 
    int H, E, A, O, W, X, bem, mal;
    cin>> H >> E >> A >> O >> W >> X;
    bem=H+E+A;
    mal=O+W;
    if(bem<mal)
    {
        bem+=X;
        if(bem<mal)
        {
            cout<<"Sauron has returned."<<endl;
        }
        else
        {
            cout<<"Middle-earth is safe."<<endl;
        }
    }
    else{
        cout<<"Middle-earth is safe."<<endl;
    }
 
 
    return 0;
}