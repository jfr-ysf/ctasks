#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

static int cash[100]={0};

double power(double a, int b){
	if(b==0)	return 1;
	if(b%2==0)	return power(a*a, b/2);
	else	
		return a*power(a, b-1);
}
int fib(int n){
	if(n==0 || n==1)	return n;
	else
		return fib(n-1)+fib(n-2);
}
int array_fib(int n){
	int i;
	int m=n;
	int Fib[m+1];
	Fib[0]=0;
	Fib[1]=1;
	for(i=2 ; i<=n; i++)
		Fib[i]=Fib[i-2]+Fib[i-1];
	return Fib[n];
}
int dyn_fib(int n){
	if(n<=1)	return n;
	if(cash[n]==0)
	{
		cash[n]=dyn_fib(n-1)+dyn_fib(n-2);
	}
	return cash[n];
}
int main(){
	int n=50;
	int i;
	for(i=0; i<=n; i++)
	{	
		clock_t time1=clock();
		int result=array_fib(i);
		clock_t time2 = clock();
		int delta_ms= (time2-time1)*1000/CLOCKS_PER_SEC;
		printf("fib(%d) is %d ,\t time = %d ms\n", i, result, delta_ms );
	}
	return 0;
}
