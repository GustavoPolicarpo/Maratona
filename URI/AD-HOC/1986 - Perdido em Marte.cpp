// Autor: Gustavo Policarpo<gustavo_votagus@hotmail.com>
// Nome: Perdido em Marte
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1986

#include <bits/stdc++.h>

//LIFE IS NOT A PROBLEM TO BE SOLVED

#define rep(i,a,b) for( int i = (int) a; i < (int) b; i++ )
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define debug(a) cout << #a << " = " << a << endl;
#define debug2(a,b) cout << #a << " = " << a << " --- " << #b << " = " << b << endl;
#define debugP(a) cout << a.F << " " << a.S << endl;
#define debugM(mat,n,m) rep( i, 0, n ){ rep( j, 0, m ) cout << mat[i][j] << " "; cout << endl; }

using namespace std;

typedef long long int ll;
typedef pair<int,int> ii;

//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);



int main()
{
	
	//freopen("in.txt", "r", stdin);
	
	int N;
	while(cin >> N){
		int hex;
		rep(i, 0, N){
			scanf("%x", &hex);
			cout << (char)(hex);
		}	cout << '\n';
	}


	return 0;
}

