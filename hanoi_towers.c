#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, int k, int b);
int main(){
	hanoi(6,1,2);
	return 0;
}
void hanoi(int n, int k, int b){
	if(n==1)	printf("move 1 disk from %d rod to %d rod\n", k, b);
	else{
		int tmp=6-k-b;
		hanoi(n-1, k ,tmp);
		printf("move %d disk from %d rod to %d rod\n", n, k, b);
		hanoi(n-1, tmp, b);
	}
}
