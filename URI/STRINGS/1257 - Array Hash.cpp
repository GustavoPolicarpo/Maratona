// Autor: Gustavo Policarpo<gustavo_votagus@hotmail.com>
// Nome: Array Hash
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1257

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

typedef long long int ll;
typedef unsigned long long int ull;
typedef pair < int, int > ii;
typedef pair < double, int > iii;


int main()
{
	int N, L; cin >> N;
	while(N--){
		int L; cin >> L;
		string in; ll out=0;
		rep(i, 0, L){
			cin >> in;
			rep(j, 0, in.size())
				out+=i+j+in[j]-'A';
		}
		cout << out << endl;
	}
		
return 0;
}
