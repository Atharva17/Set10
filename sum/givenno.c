#include<stdio.h>
int main()
{
           int N,n[10],i,sum=0;
           scanf("%d",&N);
           for(i=1;i<=N;i++)
           scanf("%d",&n[i]);
           for(i=1;i<=N;i++)
           sum+=n[i];
           printf("%d",sum);
	         return 0;
}
