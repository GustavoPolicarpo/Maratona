// Autor: Gustavo Policarpo<gustavo_votagus@hotmail.com>
// Nome: Errrou!
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2868

#include <bits/stdc++.h>

//LIFE IS NOT A PROBLEM TO BE SOLVED

#define rep(i,a,b) for( int i = (int) a; i < (int) b; i++ )
#define F first
#define S second
#define pb push_back

using namespace std;

typedef long long int ll;
typedef pair<int, int> ii;

int main(){
	
    int T; cin >> T;
    while(T--){
    	int a, b, c, d; char op;
    	scanf("%d %c %d = %d", &a, &op, &b, &c);
    	if(op=='+') d = abs(a+b-c);
    	else if(op=='-') d = abs(a-b-c);
    	else if(op=='x') d = abs(a*b-c);
    	cout << "E";
    	rep(i, 0, d) cout << 'r';
    	cout << "ou!\n";
	}
	

	return 0;
} 
