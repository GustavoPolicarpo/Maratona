// Autor: Gustavo Policarpo<gustavo_votagus@hotmail.com>
// Nome: Escadinha
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2782

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
	
	int n; cin >> n;
	int a[n];
	rep(i, 0, n) cin >> a[i];
	
	if(n==1){
		cout << 1 << '\n';
		return 0;
	}
	
	int i=0, j=0, diff, ans = 0;
	while(i<n-1){
		int last = i;
		diff = a[i+1]-a[i]; i++;
		while(i<n-1){
			int aux = a[i+1]-a[i];
			if(aux==diff) i++;
			else break;
		}
		if(i>j) ans++;
		j = max(j, i);
		i = last+1;
	}
	
	cout << ans << '\n';
	
	return 0;
}
