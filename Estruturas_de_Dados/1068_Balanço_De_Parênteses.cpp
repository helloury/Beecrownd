#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int i, tam;
	string expressao;
	stack<char> pilha;
	while(cin >> expressao)
	{
		while(!pilha.empty())
		{
			pilha.pop();
		}
		tam = expressao.length();
		bool valid = true;
		for(int i = 0; i < tam; ++i)
		{
			if(expressao[i] == '(')
			{
				pilha.push('(');
			}
			else if(expressao[i] == ')')
			{
				if(pilha.empty())
				{
					valid = false;
				}
				else
				{
					pilha.pop();
				}
			}
		}
		if(valid && pilha.empty())
		{
			cout<<"correct\n";
		}
		else
		{
			cout<<"incorrect\n";
		}
	}
	return 0;
}