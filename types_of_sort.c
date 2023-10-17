#include <stdio.h>
#define n 5

void insert_sort(int a[], int l){
	int i;
	for(i=0; i<l; i++)	printf("%d ", a[i]);
	printf("\n");
	for(i=0; i<l; i++){
		int k=i;
		while(k>0 && a[k-1]>a[k]){
			int tmp=a[k];
			a[k]=a[k-1];
			a[k-1]=tmp;
			k-=1;
		}
	}
	for(i=0; i<l; i++)	printf("%d ", a[i]);
	printf("\n");
}
void choice_sort(int a[], int l){
	int i,j;
	for(i=0; i<l; i++)	printf("%d ", a[i]);
	printf("\n");
	for(i=0; i<l-1; i++){
		for(j=i+1; j<l; j++){
			if(a[j]<a[i]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	for(i=0; i<l; i++)	printf("%d ", a[i]);
	printf("\n");
}
void bubble_sort(int a[], int l){
	int i,j;
	for(i=0; i<l; i++)	printf("%d ", a[i]);
	printf("\n");
	for(i=1; i<l; i++){
		for(j=0; j<l-i; j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	for(i=0; i<l; i++)	printf("%d ", a[i]);
	printf("\n");
}
void count_sort(int a[], int l){
	int r=-32768;
	int i,j;
	for(i=0; i<l; i++){
		printf("%d ", a[i]);
		if(a[i]>r)	r=a[i];
	}
	printf("\n");
	int b[r+1];
	for(i=0 ; i<r+1; i++)	b[i]=0;
	for(i=0 ; i<l; i++){
		for(j=0; j<r+1; j++)
		{
			if(a[i]==j)	b[j]+=1;
		}
	}
	for(i=0 ; i<r+1; i++){
		if(b[i]==0)	continue;
		for(j=0; j<b[i]; j++){
			printf("%d ", i);
		}
	}
	printf("\n");
}
void merge_sort(int* a, int n);
void quick_sort(int* a, int n);
int main(){
	int c=6;
	int a[n]={4, 2, 3, 5,1};
	int a1[n]={4, 2, 3, 5,1};
	int a2[n]={4, 2, 3, 5,1};
	int a3[n]={1,633,5,5,25};
	insert_sort(a, n);
	printf("\n");
	choice_sort(a1, n);
	printf("\n");
	printf("\n");
	bubble_sort(a2, n);
	printf("\n");
	count_sort(a3, n);
	printf("\n");
	return 0;
}
