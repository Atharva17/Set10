#include<stdio.h>
int main()
{
   float L,B,H;
	scanf("%f%f%f",&L,&B,&H);
	printf("area=%.2f",2*L*B+2*L*H+2*B*H);
	printf("\nVolume==%.2f",L*B*H);
	return 0;
}
