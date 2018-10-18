// Autor: Gustavo Policarpo<gustavo_votagus@hotmail.com>
// Nome: Pontos de Feno
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1261

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
#define error 1e-8

typedef long long int ll;
typedef unsigned long long int ull;
typedef pair < int, int > ii;
typedef pair < double, int > iii;

int main()
{
	int N, M; cin >> N >> M;
	map <string, int> val;
	char aux[50]; int temp;
	rep(i, 0, N){
		scanf("%s %d", &aux, &temp);
		val[aux]=temp;
	}
	while(M--){
		int out=0;
		while(scanf("%s", &aux) && aux[0]!='.'){
			if(val.count(aux))
				out+=val[aux];
		}
		printf("%d\n", out);
	}
	
return 0;
}
