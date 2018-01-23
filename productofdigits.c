#include<stdio.h>
int main()
{
           int n,digit,mul=1;
           scanf("%d",&n);
           while(n!=0)
           {
           	digit=n%10;
           	mul=mul*digit;
           	n/=10;
           }
           printf("%d",mul);
	return 0;
}
