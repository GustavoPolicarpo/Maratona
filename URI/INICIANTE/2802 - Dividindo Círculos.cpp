// Autor: Gustavo Policarpo<gustavo_votagus@hotmail.com>
// Nome: Dividindo Círculos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2802

#include <bits/stdc++.h>

//LIFE IS NOT A PROBLEM TO BE SOLVED

#define rep(i,a,b) for( int i = (int) a; i < (int) b; i++ )
#define F first
#define S second
#define pb push_back

using namespace std;

typedef long long int ll;


int main(){
	
	ll n; cin >> n;
	ll ans = (n*n*n*n - 6*n*n*n + 23*n*n - 18*n + 24)/24;
	cout << ans << '\n';
	
}
