#include <stdio.h>
#include <stdlib.h>
#define m_height 4
#define m_width 5

void dyn_array_print(int **A, size_t N, size_t M){
	int i, j;
	for(i=0; i<(int)N; i++)
	{
		for(j=0 ; j<(int)M;  j++)	printf("%*d", 5, A[i][j]);
		printf("\n");
	}
}
int** dynamic_array(size_t N, size_t M){
	int** A;
	int i;
	A=(int**)malloc(N*sizeof(int*));
	for(i=0; i<(int)N; i++)	A[i]=(int*)malloc(M*sizeof(int));
	int x,j;
	x=1;
	for(i=0; i<(int)N; i++)
	{
		for(j=0 ; j<(int)M; j++)
		{
			A[i][j]=x;
			x++;
		}
	}
	dyn_array_print(A, N, M);
	return A;
}
void free_dyn_array(int** A, size_t N){
	int i;
	for(i=0 ; i<(int)N; i++)	free(A[i]);
	free(A);
}
void static_array_print(int A[][m_width], size_t N){
	int i, j;
	for(i=0; i<(int)N; i++)
	{
		for(j=0 ; j<m_width;  j++)	printf("%*d", 5, A[i][j]);
		printf("\n");
	}
}
void static_array_test(size_t N){
	int A[N][m_width];
	int x,i,j;
	x=1;
	for(i=0; i<(int)N; i++)
	{
		for(j=0 ; j<m_width; j++)
		{
			A[i][j]=x;
			x++;
		}
	}
	static_array_print(A, N);
	printf("\n Direct memory access:\n");
	int* p;
	for(p=(int*)A; p < (int*)A+20; p++)	printf("%3d", *p);
	printf("\n\n");
}

int** dyn_array_2(size_t N, size_t M){
	int i;
	int** A=(int**)malloc(N*sizeof(int*)+N*M*sizeof(int));
	int *start=(int*)((char*)A+N*sizeof(int*));
	for(i=0; i<(int)N; i++)	A[i]=start+i*M;
	return A;
}
int main(){
	int** A=NULL;
	int height, width;
	height=4;
	width=5;
	static_array_test(m_height);
	dynamic_array(height, width);
	free_dyn_array(A, height);
	return 0;
}
/******************************************************************************
int main(){
	int N, i;
	printf("Enter the size of array:");
	scanf("%d", &N);
	char* A=(char*)malloc(N*sizeof(char));
	if(A==NULL)
	{
		printf("OS didn't give memory. Exit...\n");
		exit(1);
	}
	for(i=0;  i<N; i++)	A[i]=i;
	printf("array has been succesfully created\n");
	system("pause");
	return 0;
}
*******************************************************************************/
