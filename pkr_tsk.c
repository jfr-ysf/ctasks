#include <stdio.h>
#include <stdlib.h>
#define hash(v, M)	(v & M-1)
/*************
int main(int argc, char *argv[])
{
	int max_sum=-1;
	int min=32767;
	int i,j;
	int m[11][4];
	int n[11]={0};
	int n1[4]={0};
	for(i=0;i<11;i++)
	{
		for(j=0; j<3;j++)
		{
			printf("the amount of students in %d class of %d grade\n", j,i);
			scanf("%d", &m[i][j]);
			if(m[i][j]>0 && m[i][j]<32767)
			{
				if(m[i][j]<min)
				{
					min=m[i][j];
				}
			}
			else
			{
				printf("wrong vslue of number, try again: \n");
				scanf("%d", &m[i][j]);
			}
		}
	}
	printf("%d")
	return 0;
}

void neighbors(int** a, int m, int n){
	int 
	for
}

int ways(int** a, int m, int n){
	if(a[0][1]+a[1][0]==0){
		printf("impossible\n");	return 0;
	}
	int wys=n;
	int d=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[j][i]==0)	d+=1;
			printf("wys - %d d - %d\n", wys,d);
		}
		if(d>0){
			printf("wys - %d d - %d\n", wys,d);
			wys-=1;	d=0;			
		}
	}
	printf("%d\n",wys);
	return wys;
}	
int main(int argc, char *argv[]){
	int m,n;
	printf("Enter m: ");
	scanf("%d", &m);
	printf("Enter n: ");
	scanf("%d", &n);
	int a[m][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
			if(a[i][j]<0){
				printf("Re-Enter a[i][j]: ");
			}			
		}		
	}
	a[0][0]=1;
	a[m-1][n-1]=1;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	ways(a,m,n);
	//printf("%d\n",hash(3,25));
	return 0;
}
*************/
void bubble(int* a, int b){
	for(int i=0; i<b; i++){
		for(int j=0; j<b; j++){
			if(a[i]>=a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	for(int i=0; i<b; i++)	printf("%d ", a[i]);
	printf("\n");
}
void pkr_task(){
	int p[5];
	int counters[5]={0};
	while(1){
		int t;
		printf("Enter terminator to end this sh: ");
		scanf("%d", &t);
		if(t==999)	break;
		for(int i=0; i<5; i++)	scanf("%d", &p[i]);
		bubble(p,5);
		int pst=p[0];
		int cnt=0;
		int cnt2=0;
		int pst_ind;
		int w=0;//wasted
		for(int i=1; i<5; i++){
			if(pst==p[0] && p[i]==pst && i==1){
				cnt+=2;
				continue;
			}
			if(p[i]==pst && pst!=p[0] && pst_ind==(i-1)){
				if(cnt==0){
					cnt+=2;	w=1;
				}
				else	cnt2+=2;
				continue;
			}
			
			if(p[i]==pst && pst==p[0])	cnt+=1;
			if(p[i]==pst && pst!=p[0]){
				if(w==1)	cnt+=1;
				else	cnt2+=1;
			}
			if(p[i]!=pst){
				pst=p[i];
				pst_ind=i;
			}
		}
		if(cnt==5 && cnt2==0)	printf("poker\n");
		if(cnt==4 && cnt2==0 || cnt==0 && cnt2==4)	printf("four of a kind\n");
		if(cnt==3 && cnt2==2 || cnt==2 && cnt2==3)	printf("full house\n");
		if(cnt==3 && cnt2==0 || cnt==0 && cnt2==3)	printf("three of a kind\n");
		if(cnt==2 && cnt2==2)	printf("two pairs\n");
		if(cnt==2 && cnt2==0 || cnt==0 && cnt2==2)	printf("one pairs\n");
		if(cnt==0 && cnt2==0)	printf("all different\n");
		printf("%d - cnt1 \n%d - cnt2 \n", cnt, cnt2);
	}
}
int main(int argc, char *argv[]){
	pkr_task();
	return 0;
}