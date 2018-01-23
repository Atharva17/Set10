#include<stdio.h>
int main()
{
           int n[10],K,N,i;
           scanf("%d%d",&N,&K);
           for(i=1;i<N;i++)
           scanf("%d",&n[i]);
           printf("%d",n[K]);
	return 0;
}
