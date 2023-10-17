#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define n 1000

int main()
{
	int i,k,l,j;
	int m[n]={0};
	for(i=2; i*i<n; i++)
	{
		for(j=i*i; j<n; j+=i)
		{
			m[j]=1;
		}
	}
	printf("\n");
	printf("prime numbers:\n");
	for(i=0; i<n ;i++)
	{
		if(i!=0 && i!=1)
		{
			if(m[i]==0)
			{
				printf("%d; ", i);
			}
		}
	}
	printf("\n");
	return 0;
}
