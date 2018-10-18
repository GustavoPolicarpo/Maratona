// Autor: Gustavo Policarpo<gustavo_votagus@hotmail.com>
// Nome: Circuito Bioquímico Digital
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1486

#define gc getchar_unlocked
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
#define mod 1000000007

typedef long long int ll;
typedef unsigned long long int ull;
typedef pair < int, int > ii;
typedef pair < int, ii > iii;

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

int N, M, C, mat[1001][1001];
int main()
{
	while(1){
		//scanf("%d %d %d", &N, &M, &C);
		scanint(N), scanint(M), scanint(C);
		if(!N) break;
		rep(i, 0, M)
		rep(j, 0, N) scanint(mat[i][j]);
		
		int cnt=0, aux=0;
		
		rep(j, 0, N){
			aux=0;
			rep(i, 0, M){
				//cout << i << " " << j << " " << mat[i][j] << endl;
				if(mat[i][j]==1){
					aux++;
					if(aux==C) cnt++;
				}
				else  aux=0;
			}
		}
		
		printf("%d\n", cnt);
	}
	

return 0;
}



