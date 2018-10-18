// Autor: Gustavo Policarpo<gustavo_votagus@hotmail.com>
// Nome: Divisores
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2238

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

#define INF 0x3f3f3f3f
#define MAXV 100001
#define mod 1000000007
#define error 1e-7

typedef long long int ll;
typedef unsigned long long int ull;
typedef pair < int, int > ii;
typedef pair < int, ii > iii;


/*void scanint(int &x)
{
    register int ccc = gc();
    x = 0;
    int neg = 0;
    for(;((ccc<48 || ccc>57) && ccc != '-');ccc = gc());
    if(ccc=='-') {neg=1;ccc=gc();}
    for(;ccc>47 && ccc<58;ccc = gc()) {x = (x<<1) + (x<<3) + ccc - 48;}
    if(neg) x=-x;
}*/

//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);



int main()
{
	ll A, B, C, D, fim;
	scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
	fim=sqrt(C*A) + 1;
	int ans=-1;
	
	for(int i=A; i<fim; i+=A ){
		if(i%A==0 && i%B!=0 && C%i==0 && D%i!=0){
			ans=i;
			break;
		}
	}
	
	printf("%d\n", ans);
	
	
	
return 0;
}
