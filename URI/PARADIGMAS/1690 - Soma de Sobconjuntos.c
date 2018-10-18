// Autor: Gustavo Policarpo<gustavo_votagus@hotmail.com>
// Nome: Soma de Sobconjuntos
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1690

#include <stdio.h>
#include <stdlib.h>

//LIFE IS NOT A PROBLEM TO BE SOLVED

int cmp (const void * a, const void * b){
	return ( *(int*)a - *(int*)b );
}

int main()
{
	
	int T; scanf("%d", &T);
	
	while(T--){
		
		int N; scanf("%d", &N);
		int n[N], i;
		
		for( i=0; i<N; i++ ) scanf("%d", &n[i]);
		
		qsort(n, N, sizeof(int), cmp);
		
		long long sum=0;
		
		for( i=0; i<N; i++ ){
			if(n[i] > sum+1) break;
			sum+=n[i];
		}
		
		printf("%lld\n", sum+1);
		
	}
	
	return 0;
	
}
