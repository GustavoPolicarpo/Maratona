// Autor: Gustavo Policarpo<gustavo_votagus@hotmail.com>
// Nome: Sanduicheiche
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2153

#include<bits/stdc++.h>

//LIFE IS NOT A PROBLEM TO BE SOLVED

using namespace std;

#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define reo(i,a,b) for(int i = int(a); i > int(b) ; i--)
#define rei(i,a,b) for(int i = int(a); i < int(b) ; i=i)
#define pb push_back
#define mp make_pair
#define F first
#define S second

#define INF 0x3F3F3F3F
#define MAXV 100001

typedef long long int ll;
typedef unsigned long long int ull;
typedef pair < int, int > ii;
typedef pair < double, int > iii;

//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);

int main()
{
	string in;
	while(cin >> in){
		int tam=in.size()-1, fim=tam;
		for(int i=tam-1; i>=0; i--){
			if(in[tam]==in[i]){
				int ini=i, j=i, k=tam;
				while(in[j]==in[k]){
					j--, k--;
				}
				if(k<=ini){
					fim=ini;
				}
			}
		}
		rep(i, 0, fim+1)
			cout<<in[i];
		cout << endl;
	}


return 0;
}


