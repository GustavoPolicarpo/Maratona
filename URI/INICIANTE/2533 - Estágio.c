// Autor: Gustavo Policarpo<gustavo_votagus@hotmail.com>
// Nome: Estágio
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2533

#include <stdio.h>
#include <math.h>

//LIFE IS NOT A PROBLEM TO BE SOLVED


int main()
{
	
	int m;
	while(scanf("%d", &m) !=EOF){
		
		double n[m], c[m], dem=0, sum=0; int i;
		for(i=0; i<m; i++){
			scanf("%lf %lf", &n[i], &c[i]);
			sum+=n[i]*c[i];
			dem+=c[i];
		}
		
		dem*=100;
		printf("%.4lf\n", sum/dem);
		
	}
	
	return 0;
	
}
