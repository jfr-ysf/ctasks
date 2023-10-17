#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iso646.h>
#define a1 8
#define b1 7
void print_array(int a[], int l){
	int i;
	for(i=0; i<l; i++)	printf("%3d ", a[i]);
	printf("\n");
}
int min_2(int a, int b){
	int c=a>b ? b:a;
	return c;
}
int min_3(int a,int b,int c){
	int i,min=32768;
	int m[3]={a,b,c};
	for(i=0; i<3; i++)	min=min>m[i] ? m[i] : min;
	return min;
}
/*************************
int min(int a){
	if(a==2)	min_2();
	if(a==3)	min_3();
	else	return 0;
}
*************************/
int max(int a, int b){
	if(a>b)	return a;
	else if(a<b)	return b;
}
int tgts(int a[],int n, int b[], int n1){
	int f[n+1][n1+1];
	int i,j;
	for(i=0; i<n+1; i++){
		for(j=0; j<n1+1; j++){
			f[i][j]=0;
		}
	}
	for(i=1; i<n+1; i++){
		for(j=1; j<n1+1; j++){
			if(a[i-1]==b[j-1])	f[i][j]=f[i-1][j-1]+1;
			else{
				f[i][j]=max(f[i-1][j], f[i][j-1]);
			}
		}
	}
	return f[n][n1];
}
int editorial_distance(char a[], int a2, char b[], int b2){
	int f[a2+1][b2+1];
	int i,j;
	for(i=0; i<a2+1; i++)	for(j=0; j<b2+1; j++)	f[i][j]= (i*j)==0 ? (i+j) : 0;
	for(i=1; i<a2+1; i++)	for(j=0; j<b2+1; j++)	f[i][j]=a[i-1]==b[j-1]? f[i-1][j-1] : (1+min_3(f[i-1][j], f[i][j-1], f[i-1][j-1]));
	return f[a2][b2];
}
int equal_strings(char a[],int a2, char b[], int b2){
	if(a2!=b2)	return 0;
	int i;
	for(i=0; i<a2; i++)	if(a[i]!=b[i])	return 0;
	return 1;
}
void search_substring(char a[], int a2, char sub[], int b2){
	/************
	Requirements:
	The string 'sub' must be shorter than string 'a', a2>b2
	************/
	int i;
	for(i=0; i<a2-b2; i++){
		if(equal_strings(sub, b2, a, a2-b2)==1)	printf("%d\n", i);
	}
}
int main(){
	int a[a1]={1,4,6,87,45,33,94,2};
	int b[b1]={4,87,33,6,76,31,22};
	printf("%d\n", tgts(a,a1,b,b1));
	char q[]="Hello";
	char w[]="hello";
	editorial_distance(q,5,w,4);
	printf("%d\n", editorial_distance(q,5,w,5));
	int c=3;
	return 0;
}
