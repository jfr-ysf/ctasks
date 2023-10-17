#include <stdio.h>
#define n 10000
void quick_find(){
	int i, p, q, t, id[n];
	for(i=0; i<n; i++)	id[i]=i;
	while(scanf("%d %d", &p, &q)==2){
		if(id[p]==id[q])	continue;
		for(t=id[p], i=0; i<n; i++)
			if(id[i]==t)	id[i]=id[q];
		printf(" %d  %d\n", p,q);
	}
}
void quick_union(){
	int i,j,p,q,id[n];
	for(i=0; i<n; i++)	id[i]=i;
	while(scanf("%d %d", &p, &q)==2){
		for(i=p; i!=id[i]; i=id[i]);
		for(j=q; j!=id[j]; j=id[j]);
		if(i==j)	continue;
		id[i]=j;
		printf(" %d  %d\n", p,q);
	}
}
void weighted_quick_union(){
	int i,j,p,q,id[n], sz[n];
	for(i=0 ; i<n; i++)	
	{	id[i]=i;	sz[i]=1;}
	while(scanf("%d %d", &p, &q)==2)
	{
		for(i=p; i!=id[i]; i=id[i]);
		for(j=q; j!=id[j]; j=id[j]);
		if(i==j)	continue;
		if(sz[i]<sz[j]){
			id[i]=j;
			sz[j]+=sz[i];
		}
		else{
			id[j]=i;
			sz[i]+=sz[j];
		}
		printf("%d %d\n", p, q);
	}
}
void weighted_quick_union_with_path_compression_by_halving(){
	int i,j,p,q,id[n], sz[n];
	for(i=0 ; i<n; i++)	
	{	id[i]=i;	sz[i]=1;}
	while(scanf("%d %d", &p, &q)==2)
	{
		for(i=p; i!=id[i]; i=id[i])	id[i]=id[id[i]];
		for(j=q; j!=id[j]; j=id[j])	id[j]=id[id[j]];
		if(i==j)	continue;
		if(sz[i]<sz[j]){
			id[i]=j;
			sz[j]+=sz[i];
		}
		else{
			id[j]=i;
			sz[i]+=sz[j];
		}
		printf("%d %d\n", p, q);
	} 
}
int main(){
	quick_find();
	quick_union();
	weighted_quick_union();
	weighted_quick_union_with_path_compression_by_halving();
	return 0;
}
