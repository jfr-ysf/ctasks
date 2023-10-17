#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/******************************************************
#define n 30

int search(int a[], int b, int s){
	int i;
	for(i=0; i<b; i++){
		if(a[i]==s){
			return 1;
			break;
		}
		else{
			return 0;
		}
	}
	
}
void fill_in_by_zeros(int a[], int l){
	int i;
	for(i=0; i<l; i++)	a[i]=0;
}
void print_array(int a[], int l){
	int i;
	for(i=0; i<l; i++)	printf("%3d ", a[i]);
	printf("\n");
}
int main(){
	int x,y,k;
	int k1[n];
	int x1[n];
	int y1[n];
	fill_in_by_zeros(k1,n);
	fill_in_by_zeros(x1,n);
	fill_in_by_zeros(y1,n);
	int j;
	for(j=0; j<n; j++)	k1[j]=0;
	int i=0;
	for(k=1; k<31; k++){
		for(x=1; x<31; x++){
			for(y=1; y<31; y++){
				if(pow(x,2)+pow(y,2)==pow(k,2)){
					if(search(k1,n,k)==1 && search(x1,n,y)==1 || search(y1,n,x)==1){
						printf("fuck\n");
						continue;
					}
					else{
						printf("%d^2+%d^2=%d^2\n",x,y,k);
						k1[i]=k;
						x1[i]=x;
						y1[i]=y;
					}
					i++;
					printf("%d\n", i);
				}
			}
		}
	}
	printf("array k1:");
	print_array(k1,n);
	printf("array x1:");
	print_array(x1,n);
	printf("array y1:");
	print_array(y1,n);
	return 0;
}
***************************************************************************************/
char man(){
	return "WTF";
}
int main(){
	printf("%c\n", man());
}


