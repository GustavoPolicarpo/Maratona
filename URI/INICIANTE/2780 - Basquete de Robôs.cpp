// Autor: Gustavo Policarpo<gustavo_votagus@hotmail.com>
// Nome: Basquete de Robôs
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2780

#include <bits/stdc++.h>

//LIFE IS NOT A PROBLEM TO BE SOLVED

using namespace std;

#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second

typedef long long int ll;
typedef pair < int, int > ii;

//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);


int main(){
	
	int d; cin >> d;
	if(d<=800) puts("1");
	else if(d<=1400) puts("2");
	else if(d<=2000) puts("3");
	
	return 0;
}
