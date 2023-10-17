#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max 32768
int aps(int a[], int n){
	/******
	APS - any possible sum
	******/
}
int sum_of_elements(int a[], int n){
	int i,b=0;
	for(i=0; i<n; i++)	b+=a[i];
	return b;
}
void fill_in_by_zeros(int a[], int l){
	int i;
	for(i=0; i<l; i++)	a[i]=0;
}
void print_array(int a[], int l){
	int i;
	for(i=0; i<l; i++)	printf("%d ", a[i]);
	printf("\n");
}
void array_reverse(int a[],int n){
	int i=0,j=n-1,tmp, mid=n/2;
	while(i<mid && j>mid){
		tmp=a[i];
		a[i]=a[j];
		a[j]=tmp;
		i++;
		j--;
	}
	print_array(a, n);
}
int search(int a[],int n, int a1){
	int i;
	for(i=0; i<n; i++)	if(a[i]==a1)	return 1;
	return 0;
}
int gcd(int a, int b){
	/************************
	Function of finding the greatest common divisor,
	using the euclid's algorithm. 
	************************/
	if(a==b)	return a;
	if(a>b){
		if(a%b==0)	return b;
		gcd(b, a%b);
	}
	else{
		if(b%a==0)	return a;
		gcd(a, b%a);
	}
}
int fib(int n){
	int f[n+1];
	f[0]=0;
	f[1]=1;
	int i;
	for(i=2; i<n+1; i++)	f[i]=f[i-1]+f[i-2];
	return f[n];
}
void pns(int n){
	/**************
	This is algorithm of finding prime numbers,
	using the eratosphen's sieve
	pns - prime number's sieve 
	**************/
	int i,k,j;
	int m[n];
	k=0;
	fill_in_by_zeros(m,n);
	for(i=2; i*i<n; i++)	for(j=i*i; j<n; j+=i)	m[j]=1;
	printf("\n");
	printf("prime numbers:\n");
	for(i=0; i<n ;i++)	if(i>1 && m[i]==0)	{	printf("%d; ", i);	k+=1;	}	
	printf("\n");
	/*int a[k];*/
}
void randrange(int start, int n, int a){
	/****************************
	Function is choosing pseudorandom numbs in the range
	from 'start' to 'n' in amount of 'a'.
	WARNING: 'a' shouldn't be greater than 'n',
	otherwise function can return identical numbers several times.
	****************************/
	int i=0;
	printf("%d",start);
}
void eight_14(){
	int i,j,z;
    int sum[12];
    int numbers[12][3];
    for(i = 0; i < 12; i++)
    {
        for(j=0;j<3; j++)
        {
            scanf("%d", &numbers[i][j]);
        }
	    sum[i]+=numbers[i][0]+numbers[i][1]+numbers[i][2];
	}
    printf("8.16 b):");
    for(z=0; z<12; z++)
    {
    	printf("The summary salary of 1 worker in qrtr: %d \n", sum[z]);
	}
}
void eight_15(){
	int i, j,k;
	int *p=&i;
	int max1=-1;
	int s_max=-1;
	int sum[3];
	int numbs[3][5];
	for(i=0; i<3; i++)
	{
		printf("the %d player:", i+1);
		for(j=0; j<5; j++)
		{
			scanf("%d", &numbs[i][j]);
			if(numbs[i][j]>max1)
			{
			 	max1=numbs[i][j];
			}
		}
		sum[i]=numbs[i][0]+numbs[i][1]+numbs[i][2]+numbs[i][3]+numbs[i][4];
	}
	for(k=0; k<3; k++)
	{
		if(sum[k]>s_max)
		{
			*p=k+1;
			s_max=sum[k];
		}
	}
	printf("%d-max \n", max1);
	printf("the %d player has got the highest results: %d", *p, s_max);
}
void eight_16(){
	int sum2, sum3, sum1;
	int max1,max2, max_sum;
	int i,j,k,l;
	int a,b;
	k=3;
	max1=-1;
	max2=-1;
	max_sum=-1;
	a=12;
	b=3;
	int m[a][b];
	int sm[3]={sum1,sum2,sum3};
	for(i=0; i<12; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Enter the salary of %d employee in the %d month: \n", i+1, j+1);
			scanf("%d", &m[i][j]);
			if(m[i][j]<=32767 && m[i][j]>0)
			{
				if(m[i][j]>max1)
				{		
					max1=m[i][j];
					max2=i+1;
				}	
			}
			else{
				printf("wrong value of the number, enter again \n");
				scanf("%d", &m[i][j]);
			}
		}
		sum1+=m[i][1];			
		sum2+=m[i][2];		
		sum3+=m[i][3];
	}
	for(l=0; l<3;l++)
	{
		if(sm[l]>max_sum)
		{
			max_sum=l;
		}
	}
	printf("the highest payment in the table-%d \n", max1);
	printf("number of the bestpaid worker-%d \n", max2);
	printf("sum1 is %d \n", sum1);
	printf("sum2 is %d \n", sum2);
	printf("sum3 is %d \n", sum3);
	printf("in the %d month- max salaries\n", max_sum);
}
void eight_17(){
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
	int m[12]={0,0,0,0,0,0,0,0,0,0,0,0};
	int m1[3]={0,0,0};
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
}
void eight_18(){
	int n=5;
	int m=4;
	int i,j, a[n][m];
	int b[n];
	int c[m];
	fill_in_by_zeros(b,n);
	fill_in_by_zeros(c,m);
	int min_a=32768;
	int min_b=32768;
	int min_c=32768;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("amount of student in the %d parralel and in the %d-letter class\n", i+1 ,j+1);
			scanf("%d", &a[i][j]);
			if(a[i][j]<min_a)	min_a=a[i][j];
			b[i]+=a[i][j];
			c[j]+=a[i][j];
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			if(b[i]<min_b)	min_b=b[i];
			if(c[j]<min_c)	min_c=c[j];
		}
	}
	printf("a)%d students study in the smallest class\n", min_a);
	printf("b)the smallest amount of students located in the one parralel-%d\n", min_b);	
	printf("c)the the smallest amount of students between the letters-%d\n", min_c);
}
void eight_19(){
	int i,j;
	int m=3;
	int n=4;
	int a[m][n];
	int min_p[m];
	for(i=0 ; i<m; i++)	min_p[i]=max;
	int min_l[n];
	for(i=0 ; i<n; i++)	min_l[i]=max;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d-parallel %d-letter\n", i+1, j+1);
			scanf("%d", a[i][j]);
			if(a[i][j]<min_p[i])	min_p[i]=a[i][j];
			if(a[i][j]<min_l[j])	min_l[j]=a[i][j];
		}
	}
}	
void eight_41(){
	int x,y,k;
	int x1[30]={0};
	int y1[30]={0};
	int k1[30]={0};
	int i=0;
	for(k=1; k<31; k++){
		for(y=1; y<31; y++){
			for(x=1; x<31; x++){
				if(search(x1, 30, x)*search(y1, 30, y)!=0 && search(x1, 30, x)==search(y1, 30, y))	continue;
				if(k*k==x*x+y*y && search(x1, 30, x)*search(y1, 30, y)==0)
					printf("%d^2+%d^2=%d^2\n", x, y,k);
					x1[i]=y;
					y1[i]=x;
					k1[i]=k;
					i++;
			}
		}
	}
	printf("final look of the arrays\n");
	printf("The array of x-s\n");
	print_array(x1, 30);
	printf("The array of y-s\n");
	print_array(y1, 30);
	printf("The array of k-s\n");
	print_array(k1, 30);
}
void eight_42(){
	int i,m,n;
	int sum=0;
	printf("Enter the value of m and the pow n: ");
	scanf("%d %d", &m, &n);
	for(i=1; i<m+1; i++){
		sum+=pow(i, n);
		int t=pow(i, n);
		if(i!=m)	printf("%d + ", t);
		else	printf("%d ", t);
	}
	printf("= %d\n", sum);
}
void eight_44(){
	int i,j,k,n;
	scanf("%d", &n);
	if(n>27 || n<=0){
		printf("wrong value, enter again: \n");
		scanf("%d", &n);
	}
	for(i=1; i<10; i++){
		for(j=0; j<10; j++){
			for(k=0; k<10; k++){
				if(i+j+k==n)	printf("%d+%d+%d=%d\n", i,j,k,n);
			}
		}
	}
}
void eight_45(){
	int i,j,k;
	for(i=1; i<10; i++){
		for(j=0; j<10; j++){
			for(k=0; k<10; k++){
				if(i+j+k==3*k)	continue;
				printf("%d%d%d\n", i,j,k);
			}
		}
	}
}
void eight_46(){
	int i;
	int m[6]={36,66,96,66,33,21};
	int t=gcd(m[0], m[1]);
	for(i=2;i<6; i++){
		printf("%d\n", t);
		t=gcd(t, m[i]);
	}
	printf("the final GCD is %d\n", t);
}
int eight_47(){	
	int m[10]={ 100, 200, 300, 500, 1000, 1200, 
	1400, 1500, 2000, 3000 };
	int a=0;
	int v,i,j;	
	scanf("%d", &v);
	if((v%10)+(v%100)!=0)	return 0;
	int v1=v;
	int tmp;
	for(i=9; i>0; i--){
		printf("%d-st/nd/rd/th weigh\n", i);
		if(v1>m[i]){
			tmp=i;	
			printf("m[i] %d - %d = %d\n", v1, m[i], v1-m[i]);
			v1-=m[i];	
			for(j=tmp-1; j>=0; j--){
				if(v1-m[j]<0){
					continue;}
				
				else if(v1==0 || v1-m[j]==0){
					a++;
					printf("%d - %d = %d end, current amount of cases - %d\n", v1, m[j], v1-m[j],a);	
					v1=v;
				}
				else if(j==0 && v1!=0)	v1=v;
				else{
					printf("%d - %d = %d\n", v1, m[j], v1-m[j]);	v1-=m[j];	
				}
			}
		}
		else{
			continue;
		}
		
	}
	return a;
	/***
	if(sum_of_elements(m2,10)==v){
		print_array(m2, 10);	rslt++;
	}
	***/
}
int main(){
/********************
	eight_14();
	eight_15();
	eight_16();
	eight_17();
	eight_18();
	eight_19();
	eight_41();
	eight_42();
	eight_44();
	eight_45();
	eight_46();
	eight_47();
*********************/
	printf("%d\n", eight_47());
	return 0;
} 
