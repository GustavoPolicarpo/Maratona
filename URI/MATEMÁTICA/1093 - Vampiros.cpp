// Autor: Gustavo Policarpo<gustavo_votagus@hotmail.com>
// Nome: Vampiros
// Nível: 5
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1093

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
	double ev1, ev2, at, d, p, q, prob;
	
	while(scanf("%lf %lf %lf %lf", &ev1, &ev2, &at, &d) !=EOF){
		if(!(ev1 + ev2)) break;
		
		int aux=0;
		while(ev1>0) ev1-=d, aux++; ev1=aux; aux=0;
		while(ev2>0) ev2-=d, aux++; ev2=aux;
		
		p=at/6.0, q=1.0-p;
		
		if(p==q) prob = ev1/(ev1+ev2);
		
		else prob=(1-pow(q/p, ev1)) / (1-pow(q/p, ev1+ev2));
		
		printf("%.1lf\n", prob*100.0);
	}


return 0;
}
