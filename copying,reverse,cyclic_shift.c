#include <stdio.h>
#include <stdlib.h>
#define n 10
void print_array(int A[])
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%3d ", A[i]);
	}
	printf("\n");
}
int main()
{
	int i, tmp; 
	int a[n];
	int b[n];
	for(i=0;i<n;i++)
	{
		a[i]=i;
	}
	print_array(a);
	for(i=0; i< n; i++)
	{
		b[i]=a[n-i-1];
	}
	print_array(a);
	print_array(b);
	tmp=a[n-1];
	for(i=n-1; i>=0; i--)
	{
		a[i]=a[i-1];
	}
	a[0]=tmp;
	print_array(a);
	return 0;
}
