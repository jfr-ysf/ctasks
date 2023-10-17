#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int euclid_alg(int a, int b){
	if(a==b)	return a;
	if(a>b){
		if(a%b==0)	return b;
		euclid_alg(b, a%b);
	}
	else{
		if(b%a==0)	return b;
		euclid_alg(a, b%a);
	}
}
int main(){
	printf("%d\n", euclid_alg(30,31));
	return 0;
}
