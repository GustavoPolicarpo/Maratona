// Autor: Gustavo Policarpo<gustavo_votagus@hotmail.com>
// Nome: Quadro De Medalhas
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2312

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


typedef long long int ll;
typedef unsigned long long int ull;
typedef pair < int, int > ii;
typedef pair < int, ii > iii;

//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);

struct win{
	int ouro, prata, bronze;
	string nome;
};

bool cmp(win a, win b){
	if(a.ouro>b.ouro) return true;
	if(b.ouro>a.ouro) return false;
	
	if(a.prata>b.prata) return true;
	if(b.prata>a.prata) return false;
	
	if(a.bronze>b.bronze) return true;
	if(b.bronze>a.bronze) return false;
	
	return a.nome<b.nome;
}

int main()
{
	int N; cin >> N; win n[N];
	
	rep(i, 0, N){
		cin >> n[i].nome >> n[i].ouro >> n[i].prata >> n[i].bronze;
	}
	
	sort(n, n+N, cmp);
	
	rep(i, 0, N){
		cout << n[i].nome << " " << n[i].ouro << " " << n[i].prata << " " << n[i].bronze << '\n';
	}
	

return 0;
}



