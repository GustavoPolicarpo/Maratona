// Autor: Gustavo Policarpo<gustavo_votagus@hotmail.com>
// Nome: Conversa Internacional
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1581

#include<bits/stdc++.h>

//LIFE IS NOT A PROBLEM TO BE SOLVED

using namespace std;


int main()
{
	int N;
	cin >> N;
	while(N--)
	{
		int p;
		cin >> p;
		cin.ignore();
		vector <string> t;
		while(p--)
		{
			string temp;
			cin >> temp;
			t.push_back(temp);
		}
		string aux=t[0];
		int s=1;
		for(int i=1; i<t.size()-1; i++)
		{
			if(t[i]!=aux)
			{
				s=0; 
				break;
			}
		}
		if(s==0) cout << "ingles" << endl;
		else cout << aux << endl;
	}
	
		
return (0);
}
