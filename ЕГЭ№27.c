#include <stdio.h>
#include <math.h>

int main()
{
	int n, i, j;
	int m[n];
	scanf("%d", &n);
	int sum=0;
	for(i=0; i<n; i++)
		scanf("%d", &m[i]);
		
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(m[i]*m[j]%26==0)
			{
				sum++;	
			}	
		}	
	}
	printf("%d ", sum);
	return 0;
}
