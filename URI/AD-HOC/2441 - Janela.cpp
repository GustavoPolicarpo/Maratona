// Autor: Gustavo Policarpo<gustavo_votagus@hotmail.com>
// Nome: Janela
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2441

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



int main()
{
	int n[3]; cin >> n[0] >> n[1] >> n[2];
	sort(n, n+3);
	ll out=0;
	
	if(n[0]>0) out+=(n[0])*100;
	if(n[1]-n[0]-200>0) out+=(n[1]-n[0]-200)*100;
	if(n[2]-n[1]-200>0) out+=(n[2]-n[1]-200)*100;
	if(600-n[2]-200>0) out+=(600-n[2]-200)*100;
	
	cout << out << '\n';

	return 0;
	
}