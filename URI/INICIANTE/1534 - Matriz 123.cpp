// Autor: Gustavo Policarpo<gustavo_votagus@hotmail.com>
// Nome: Matriz 123
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1534

#include<bits/stdc++.h>

//LIFE IS NOT A PROBLEM TO BE SOLVED

using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int bk=n;
		int M[n][n];
	
	
				for(int i=0; i<n; i++)
				{
					for(int j=0; j<n; j++)
					{
						M[i][j]=3;				
					}
						
				}
				for (int i=0, j=0; i<n; i++, j++)
				{
					M[i][j]=1;
				}
				for (int i=0, j=n-1; i<n; i++, j--)
				{
					M[i][j]=2;
				}
				
			
			for(int i=0; i<bk; i++)
			{
				for(int j=0; j<bk; j++)
				{
					cout << M[i][j];
					if(j==bk-1) cout << endl;	
				}
			}
			
	}
return(0);
}	
