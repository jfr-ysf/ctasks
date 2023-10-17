#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c,d;
	int x,y;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	x=(a*d)+(b*c);
	y=(b*d);
	int i;
	int z, g;
	for(i=0; i<x; i++)
	{
		z=x%i;
		g=y%i;
		if(z==0 && g==0)
		{
			x=x/i;
			y=y/i;
		}
	}
	printf("%d \n %d", x,y);
	return 0;
}
