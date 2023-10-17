#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define n0 7
#define n1 8
void print_array(int a[], int s){
	int i;
	for(i=0; i<s; i++)	printf("%d ",a[i]);
	printf("\n");
}
void merge(int l[], int a, int r[], int b){
	int d=a+b;
	int c[d];
	int n;
	for(n=0; n<(a+b); n++)	c[n]=0;
	int i=0;
	int j=0;
	int k=0;
	while(i<a && j<b){
		if(l[i]<=r[j]){
			c[k]=l[i];
			i++;
			k++;
		}
		else{
			c[k]=r[j];
			j++;
			k++;
		}
	}
	while(i<a){
		c[k]=l[i];	i++;	k++;
	}
	while(j<b){
		c[k]=r[j];	j++;	k++;
	}
	print_array(c,d);
}
void merge_sort(int a[], int n){
	if(n>1){
		int mid=n/2;
		printf("%d\n", mid);
		int l[mid];
		int r[n-mid];
		int i,j;
		for(i=0; i<mid; i++)	l[i]=a[i];
		for(i=0, j=mid; i<n-mid,j<n;i++, j++)	r[i]=a[j];
		merge_sort(l, mid);
		merge_sort(r, n-mid);
		merge(l,mid,r, n-mid);
	}
}
/************************************************************************
int main(){
	int n=7;
	int a[n];
	int j;
	for(j=0; j<n; j++)	a[j]=n-j;
	int n1=6;
	int b[6]={13;45;6;7;98;3};
	print_array(a,n);
	print_array(b,n1);
	printf("%d\n",merge_sort(a, n) );
	merge(a,n,b,n1);
	return 0;
}
**************************************************************************/
int main(){
	int a[n0]={1,5,8,98,34,56,76};
	int b[n1]={34,5,67,0,12,3,44,32};
	print_array(a,n0);
	merge_sort(a,n0);
	return 0;
}
