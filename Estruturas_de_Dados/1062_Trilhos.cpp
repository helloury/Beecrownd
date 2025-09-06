#include <iostream>
#include <stack>

using namespace std;

//Trilhos : usando pilha

int main()
{
	int N, T;
	while(cin >> N && N != 0)
	{
		while(cin >> T && T!=0)
		{
			int trem[N];
			trem [0] = T;
			for(int i = 1; i < N; i++)
			{
				cin >> trem[i];
			}

			stack<int>pilha;
			int it = 0;

			for(int i = 1; i <= N; i++)
			{
				pilha.push(i);
			
			    while(!pilha.empty() && pilha.top() == trem[it])
				{
					pilha.pop();
					it++;
				}
			}
			
			if(pilha.empty())
			{
				cout<<"Yes\n";
			}
			else
			{
				cout<<"No\n";
			}
		}
		cout << endl;
	}
	return 0;
}


