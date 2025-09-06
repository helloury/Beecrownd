#include <iostream>
 
using namespace std;
 
int main() {
    int qnt,i,n,min,max,alt;
  
    while(cin>>n>>min>>max)
    {
         qnt=0;
         
       for(i=0;i<n;i++)
      {
        cin>>alt;
        if(alt>=min and alt<=max)
        {
            qnt+=1;
        }
      }
       cout<<qnt<<endl;
    }
 
    return 0;
}