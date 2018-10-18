// Autor: Gustavo Policarpo<gustavo_votagus@hotmail.com>
// Nome: Proteja sua Senha
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2287

#define gc getchar
#define pc(x) putchar(x);
#include <bits/stdc++.h>

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
#define mod 1000000007
#define error 1e-7

typedef long long int ll;
typedef unsigned long long int ull;
typedef pair <int, int> ii;


void scanint(int &x)
{
    register int ccc = gc();
    x = 0;
    int neg = 0;
    for(;((ccc<48 || ccc>57) && ccc != '-');ccc = gc());
    if(ccc=='-') {neg=1;ccc=gc();}
    for(;ccc>47 && ccc<58;ccc = gc()) {x = (x<<1) + (x<<3) + ccc - 48;}
    if(neg) x=-x;
}

//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);


int main ()
{
	int N, z=1;
	while(scanf("%d", &N) and N){
		printf("Teste %d\n", z++);
		int mat[N][5][2]; char n[N][6];
		rep(i, 0, N){
			rep(j, 0, 5){
				rep(k, 0, 2)
					scanf("%d", &mat[i][j][k]);
			}
			rep(j, 0, 6)
				scanf(" %c", &n[i][j]);
		}
		string ans="";
		rep(i, 0, 6){
			int aux=mat[0][n[0][i]-'A'][0], yep=1;
			rep(j, 1, N){
				if(aux!=mat[j][n[j][i]-'A'][0] && aux!=mat[j][n[j][i]-'A'][1]){
					yep=false;
					break;
				}
			}
			if(yep){
				ans+=aux+'0';
				continue;
			}
			aux=mat[0][n[0][i]-'A'][1], yep=1;
			rep(j, 1, N){
				if(aux!=mat[j][n[j][i]-'A'][0] && aux!=mat[j][n[j][i]-'A'][1]){
					yep=false;
					break;
				}
			}
			if(yep){
				ans+=aux+'0';
				continue;
			}
		}
		rep(i, 0, 6) cout << ans[i] << ' ';
		cout << "\n\n";
	}
	
  
  return 0;
}