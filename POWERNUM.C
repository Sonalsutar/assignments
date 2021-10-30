#include<stdio.h>
int power(int b,int e)
{
	if(e==0)
		return 1;
	else
		return(b*power(b,e-1));
}
void main()
{
int base,exponent;
	printf("enter the base");
	scanf("%d",&base);
	printf("enter the exponent");
	scanf("%d",&exponent);

	printf("power(%d^%d) = %d \n",base,exponent,power(base,exponent));
	getch();
}