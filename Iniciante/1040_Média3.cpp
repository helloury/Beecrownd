#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double n1,n2,n3,n4,media,mediaF,exame;
    cin>>n1>>n2>>n3>>n4;
    media=(n1*2.0+n2*3.0+n3*4.0+n4*1.0)/10.0;
    cout<<fixed<<setprecision(1);
    if (media>=5.0 and media<=6.9)
    {cin>>exame;
    }
    cout<<"Media: "<<media<<endl;
    if (media<=4.9)
    {cout<<"Aluno reprovado."<<endl;
    }else if (media>=7.0)
    {cout<<"Aluno aprovado."<<endl;
    }else
    if (media>=5.0 and media<=6.9)
    { cout<<"Aluno em exame."<<endl;
      cout<<"Nota do exame: "<<exame<<endl;
      mediaF=(media+exame)/2;
      if (mediaF>=5.0)
      {cout<<"Aluno aprovado."<<endl;
     
      cout<<"Media final: "<<mediaF<<endl;
      }
      else
      {cout<<"Aluno reprovado."<<endl;
      cout<<"Media final: "<<mediaF<<endl;
      }
    }

    return 0;
}