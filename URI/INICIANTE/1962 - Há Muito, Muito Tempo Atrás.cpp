// Autor: Gustavo Policarpo<gustavo_votagus@hotmail.com>
// Nome: Há Muito, Muito Tempo Atrás
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1962

#include<iostream>
#include<iomanip>
#include<string>
#include<sstream>
#include<cctype>
#include <cmath>


//LIFE IS NOT A PROBLEM TO BE SOLVED

using namespace std;

int  N, T, S;


int main()
{
	cin >> N;
	while(N--)
	{
		cin >> T;
		if(T>=2015) S=2014-T;
		else S=2015-T;
		if(S<0)
		{
			cout << abs(S) << " A.C." << endl;
		}
		else
		{
			cout << S << " D.C." << endl;
		}
		
	}
 
}

