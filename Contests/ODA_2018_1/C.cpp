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
	
	int d, m, a, dd, mm, aa;
	cin >> d >> m >> a >> dd >> mm >> aa;
	int ans = aa-a;
	if(mm < m || (mm==m && dd<d)) ans--;
	cout << ans << '\n';
	
	
	return 0;
}
