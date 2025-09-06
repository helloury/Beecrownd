#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int c;
    float q,total;
    cin>>c>>q;
    if (c==1)
  {total=q*4.0;
  }else if (c==2)
  {total=q*4.5;
  }else if (c==3)
  {total=q*5.00;
  }else if (c==4)
  {total=q*2.0;
  }else 
  {total=q*1.50;
  }
  cout<<"Total: R$ "<<fixed<<setprecision(2)<<total<<endl;
}