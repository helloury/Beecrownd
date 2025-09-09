#include <iostream>
 
using namespace std;
 
int main() {
 
   int T, A, W, C, total;
  while(cin>>T>>A>>W>>C){
    total=(A*100)/T;
   if(total>=C)
  {
    cout<<"critical"<<endl;
  }
  else if(total>=W)
  {
    cout<<"warning"<<endl;
  }
  
  else{
      cout<<"OK"<<endl;
  }
}
    return 0;
}