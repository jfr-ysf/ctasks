#include <stdio.h>
#include <math.h>
#include <locale.h>
char* setlocale(LC_ALL, "Rus");
/***
{	printf("exercise №8.16:");
	int sum2, sum3, sum1;
	int max1,max2, max_sum;
	int i,j,l;
	int a,b;
	max1=-1;
	max2=-1;
	max_sum=-1;
	a=12;
	b=3;
	int n[12][3];
	int m[12]={0};
	int m1[3]={0};
	for(i=0; i<12; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Enter the salary of %d employee in the %d month: \n", i+1, j+1);
			scanf("%d", &n[i][j]);
			if(n[i][j]<=32767 && n[i][j]>0)
			{
				if(n[i][j]>m[i])
				{
					m[i]=j+1;
				}
				if(n[i][j]>m1[j])
				{
					m1[j]=i+1;
				}
			}
			else
			{
				printf("wrong value of the number, enter again \n");
				scanf("%d", &n[i][j]);
			}
		}
	}
	for(l=0; l<12; l++)
	{
		printf("the highest salary %d worker was in the %d month \n", l+1,m[l] );
	}
	for(a=0;a<3;a++)
	{
		printf("the highest salary in the %d month was given to %d worker \n", a+1,m1[a] );
	}
    return 0;}
***/
int main(){
	char name[10000];
	scanf("%s", name);
	printf("  , %s\n", name);
	return 0;
}