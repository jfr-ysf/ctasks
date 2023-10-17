#include <stdio.h>
#include <math.h>
#include <errno.h>
#define n 10
void pns();
int main(){
	int i,p,q, M[n],t;
	for(i=0; i<n; i++)
		M[i]=i;
	while(scanf("%d %d", &p, &q)==2)
	{
		if(M[p]==M[q])	continue;
		for(t=M[p], i=0; i<n; i++)
			if(M[i]==t)	M[i]=M[q];
		printf("  %d %d\n", p,q);
	}
	pns(13);
	return 0;
}
