// Autor: Gustavo Policarpo<gustavo_votagus@hotmail.com>
// Nome: Criptotexto
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2866

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
	
    int T; cin >> T; string lixo; getline(cin, lixo);
    while(T--){
        string s; getline(cin, s); string t;
        rep(i, 0, s.size()){
            if(s[i]>='a' && s[i]<='z') t.pb(s[i]);
        }
        reverse(t.begin(), t.end());
        cout << t << '\n';
    }
	

	return 0;
} 
