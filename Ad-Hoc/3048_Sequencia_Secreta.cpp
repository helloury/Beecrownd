#include <iostream>

using namespace std;

int main()
{
	int N;
	cin>>N;
	int V[N];
	if(N>=3 && N<= 500)
	{
		int count1=0;
		int count2=0;
		int aux;
		for(int i = 0; i < N; i++)
		{
			cin >> V[i];
		}
		for(int i = 0; i < N; i++)
		{
			aux = V[i+1];
			if (V[i] != V[i+1])
			{
				count1++;
			}
		}
        for(int i = 0; i < N-1; i++)
        {
		    if(V[i+1] != V[i+2])
		    {
			   count2++;
		    }
        }
		if(count1 >= count2)
		{
			cout<<count1<<endl;
		}
		else
		{
			cout<<count2<<endl;
		}
	}
	return 0;
}