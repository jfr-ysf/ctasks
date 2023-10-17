#include <stdio.h>
#include <stdlib.h>
void f(int *a);
int main(){
	int x = 10;
	int* p=&x;
	printf("%d\n", x);
	f(&x);
	printf("%d\n", x);	
	return 0;
}
void f(int *a){
	printf("%d\n", *a);
	*a+=10;
	printf("%d\n", *a);
}
