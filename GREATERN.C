#include<stdio.h>
void main()
{
int n1,n2,n3;
printf("enter the number1:");
scanf("%d",&n1);
printf("enter the number2");
scanf("%d",&n2);
printf("enter the number3");
scanf("%d",&n3);
	if((n1>n2)&&(n1>n3))
	{
		printf("Number1 is greater",n1);
	}
	else if((n2>n1)&&(n2>n3))
	{
		printf("Number 2 is greater",n2);
	}
	else
	{
		printf("Number 3 is greater,",n3);
	}
getch();
}
