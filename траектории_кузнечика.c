#include <stdio.h>

int tr(int n){
	int M[n+1];
	M[0]=0;
	M[1]=1;
	int i;
	for(i=2; i<=n; i++)
	{
		M[i]=M[i-1]+M[i-2];
	}
	return M[n];
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%d is %d\n", n, tr(n));
	return 0;
}

