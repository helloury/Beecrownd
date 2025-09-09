#include <iostream>

using namespace std;

int main()
{
	int N;
	int t, v;
	int soma=0;
	cin>>N;
	for(int i= 0; i < N; i++)
	{
	    cin>>t>>v;
	    soma =soma + (t * v);
	}
	cout<<soma<<endl;
	return 0;
}
