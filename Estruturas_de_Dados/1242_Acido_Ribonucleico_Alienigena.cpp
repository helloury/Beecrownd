#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	string RNA;

	while(cin>>RNA)
	{
		stack<char> P;
		int sum = 0;
		for(int i=0; i < RNA.length(); i++)
		{
			//pares B e S, C e F
			if(P.empty())
			{
				P.push(RNA[i]);
			}
			else
			{
				if(P.top() == 'B' && RNA[i] == 'S' || P.top() == 'S' && RNA[i] == 'B')
				{
					P.pop();
					sum++;
				}
				else
				{
					if(P.top() == 'C' && RNA[i] == 'F' || P.top() == 'F' && RNA[i] == 'C')
					{
						P.pop();
						sum++;
					}
					else
					{
						P.push(RNA[i]);
					}
				}
			}
			
		}
		cout<< sum <<endl;
	}
return 0;
}